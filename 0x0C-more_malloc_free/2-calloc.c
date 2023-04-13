#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size) {
    /* check for zero arguments */
    if (nmemb == 0 || size == 0) {
        return NULL;
    }

    /* allocate memory using malloc */
    void *ptr = malloc(nmemb * size);

    /* check if allocation failed */
    if (ptr == NULL) {
        return NULL;
    }

    /* zero out the memory */
    _memset(ptr, 0, nmemb * size);

    /* return a pointer to the allocated memory */
    return ptr;
}
