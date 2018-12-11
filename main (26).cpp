#include <iostream>

using namespace std;

int f (int k)
{
    if (k==0||k==1) return 1;
    else return f(k-1)+2*f(k-2)+3;

}
int main()
{
    int n;
    cout<<"Podaj n:"<<endl;
    cin>>n;
    cout <<f(n)<< endl;
    return 0;
}
