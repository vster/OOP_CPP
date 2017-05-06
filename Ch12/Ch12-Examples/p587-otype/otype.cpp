// otype.cpp
// Имитация команды TYPE
#include <fstream>        // для файловых функций
#include <iostream>
using namespace std;
#include <process.h>      // для exit()

int main(int argc, char* argv[] )
  {
  if( argc != 2 )
    {
    cerr << "\nFormat of commnad: otype filename";
    exit(-1);
    }
  char ch;                // символ для считывания
  ifstream infile;        // создать входной файл
  infile.open( argv[1] ); // открыть файл
  if( !infile )           // проверить на наличие ошибок
    {
    cerr << "\nImpossible open " << argv[1];
    exit(-1);
    }
  while( infile.get(ch) != 0 ) // считать символ
    cout << ch;                // отобразить символ
  return 0;
  }


