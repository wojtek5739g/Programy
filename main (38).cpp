#include <iostream>

using namespace std;

int silnia (int k)
{
    int p=1;
    for (int i=1; i<=k; i++)
    {
        p=p*i;
    }

    return p;
}

int silniarek (int k)
{
    if (k==0) return 1;
    else return k*silnia(k-1);
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << silnia(n) << endl;
    cout << silniarek(n);
    return 0;
}
