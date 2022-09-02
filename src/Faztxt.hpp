#ifndef __FAZTXT_HPP
#define __FAZTXT_HPP
#include <ctime>
#include <string>
#include <utility>
#include <fstream>
#include <limits>
#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

typedef struct keyij keyij;

struct keyij {
	int i;
	int j;
};

class Faztxt
{

  public:
     void create();
     void getMatriz(int i1, int j1, int i2, int j2);
     void fazTransposta(unordered_map<keyij, int> matriz, int linhas, int colunas);
     void mostraMatriz(unordered_map<keyij, int> matriz, int colunas);
};

#endif
