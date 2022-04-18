#include <iostream>
using namespace std;
int odd(int[], int n);
int main()
{
    int i, j, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << odd(a, n);

    return 0;
}

int odd(int a[], int n)
{
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            return a[i];
        }
    }
    return 0;
}