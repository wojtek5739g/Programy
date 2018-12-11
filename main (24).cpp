#include <iostream>

using namespace std;

int f(int k, int p)
{
    if (k==0) return p;
    if (p==0) return k;
    else return f(k-1, p)+f(k, p-1)+f(k-1, p-1);
}

int main()
{
    int n, m;
    cout << "Podaj n" << endl;
    cin >> n;
    cout << "Podaj m" << endl;
    cin >> m;

    cout << f(n, m);
    return 0;
}
