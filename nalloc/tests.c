#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "nalloc.h"

void test_nalloc() {
  // Test allocation of a small block
  printf("Testing nalloc...\n");
  printf("Allocating a block of size 32 bytes...\n");
  void *ptr1 = nalloc(32);
  assert(ptr1 != NULL);
  Block *block1 = (Block *)ptr1 - 1;
  assert(block1->size == 32);
  assert(block1->magic == BLOCK_MAGIC);
  assert(block1->is_free == false);
  printf("Allocated block of size %zu with magic number %x\n", block1->size,
         block1->magic);

  // Test allocation of a larger block
  printf("Allocating a block of size 128 bytes...\n");
  void *ptr2 = nalloc(128);
  assert(ptr2 != NULL);
  Block *block2 = (Block *)ptr2 - 1;
  assert(block2->size == 128);
  assert(block2->magic == BLOCK_MAGIC);
  assert(block2->is_free == false);
  printf("Allocated block of size %zu with magic number %x\n", block2->size,
         block2->magic);
  // Test allocation of zero size
  printf("Allocating a block of size 0 bytes...\n");
  void *ptr3 = nalloc(0);
  assert(ptr3 == NULL); // Should return NULL for zero size
}

void test_nree() {
  // Allocate a block and then free it
  printf("Testing nree...\n");
  printf("Allocating a block of size 64 bytes...\n");
  void *ptr = nalloc(64);
  assert(ptr != NULL);
  Block *block = (Block *)ptr - 1;

  // Free the allocated block
  nree(ptr);
  assert(block->magic ==
         FREED_MAGIC); // Check if the magic number is set to FREED_MAGIC
  assert(block->is_free == true); // Check if the block is marked as free
  printf("Freed block of size %zu with magic number %x\n", block->size,
         block->magic);
  // Attempt to free a NULL pointer
  printf("Attempting to free a NULL pointer...\n");
  nree(NULL); // Should not crash or do anything
}

void test_invalid_magic() {
  // Allocate a block and then tamper with the magic number
  printf("Testing invalid magic number...\n");
  printf("Allocating a block of size 64 bytes...\n");
  void *ptr = nalloc(64);
  assert(ptr != NULL);
  Block *block = (Block *)ptr - 1;

  // Tamper with the magic number
  block->magic = 0x12345678;

  // Attempt to free the tampered block
  nree(ptr); // Should print an error message about invalid magic number
  printf("Attempted to free a block with tampered magic number.\n");
}

void test_memory_leak() {
  // Allocate a block and do not free it
  printf("Testing memory leak...\n");
  void *ptr = nalloc(256);
  assert(ptr != NULL);
  Block *block = (Block *)ptr - 1;

  // Check if the block is still allocated
  assert(block->magic == BLOCK_MAGIC);
  assert(block->is_free == false);
  printf("Memory leak test: allocated block of size %zu with magic number %x\n",
         block->size, block->magic);
}

int main() {
  test_nalloc();
  test_nree();
  test_invalid_magic();
  test_memory_leak();

  printf("All tests passed successfully!\n");
  return 0;
}
