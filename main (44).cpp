#include <iostream>

using namespace std;

int pierwiastek (int g)
{
    int w;
    for (int i=1; i<=g; i++)
    {
        if (i*i<=g)
        {
            w=i;
        }
    }
    return w;
}

int funkcja (int k)
{
    int m=1;
    int n=pierwiastek(k);
    int s;
    s=n;
    if (k==n)
    {
        return 1;
    }
    else
    {
        while (s!=0)
        {
           s=s/10;
           m=m*10;
        }
        k=k%m;
        if (k==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int a;
    cout << "Podaj jakas liczbe" << endl;
    cin >> a;

    cout << funkcja(a);
    return 0;
}
