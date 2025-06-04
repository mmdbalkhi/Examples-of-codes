# Nalloc - A minimalistic C memory allocator

## How this works

* `nalloc(size_t size)` allocates `size` bytes of memory and returns a pointer to the allocated memory.If the allocation fails, it returns `NULL`.
* `nree(void *ptr)` frees the memory pointed to by `ptr`. If `ptr` is `NULL`, it does nothing.

## usage example

```c
#include "nalloc.h"
#include <stdio.h>

    int main() {
  int *arr = nalloc(10 * sizeof(int)); // Allocate memory for 10 integers
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Use the allocated memory
  for (int i = 0; i < 10; i++) {
    arr[i] = i * 10;
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Free the allocated memory
  nree(arr);
  return 0;
}
```

* Compile with :

```bash 
gcc - Wall - Wextra - g nalloc.c example.c -example
./example
```

## Run tests

```bash
gcc -Wall - Wextra - g nalloc.c test.c - o tests
./tests
```
