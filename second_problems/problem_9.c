#include <stdio.h>

int main()
{

    int n, original, reverse, digit;

    printf("Enter a number:");
    scanf("%d", &n);

    original = n;
    reverse = 0;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (reverse == original)
    {
        printf("\n%d is a palindrome", original);
    }
    else
    {
        printf("\n%d is not a palindrome", original);
    }

    return 0;
}