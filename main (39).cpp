#include <iostream>

using namespace std;

int funkcja (int k)
{
    if (k>=0)
        return k;
    else
        return -k;
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << funkcja(n);

    return 0;
}
