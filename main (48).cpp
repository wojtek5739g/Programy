#include <iostream>

using namespace std;

int s (int k)
{
    if (k==1) return 1;
    else return k+s(k-1);
}


int main()
{
    int n;
    cout << "Liczba powtorzen" << endl;
    cin >> n;

    cout << s(n);
}
