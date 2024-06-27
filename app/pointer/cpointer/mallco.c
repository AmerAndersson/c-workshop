
#include <stdio.h>
#include <stdlib.h>

/**
 ** Allocate memory block
 * Allocates a block of size bytes of memory, returning a pointer to the beginning of the block.
 * The content of the newly allocated block of memory is not initialized, remaining with indeterminate values.
 * If size is zero, the return value depends on the particular library implementation (it may or may not be a null pointer),
 * but the returned pointer shall not be dereferenced.
 */
// malloc example : random string generator
// <stdio.h>:  printf, scanf, NULL
// <stdlib.h>:  malloc, free, rand
// void* malloc (size_t size); Parameters
// Size of the memory block, in bytes.
// size_t is an unsigned integral type.

/**
 * Return Value
 * On success, a pointer to the memory block allocated by the function.
 * The type of this pointer is always void*, which can be cast to the desired type of data pointer in order to be dereferenceable.
 * If the function failed to allocate the requested block of memory, a null pointer is returned.
 */

int main() {
    /**
     * This program generates a string of the length specified by the user and fills it with alphabetic characters.
     * The possible length of this string is only limited by the amount of memory available to malloc
     *
     * free: Deallocate memory block (function)
     * calloc:	Allocate and zero-initialize array (function)
     * realloc:	Reallocate memory block (function)
     */
    int i, n;
    char* buffer;

    printf("How long do you want the string? ");
    scanf("%d", &i);

    buffer = (char*)malloc(i + 1);
    if (buffer == NULL) exit(1);

    for (n = 0; n < i; n++)
        buffer[n] = rand() % 26 + 'a';
    buffer[i] = '\0';

    printf("Random string: %s\n", buffer);
    free(buffer);
    return 0;
}