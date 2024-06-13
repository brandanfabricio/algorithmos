#include <iostream>
using namespace ::std;
struct Nodo
{
    int data;
    Nodo *siguiente;
};

int main()
{
    int i, N, M;

    Nodo *t, *x;
    cout << "Introduce el numero de nodo (N) y el valor (M) \n";
    cin >> N >> M;
    t = new Nodo;
    t->data = 10;
    x = t;
    for (i = 1; i <= N; i++)
    {
        // cout << i << '\n';
        t->siguiente = new Nodo;
        t = t->siguiente;
        t->data = i;
    }

    t->siguiente = x;
    while (t != t->siguiente)
    {
        for (i = 1; i < M; i++)
        {
            t = t->siguiente;
        }
        cout << t->data << "  <- " << t->siguiente << " <- " << '\n';
        t->siguiente = x->siguiente;
        delete x;
    }
    cout << t->data << '\n';
    // cout << t << " " << t->data << " -> " << x << " " << x->data << "siguient" << t->siguiente;
    return 0;
}

// struct Nodo
// {
//     int clave;
//     struct Nodo *siguiente;
// };

// int main()
// {
//     int i, N, M;
//     Nodo *t, *x;
//     cout << "Introduce el numero de nodo (N) y el valor (M) \n";
//     cin >> N >> M;
//     t = new Nodo;
//     t->clave = 10;
//     x = t;
//     for (i = 2; i <= N; i++)
//     {
//         t->siguiente = new Nodo;
//         t = t->siguiente;
//         t->clave = i;
//     }
//     t->siguiente = x;
//     while (t != t->siguiente)
//     {
//         for (i = 1; i < M; i++)
//         {
//             t = t->siguiente;
//         }
//         cout << t->siguiente << '\n';
//         t->siguiente = x->siguiente;
//         delete x;
//     }
//     cout << t->clave << '\n';
//     return 0;
// }
