#include <iostream>

using namespace std;

int potega (int n, int k)
{
    if (k==0) return 1;
    else return n*potega(n, k-1);
}

int main()
{
    int a, b;
    cout << "Podaj podstawe potegi" << endl;
    cin >> a;
    cout << "Podaj wykladnik potegi" << endl;
    cin >> b;
    cout << potega(a, b);

    return 0;
}
