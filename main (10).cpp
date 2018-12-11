#include <iostream>

using namespace std;

float f (int k)
{
    if (k==1) return -10;
    else return f(k-1)/-2;
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
