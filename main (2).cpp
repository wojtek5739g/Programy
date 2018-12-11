#include <iostream>

using namespace std;

int potega (int a, int b)
{
    if (b==0) return 1;
    else return a*potega(a, b-1);
}

int main()
{
    int x, n;
    cout << "Podaj podstawe" << endl;
    cin >> x;
    cout << "Podaj wykladnik" << endl;
    cin >> n;

    cout << potega (x, n);

    return 0;
}
