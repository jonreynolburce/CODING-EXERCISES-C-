#include <stdio.h>

int main()
{
    int n, result, i;

    printf("Enter a number:");
    scanf("%d", &n);

    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    printf("%d! = %d", n, result);

    return 0;
}