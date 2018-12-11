#include <iostream>

using namespace std;

int f(int k)
{
    if (k==0) return 1;
    if (k==1) return 1;
    if (k==2) return 1;
    else if (k%3==0) return f(k-1)*f(k-2);
    else if (k%3==1) return 5*f(k)+4;
    else if (k%3==2) return f(k+1);
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << f(n);
    return 0;
}
