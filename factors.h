#ifndef _FACTOR_H_
#define _FACTOR_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>

/*Functions like asprintf, vasprintf, and getline.
 * Macros like strdupa (stack-allocated strdup) and fmemopen.*/
#define _GNU_SOURCE


/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buffer);

#endif /* _FACTOR_H_ */
