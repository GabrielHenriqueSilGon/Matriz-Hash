
#include "Faztxt.hpp"
using namespace std;

void
Faztxt::create ()   //FILE IGNORE ! ! !
{

string oro;
fstream arq;
arq.open("matrix.txt", ios_base::out);

if(!arq.is_open())
    {
        cout<<"Unable to open the file.\n";
    }
    
int i, j;
  srand (time (NULL));
  while (i < 1000)
    {
        while (j < 1000)
        { int ir = rand () % 1000;
          
          stringstream ss;  
          ss<<ir;  
          string s;  
          ss>>oro;  
          
          string zero = "0";
            
          while (oro.length() < 4){
            oro = zero + oro;
          }   
          
          arq.write(oro.data(), oro.size());
          j++;
        }
        string nn = "\n";
        arq.write(oro.data(), oro.size());
        i++;
    }

arq.close();
} 


void
Faztxt::getMatriz (int i1, int j1, int i2, int j2)
{/*int numero_skip;
   numero_skip = i*5001 + j:
   in.ignore(numero_skip, 'x')

*/
  
  int numm = i1*1000 + j1;
  int current_line = 0;
  int current_coluna = 0;
  int max_line = i2 - i1;
  int max_coluna = j2 - j1;
  string line;
  char del = ' '; 
  unordered_map<keyij, int> matriz;

  ifstream process("./src/matrix.txt");

  if(process.is_open())
  {

    for (int q = 0; q < numm; q++)
    {
      process.ignore(5,' ');
    }

    while(current_line < max_line)
    {
     getline(process,line);

     stringstream sstream(line);
     string token;
     char del = ' ';
      current_coluna = 0;
      getline(sstream, token, del);
      int valor_matriz = stoi(token);

      while(current_coluna < max_coluna)
      {
        keyij help;
        help.i = current_line;
        help.j = current_coluna;
        matriz[help] = valor_matriz;
          current_coluna++;
      }
     current_line++;
    }
 }else{cout << "erro" << endl;}

  process.close();

  int linhas = i2 - i1;
  int colunas = j2 - j1;

  cout << "Matriz adquirida:\n";
  mostraMatriz(matriz, colunas);
  
  fazTransposta(matriz, linhas, colunas);

}

void
Faztxt::fazTransposta (unordered_map<keyij, int> matriz, int linhas, int colunas)
{
  unordered_map<keyij, int> transposta;
  unordered_map<keyij, int> resposta;

  
  unordered_map<keyij, int>::iterator it;
  unordered_map<keyij, int>::iterator iit;
  unordered_map<keyij, int>::iterator iiit;
  
  for(it = matriz.begin(); it != matriz.end(); ++it){
    keyij halp;
    halp.i = it->first->j;
    halp.j = it->first->i;
    transposta[halp] = it->second; 

  }

  mostraMatriz(matriz, linhas);
  
  int soma = 0;
  int new_i = 0;
  int new_j = 0;
  int aux;



  aux=matriz.begin()->first.i;

  for(iit = matriz.begin(); iit != matriz.end(); ++iit){

    if(aux != iit->first.i){
          
          new_j++;
          if (!(new_j < linhas)){
            new_i++; 
          }
          keyij hilp;
          hilp.i = new_i;
          hilp.j = new_j;
          resposta[hilp] = soma;
          soma = 0;
     }

    int aux = iit->first->i; 
    for(iiit = transposta.begin(); iiit != transposta.end(); ++iiit){
       if(iit->first.i == iiit->first.j){
        soma = soma + (iit->second * iiit->second);
       }
    }
    }
    
    cout << "A matriz resposta é:\n";
    mostraMatriz(resposta, linhas);

}
  
void
Faztxt::mostraMatriz(unordered_map<keyij, int> matriz, int colunas){
 
    int count = 0;

     unordered_map<keyij, int >::iterator it;
     
     for(it = matriz.begin(); it != matriz.end(); ++it){
    
          cout << it->second << " | \t";
          count++;

         if (!(colunas > count)){cout << endl; count = 0;}
     }  

}




/*
  https://www.youtube.com/watch?v=w0mgn6OLKUs&t=363s
  aí taca um for de ignore(" ") até achar o j, e arruma a matriz

*/

// https://acervolima.com/tokenizando-uma-string-em-c/
// https://cplusplus.com/doc/tutorial/files/
// https://cplusplus.com/reference/istream/istream/ignore/
// https://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm
// https://www.inf.pucrs.br/~pinho/LaproI/Arquivos/Arquivos.htm
