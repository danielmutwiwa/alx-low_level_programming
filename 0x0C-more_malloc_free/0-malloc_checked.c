#include "main.h"
#include <stdio.h>
/**
 *malloc_checked: allocate memory using malloc
 *@b: input int
 *return: void
 */
void *malloc_checked(unsigned int b);
{
	void *ptr

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (void);
}
