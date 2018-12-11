#include <iostream>

using namespace std;

int funkcja(int a, int b)
{
    int p=1;
    for (int i=1; i<=b; i++)
    {
       p=p*a;
    }

    return p;
}

int main()
{
    int n, m;
    cout << "Podaj n" << endl;
    cin >> n;
    cout << "Podaj m" << endl;
    cin >> m;

    cout << funkcja(n, m);

    return 0;
}
