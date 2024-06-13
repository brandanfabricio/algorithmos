#include <iostream>
using namespace std;

int mcd(int u, int v)
{
    while (v != 0)
    {
        int t = v;
        v = u % v;

        u = t;
    }
    return u;
}

int main()
{
    cout << "Inicio \n";

    int x, y;
    while (cin >> x && cin >> y)
    {
        if (x > 0 && y > 0)
        {
            cout << x << ' ' << y << ' ' << mcd(x, y) << '\n';
        }
    }
    return 0;
}
