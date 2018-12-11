#include <iostream>

using namespace std;

int pierwiastek (int g)
{
    int p=0;
    for (int i=1; i<=g; i++)
    {
        if (i*i==g)
        {
            p=i;
        }
    }

    return p;
}

int funkcja (int k)
{
    int b=pierwiastek(k);
    int m=1;
    int pom=b;
    int p=k;
    if (b==0) return 0;
    else
    {
        while (pom!=0)
        {
           pom=pom/10;
           m=m*10;
        }
        k=k%m;

        if (k==b)
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
for (int i=1; i<=10000; i++)
        if (funkcja(i)==1)
    cout << i << endl;

    return 0;
}
