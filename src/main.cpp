
#include <cstdlib>
#include <utility>
#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h>
#include "Faztxt.hpp"
using namespace std;
int
main ()
{
  Faztxt f;
  int l1,c1,l2,c2;
   
  f.create();


  cout << "De um int para as linhas e um int para as colunas onde a matriz começa: " << endl;
  cin >> l1;
  cin >> c1;

  cout << "De um int para as linhas e um int para as colunas onde a matriz termina: " << endl;
  cin >> l2;
  cin >> c2;

  f.getMatriz(l1, c1, l2, c2);

  return 0;
}
