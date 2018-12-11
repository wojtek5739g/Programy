#include <iostream>

using namespace std;

float f (int k)
{
    if (k==1) return 0.2;
    else return f(k-1)*-3;
}

int main()
{
    int n;
    cout<<"Podaj n"<<endl;
    cin>>n;
    cout <<f(n)<< endl;
}
