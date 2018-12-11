#include <iostream>

using namespace std;

double funkcja (int k)
{
    if (k<2)  return 1.5;
    else return funkcja(k-2)-2+funkcja(k-1);
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
