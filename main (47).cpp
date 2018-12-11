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
    for (int i=1; i<=50; i++)
    {
        for (int j=i+1; j<=50; j++)
        {
            for (int k=j+1; k<=50; k++)
            {
                if (pitagoras(i, j, k)==1)
                {
                    cout << i << " ";
                    cout << j << " ";
                    cout << k << " ";
                    cout << endl;
                }

            }
        }
    }

    return 0;
}
