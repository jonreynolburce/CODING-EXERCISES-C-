#include <stdio.h>

int main()
{

    int total_amount, payment_received, change;
    int bill_1000, bill_500, bill_200, bill_100, bill_50, bill_20, coin_10, coin_5, coin_1;

    printf("Enter the total amount payable:");
    scanf("%d", &total_amount);

    printf("Payment Received:");
    scanf("%d", &payment_received);

    change = payment_received - total_amount;
    printf("\nThe total amount of change: %d", change);

    bill_1000 = change / 1000;
    change = change % 1000;
    printf("\nNumber of 1000 bills: %d", bill_1000);

    bill_500 = change / 500;
    change = change % 500;
    printf("\nNumber of 500 bills: %d", bill_500);

    bill_200 = change / 200;
    change = change % 200;
    printf("\nNumber of 200 bills: %d", bill_200);

    bill_100 = change / 100;
    change = change % 100;
    printf("\nNumber of 100 bills: %d", bill_100);

    bill_50 = change / 50;
    change = change % 50;
    printf("\nNumber of 50 bills: %d", bill_50);

    bill_20 = change / 20;
    change = change % 20;
    printf("\nNumber of 20 bills: %d", bill_20);

    coin_10 = change / 10;
    change = change % 10;
    printf("\nNumber of 10 coins: %d", coin_10);

    coin_5 = change / 5;
    change = change % 5;
    printf("\nNumbe of 5 coins: %d", coin_5);

    coin_1 = change / 1;
    change = change % 1;
    printf("\nNumber of 1 coins: %d", coin_1);

    return 0;
}