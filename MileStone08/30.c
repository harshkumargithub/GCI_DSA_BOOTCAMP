#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("enter the value of n=");
    scanf("%d", &n);

    for (i = 1; i <= 3 * n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i <= n)
            {
                if (j >= 2 * n - i)
                {
                    printf("*");
                }
                else
                    printf("");
            }
            else if (i <= 2 * n)
            {
                k = 0;
                if (j == 0)
                {
                    k = 1;
                    printf("|");
                }
                if (j <= i - n - 1)
                {
                    k = 1;
                    printf("*");
                }
                if (j >= i)
                {
                    k = 1;
                    printf("*");
                }
                if (k == 0)
                {
                    k = 1;
                    printf("");
                }
            }
            else if (i <= 3 * n)
            {
                if (j <= 3 * n - i)
                    printf("*");
                else
                    printf("");
            }
            printf("\n");
        }
    }
}