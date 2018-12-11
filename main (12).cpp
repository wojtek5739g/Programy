#include <iostream>

using namespace std;

int f2 (int k)
{
    if (k==1) return 2;
    else return f2(k-1)*2;
}

int main()
{
    int n;
    cout << "ZAD 2" << endl;
    cout<<"Podaj n"<<endl;
    cin>>n;
    cout <<f2(n)<< endl;
}

