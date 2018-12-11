#include <iostream>

using namespace std;

int sumacyfr(int k)
{
    int s=0, b;
    while (k!=0)
    {
        b=k%10;
        k=k/10;
        s=s+b;
    }
    return s;
}

int main()
{
    int a;
    cout << "Podaj liczbe" << endl;
    cin >> a;

    cout << sumacyfr(a);
    return 0;
}
