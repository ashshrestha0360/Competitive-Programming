#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void annabelle(int[], int);
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i, n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        annabelle(a, n);
    }

    return 0;
}

void annabelle(int a[], int n)
{
    int i = 0, j = n - 1, flag = 0;
    while (i < j)
    {
        if (a[i] + a[j] == 2000)
        {
            flag = 1;
            break;
        }
        else if (a[i] + a[j] < 2000)
            i++;
        else
            j--;
    }

    if (flag == 1)
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}
