#include <iostream>
using namespace std;
int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        int r,sum = 0;
        cin >> n;
        while (n > 0)
        {
            r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}