#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i != j)
            {
                printf("%d%d", i, j);
                if (i != 9 || j != 8)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    printf("\n");
    return (0);
}
