#include <iostream>

using namespace std;


int fun(int k)
{
    for (int i=2; i<k; i++)
    {
        if (k%i==0)
            return k/i;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << fun(n);

    return 0;
}
