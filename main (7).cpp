#include <iostream>

using namespace std;

float f (int k)
{
    if (k==1) return -3;
    if (k==2) return 1;
    else return f(k-2)*f(k-1)-1;
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
