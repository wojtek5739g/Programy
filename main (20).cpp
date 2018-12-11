#include <iostream>

using namespace std;

float pierwiastek(int k)
{
    int pom=0;
    for (int i=1; i<=k; i++)
    {
        if (i*i<=k)
        {
            pom=i;
        }
    }
    return pom;
}

int suma (int a)
{
    int suma=0;
    for (int i=1; i<=a; i++)
    {
        suma+=pierwiastek(i);
    }
    return suma;
}

int main()
{
    int n;
    cout << "Ile razy ma sie zrobic?" << endl;
    cin >> n;

    cout << suma(n);
    return 0;
}
