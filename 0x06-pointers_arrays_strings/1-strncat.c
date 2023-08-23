#include "main.h"
/**
 * a function that concatenates two strings.
 * @dis and @src tow pointers to distination and source forward
 * return a dis pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, lenght = 0;

	while (dest[lenght] != '\0')
        {
                lenght++;
        }
	for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[lenght + i] = src[i];
        }
	dest[lenght+n}='\0';
        return (dest);
}
