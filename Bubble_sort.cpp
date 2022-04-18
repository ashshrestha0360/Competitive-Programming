#include <iostream>
using namespace std;
int main()
{
    int i, j, a[5], x;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout << a[i]<<"\t";
    }
    return 0;
}