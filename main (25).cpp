#include <iostream>

using namespace std;

int f (int k)
{
    if (k==1||k==2) return 1;
    else return f(k-2)+f(k-1);

}
int main()
{
    int n;
    cout<<"Podaj n:"<<endl;
    cin>>n;
    cout <<f(n)<< endl;
    return 0;
}
