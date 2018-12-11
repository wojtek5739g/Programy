#include <iostream>

using namespace std;

int pitagoras (int x, int y, int z)
{
    if (x*x+y*y==z*z)
    return 1;
    else return 0;
}

int main()
{
    int a, b, c;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;

    cout << pitagoras(a, b, c);
    return 0;
}
