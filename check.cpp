#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int check(int[], int[], int n);
int main()
{
    int i, n;
    cin >> n;
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int x = check(a, b, n - 1);
    if (x == 1)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not" << endl;
    }

    return 0;
}
int check(int a[], int b[], int n)
{

    if (n == 1)
    {
        if (a[0] = b[0])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (a[n - 1] == b[n - 1])
    {
        return check(a, b, n - 1);
    }
    return 0;
}
