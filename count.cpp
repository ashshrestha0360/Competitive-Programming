#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[10];
    int count = 0, i;
    char c = 'i';
    cin >> a;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'i')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}