#include <iostream>

using namespace std;

int funkcja (int k)
{
   int w;
   for (int i=1; i<=k; i++)
   {
       if (i*i*i==k)
       {
           w=i;
       }
   }
   if (w*w*w==k) return 1;
   else return 0;
}

int main()
{

    for (int i=1; i<=1000; i++)
    {
          if (funkcja(i)==1)
            cout << i << endl;
    }

    return 0;
}
