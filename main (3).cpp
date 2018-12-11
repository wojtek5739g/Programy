#include <iostream>

using namespace std;

int silnia (int k)
{
    if (k==0) return 1;
    else return k*silnia(k-1);
}

int newton (int n, int k)
{
    return (double) silnia(n)/(silnia(k)*(silnia(n-k)));
}

int main()
{
    int a, b;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;

    cout << newton(a, b);


    return 0;
}
