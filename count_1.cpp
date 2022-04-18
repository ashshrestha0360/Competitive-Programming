#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, count = 0, flag = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for (i = 0 ; i < n; i++)
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
            cout << a[i];
        }
        else
        {

        }
    }

    return 0;
}
