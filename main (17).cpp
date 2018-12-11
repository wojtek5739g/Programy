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
    int p=pierwiastek(k);
    int s;
    int l=1;
    int pom=k;
    if (p==0) return 0;
    else
        s=p;
        while (s!=0)
        {
            s=s/10;
            l=l*10;
        }
        k=k%l;
        if (k==p)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

int main()
{
  for (int i=1; i<=10000; i++)
        if (funkcja(i)==1)
    cout << i << endl;
    return 0;
}
