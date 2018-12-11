#include <iostream>

using namespace std;

int ilecyfr (int k)
{
    int i=0;
    while (k!=0)
    {
        k=k/10;
        i++;
    }
    return i;
}

int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;

    cout << ilecyfr(n);



    return 0;
}
