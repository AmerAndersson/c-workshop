/* calloc example */
#include <stdio.h>  /* printf, scanf, NULL */
#include <stdlib.h> /* calloc, exit, free */

/**
 * * void* calloc (size_t num, size_t size); Parameters
 * * num: Number of elements to allocate.
 * * size: Size of each element.
 * Allocate and zero-initialize array
 * Allocates a block of memory for an array of num elements, each of them size bytes long, and initializes all its bits to zero.
 * The effective result is the allocation of a zero-initialized memory block of (num*size) bytes.
 * If size is zero, the return value depends on the particular library implementation (it may or may not be a null pointer),
 * but the returned pointer shall not be dereferenced.
 *
 * Return Value
 * On success, a pointer to the memory block allocated by the function.
 * The type of this pointer is always void*, which can be cast to the desired type of data pointer in order to be dereferenceable.
 * If the function failed to allocate the requested block of memory, a null pointer is returned
 */
int main() {
    /**
     * This program simply stores numbers and then prints them out.
     * But the number of items it stores can be adapted each time the program is executed
     * because it allocates the needed memory during runtime.
     * free	Deallocate memory block (function)
     * malloc	Allocate memory block (function)
     * realloc	Reallocate memory block (function)
     */
    int i, n;
    int* data;
    printf("Amount of numbers to be entered: ");
    scanf("%d", &i);
    data = (int*)calloc(i, sizeof(int));
    if (data == NULL) exit(1);
    for (n = 0; n < i; n++) {
        printf("Enter number #%d: ", n + 1);
        scanf("%d", &data[n]);
    }
    printf("You have entered: ");
    for (n = 0; n < i; n++) printf("%d ", data[n]);
    free(data);
    return 0;
}