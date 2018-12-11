#include <iostream>

using namespace std;

int funkcja (int k)
{
    if (k==1) return -3;
    if (k==2) return 1;
    else return funkcja(k-1)*funkcja(k-2)-1;
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    for(int i = 1 ; i <= n ; i++)
        cout << funkcja(i) << ", ";

    return 0;
}
