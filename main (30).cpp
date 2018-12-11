#include <iostream>

using namespace std;

int hanoi (int k)
{
    if (k==1) return 1;
    return 2*hanoi(k-1)+1;
}

int main()
{
    int n;
    cout << "Podaj liczbe krazkow" << endl;
    cin >> n;
    cout << "Liczba przelozen" << endl;
    cout << hanoi(n);

    return 0;
}
