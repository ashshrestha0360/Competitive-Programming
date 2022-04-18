#include <iostream>
using namespace std;
int main()
{
    int L;
    int B;
    int Area, Peri;
    cin >> L;
    cin >> B;
    Area = L * B;
    Peri = 2 * (L + B);
    if (Area > Peri)
    {
        cout << "Area" << endl;
        cout << Area;
    }
    else if (Area == Peri)
    {
        cout << "Eq" << endl;
    }
    else
    {
        cout << "Peri" << endl;
        cout << Peri;
    }
    return 0;
}