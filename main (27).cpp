#include <iostream>

using namespace std;

int f (int liczba)
{
    if(liczba==0) return 1;
    else return 2*f(liczba-1)+5;

}
int main()
{
    int n;
    cout<<"Podaj n:"<<endl;
    cin>>n;
    cout <<f(n)<< endl;
    return 0;
}
