
#include <stdio.h>
int main()
{
    int x;
    float y;
    printf("*** ATM Program***\n");
    printf("Enter the value of amount & balance\n");
    scanf("%d %f", &x, &y);
    if (x % 5 == 0 && (x + 0.5) < y)
    {

        printf("%0.3f\n", y - (x + 0.5));
    }
    else
    {
        printf("%f\n", y);
    }
    return 0;
}