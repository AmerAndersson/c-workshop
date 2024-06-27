/* realloc example: rememb-o-matic */
#include <stdio.h>  /* printf, scanf, puts */
#include <stdlib.h> /* realloc, free, exit, NULL */

/**
 * *void* realloc (void* ptr, size_t size);
 * ptr: Pointer to a memory block previously allocated with malloc, calloc or realloc.
 * Alternatively, this can be a null pointer, in which case a new block is allocated (as if malloc was called).
 * size:
 * New size for the memory block, in bytes.
 * size_t is an unsigned integral type.

 * Reallocate memory block
 * Changes the size of the memory block pointed to by ptr.
 * The function may move the memory block to a new location (whose address is returned by the function).
 * The content of the memory block is preserved up to the lesser of the new and old sizes, even if the block is moved to a new location.
 * If the new size is larger, the value of the newly allocated portion is indeterminate
 *
 * Return Value
 * A pointer to the reallocated memory block, which may be either the same as ptr or a new location.
 * The type of this pointer is void*, which can be cast to the desired type of data pointer in order to be dereferenceable.
 * A null-pointer indicates that the function failed to allocate storage, and thus the block pointed by ptr was not modified
 */
int main() {
    int input, n;
    int count = 0;
    int* numbers = NULL;
    int* more_numbers = NULL;

    do {
        printf("Enter an integer value (0 to end): ");
        scanf("%d", &input);
        count++;

        more_numbers = (int*)realloc(numbers, count * sizeof(int));

        if (more_numbers != NULL) {
            numbers = more_numbers;
            numbers[count - 1] = input;
        } else {
            free(numbers);
            puts("Error (re)allocating memory");
            exit(1);
        }
    } while (input != 0);

    printf("Numbers entered: ");
    for (n = 0; n < count; n++) printf("%d ", numbers[n]);
    free(numbers);

    return 0;
}