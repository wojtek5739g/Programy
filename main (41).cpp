#include <iostream>

using namespace std;

float funkcja (int k)
{
    if (k==1) return -2;
    if (k==3) return 3;
    else return funkcja(k-1)-funkcja(k-3);
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
