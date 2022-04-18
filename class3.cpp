#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, remainder;
        cin >> a >> b;
        remainder = a % b;
        cout << remainder<<endl;
    }
    return 0;
}
