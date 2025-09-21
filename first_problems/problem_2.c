#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;
    float perimeter, area, s;

    printf("Please input values for the 3 sides (in meters):");
    scanf("%d %d %d", &a, &b, &c);

    perimeter = a + b + c;
    printf("Perimeter = %.2f m", perimeter);

    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nArea = %.2f sq.m.", area);

    return 0;
}