#include <stdio.h>
#include <math.h>

int main()
{
    long long num;
    int count = 0;

    printf("Enter any number: ");
    scanf("%lld", &num);
    
    count = (num == 0) ? 1  : (log10(num) + 1);

    printf("Total digits: %d", count);

    return 0;
}
