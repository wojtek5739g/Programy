#include <iostream>

using namespace std;

int silnia (int k)
{
    if (k==0) return 1;
    else return k*silnia(k-1);
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << silnia(n);


    return 0;
}
