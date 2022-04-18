#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char id;
        cin >> id;
        if (id == 'b' || id == 'B')
        {
            cout << "BattleShip" << endl;
        }
        else if (id == 'c' || id == 'C')
        {
            cout << "Cruiser" << endl;
        }
        else if (id == 'd' || id == 'D')
        {
            cout << "Destroyer" << endl;
        }
        else if (id == 'f' || id == 'F')
        {
            cout << "Frigate" << endl;
        }
    }
    return 0;
}

//BattleShip, Cruiser, Destroyer, Frigate