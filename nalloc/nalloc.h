#ifndef NALLOC
#define NALLOC

#include <stdbool.h>
#include <stddef.h>
#include <unistd.h>

#define BLOCK_MAGIC 0xDEADBEEF // Magic number to validate Block
#define FREED_MAGIC 0xCAFEBABE // Magic number to indicate freed Block

typedef struct Block {
  size_t size;        // Size of the block
  unsigned int magic; // Magic number for validation
  struct Block *prev; // Pointer to the previous block in the free list
  struct Block *next; // Pointer to the next block in the free list
  bool is_free;       // Flag to indicate if the block is free
} Block;

// prototypes for memory allocation functions
void *nalloc(size_t size); // Allocates memory of the specified size_t
void nree(void *ptr);      // Frees the allocated memory pointed to by ptr

#endif
