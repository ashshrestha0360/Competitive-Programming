// ATM Program
#include <stdio.h>
int main()
{
    int amount;
    float balance;
    printf("*** ATM Program***\n");
    printf("Enter the value of amount & balance\n");
    scanf("%d %f", &amount, &balance);
    if (amount % 5 == 0 && (amount + 0.5) < balance)
    {

        printf("%f\n", balance - (amount + 0.5));
    }
    else
    {
        printf("%f\n", balance);
    }
    return 0;
}