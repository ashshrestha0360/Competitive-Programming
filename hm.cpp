#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void missing(int[], int n);
int main()
{
    int i, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    return 0;
}

void missing(int a[], int n)
{
    int i, Sn, Sa;
    Sn = n*(n+1)/2;
    Sa = Sa+a[i];
}

int getMissingNo(int a[], int n)
{

    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}