#include <stdio.h>

int main()
{

    int n, i, result;

    printf("Enter a number:");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d", n);
    for (i = 1; i <= 10; i++)
    {
        result = n * i;
        printf("\n%d x %d = %d", n, i, result);
    }

    return 0;
}