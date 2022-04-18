#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i, n, q, sum = 0;

        cin >> n;
        long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cin >> q;
        long int s, e, w;

        for (i = 0; i < q; i++)
        {
            cin >> s >> e >> w;
            sum += (e - s + 1) * w;
        }
        cout << sum << endl;
    }
    return 0;
}