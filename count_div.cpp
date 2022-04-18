#include <iostream>
using namespace std;
int main()
{
    int i, a[5], count = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number:" << endl;
        cin >> a[i];
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 5 == 0)
        {
            count++;
        }
    }

    cout << "Total numbers divisible by 5 is " << count << endl;

    return 0;
}