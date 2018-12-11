#include <iostream>

using namespace std;

int pierw (int k, int p)
{
    int wynik, w;
    for (int i=1; i<=k; i++)
    {
        w=1;
        for (int j=1; j<=p; j++)
        {
            w=w*i;
        }
        if (w<=k)
        {
            wynik=i;
        }
    }
    return wynik;
}

int main()
{
    int n, m;
    cout << "Podaj n, pod pierwiastkiem" << endl;
    cin >> n;
    cout << "Podaj m" << endl;
    cin >> m;

    cout << pierw(n, m);

    return 0;
}
