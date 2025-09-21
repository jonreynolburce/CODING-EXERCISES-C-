#include <stdio.h>

int main()
{

    int earth;
    float mars, moon, jupiter;

    printf("Enter weight on Earth (in kg):");
    scanf("%d", &earth);

    mars = earth * 0.38;
    printf("\nWeight on Mars: %0.2f kg", mars);

    moon = earth * 0.165;
    printf("\nWeight on Moon: %.2f kg", moon);

    jupiter = earth * 2.34;
    printf("\nWeight on Jupiter: %.2f kg", jupiter);

    return 0;
}