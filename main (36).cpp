#include <iostream>

using namespace std;

int potega (int k)
{
  int p=1;
  for (int i=1; i<=k; i++)
  {
     p=p*2;
  }

  return p;
}

int main()
{
    int n;
    cout << "Podaj n" << endl;
    cin >> n;

    cout << potega(n);

    return 0;
}
