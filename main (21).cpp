#include <iostream>
#include <cmath>

using namespace std;

int pierw(int liczba)
{
    int p=0;
    for(int i=1;i<=liczba;i++)
        if(i*i<=liczba)
        p=i;
    return p;
}

int suma(int liczba)
{
    int s=0;
    for(int i=0;i<=liczba;i++)
        s=s+pierw(i);
    return s;
}

int main()
{
    int n;
    cout << "Podaj n:" << endl;
    cin>>n;
    cout<<"S="<<suma(n)<<endl;
    return 0;
}
