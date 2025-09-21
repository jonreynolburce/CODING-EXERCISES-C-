#include <stdio.h>

int main()
{

    int bill_amount, people, tip;
    float bill_tip, person;

    printf("Enter the bill amount:");
    scanf("%d", &bill_amount);
    printf("Enter the tip percentage:");
    scanf("%d", &tip);
    printf("Enter the number of people");
    scanf("%d", &people);

    bill_tip = bill_amount + (bill_amount * tip / 100);
    printf("\nTotal bill including tip: %.2f", bill_tip);

    person = bill_tip / people;
    printf("\nEach person should pay %.2f", person);

    return 0;
}