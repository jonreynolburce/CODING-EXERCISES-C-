#include <stdio.h>

int main()
{

    int seconds, minutes, hours;

    printf("Enter total seconds:");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("That is %d hours, %d minutes and %d seconds", hours, minutes, seconds);

    return 0;
}
