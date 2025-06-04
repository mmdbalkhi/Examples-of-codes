#include <stdio.h>

#include "nalloc.h"

void *nalloc(size_t size) {
  if (size ==
      0) { // Size always greater than 0 so we dont need to check lower limit
    return NULL;
  }

  // Align size to the nearest multiple of sizeof(Block)
  size_t total_size = size + sizeof(Block);
  Block *block = (Block *)sbrk(total_size);

  if (block == (void *)-1) {
    return NULL; // sbrk failed
  }

  block->size = size;
  block->magic = BLOCK_MAGIC;
  block->prev = NULL;
  block->next = NULL;
  block->is_free = false;

  return (void *)(block +
                  1); // Return pointer to the memory after the Block header
}

void nree(void *ptr) {
  if (ptr == NULL) {
    return; // Nothing to free
  }

  Block *block = (Block *)ptr - 1; // Get the Block header

  if (block->magic != BLOCK_MAGIC) {
    fprintf(stderr, "Invalid block magic number!\n");
    return; // Invalid block
  }

  block->magic = FREED_MAGIC; // Mark the block as freed
  block->is_free = true;
}
