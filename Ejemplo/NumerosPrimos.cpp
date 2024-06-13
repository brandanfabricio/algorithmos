#include <iostream>
using namespace std;
const int N = 1000;

void primos1()
{
    int i, j, a[N + 1];

    for (a[1] = 0, i = 2; i <= N; i++)
        a[i] = 1;
    for (i = 2; i < N / 2; i++)
        for (j = 2; j <= N / i; j++)
            a[i * j] = 0;

    for (i = 1; i <= N; i++)
        if (a[i])
            cout << i << ' ';
    cout << '\n';
}
void primos2()
{
    int i, j;
    bool a[N + 1];

    a[1] = 0;

    for (i = 2; i <= N; i++)
    {
        a[i] = 1;
    }
    // cout << a[i] << ' ';
    for (i = 2; i <= N / 2; i++)
    {
        for (j = 2; j <= N / i; j++)
        {
            a[i * j] = 0;
        }
    }
    for (i = 1; i <= N; i++)
    {
        if (a[i])
        {
            cout << i << ' ';
        }
    }
}
int main()
{

    cout << "Numeros primos 1 a 1000 Criba de Eratostentes";
    cout << '\n';

    // primos1();
    cout << '\n';
    primos2();
    return 0;
}