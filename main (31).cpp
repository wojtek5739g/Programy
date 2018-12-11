#include <iostream>

using namespace std;

int f (int n)
{
    int wynik=1;
    for (int i=1; i<=n; i++)
    {
        wynik=wynik*2;
    }
    return wynik-1;
}

int main()
{
    int n;
    cout << "Podaj liczbe krazkow" << endl;
    cin >> n;
    cout << "Liczba przelozen" << endl;
    cout << f(n);
    return 0;
}
