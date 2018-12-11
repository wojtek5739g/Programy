#include <iostream>

using namespace std;

int pierw (int k)
{
    int p=0;
    for (int i=1; i<=k; i++)
    {
        if (i*i==k)
        {
            p=i;
        }
    }

    return p;
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << pierw(n);

    return 0;
}
