#include <iostream>

using namespace std;

int funkcja (int a, int b)
{
    while (a!=b)
    {
       if (a>b)
           a=a-b;
       else
           b=b-a;
    }
}

int main()
{
    int n, m;
    cout << "Podaj n" << endl;
    cin >> n;
    cout << "Podaj m" << endl;
    cin >> m;

    cout << funkcja(n, m);
    return 0;
}
