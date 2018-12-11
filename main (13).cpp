#include <iostream>

using namespace std;

int f1 (int k)
{
    if (k==1) return 4;
    else return f1(k-1)+3;

}

int f2 (int k)
{
    if (k==1) return 2;
    else return f1(k-1)*2;
}

int main()
{
    int n;
    cout << "ZAD 1" << endl;
    cout<<"Podaj n"<<endl;
    cin>>n;
    cout <<f1(n)<< endl;
    return 0;
}
