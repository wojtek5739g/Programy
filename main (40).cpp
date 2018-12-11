#include <iostream>
#include <fstream>
#define N 1000
using namespace std;
int main()
{
 ifstream plik;
 plik.open("sygnaly.txt");
 string t[N];
 for (int i=0; i<N; i++){
  plik >> t[i];
 }
 plik.close();
 ofstream w;
 w.open("wynik.txt");
 for (int i=39; i<N; i+=40)
  w << t[i][9];
 w.close();
 return 0;
}
