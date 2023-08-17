#include <main.h>
/*
 * check if a char is upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
   	{
       		return 1;
    	}
	else
	{
        	return 0;
	}
}
