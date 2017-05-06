// ferrors.cpp
// Проверка ошибок открытия файла
#include <fstream>           // для файловых функций
#include <iostream>
using namespace std;

int main()
  {
  ifstream file;
  file.open("group.dat");

  if( !file )
    cout << "\nImpossible open GROUP.DAT";
  else
    cout << "\nFile is opened without errors.";
  cout << "\nfile = " << file;
  cout << "\nError code = " << file.rdstate();
  cout << "\ngood() = " << file.good();
  cout << "\neof() = " << file.eof();
  cout << "\nfail() = " << file.fail();
  cout << "\nbad() = " << file.bad() << endl;
  file.close();
  return 0;
  }


