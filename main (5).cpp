#include <iostream>

using namespace std;

float f (int k)
{
    if (k==1) return -1;
    if (k==2) return 0;
    if (k==3) return 0.5;
    else return f(k-1)-f(k-3);
}

int main()
{
    int n;
    cout<<"Podaj n"<<endl;
    cin>>n;
    cout << endl;
    for (int i=1; i<=n; i++)
    {
        cout <<f(i)<< " ";
    }
}
