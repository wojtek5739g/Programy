#include <iostream>

using namespace std;

int nwd (int a, int b)
{
    while (a!=b)
    {
       if (a>b)
           a=a-b;
       else
           b=b-a;
    }

    return a;
}

int suma (int k)
{
    int suma=0;
    for (int i=1; i<=k; i++)
    {
        if (nwd(k, i)==1)
        suma+=i;
    }
    return suma;
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << suma(n);

    return 0;
}
