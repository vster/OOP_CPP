// binio.cpp
// Двоичный ввод/вывод целочисленных данных
#include <fstream>         // для файловых потоков
#include <iostream>
using namespace std;
const int MAX = 100;       // размер буфера
unsigned long buff[MAX];             // буфер для целых чисел
unsigned long buffin[MAX]; 

int main()
  {
  int j;
  for(int j=0; j<MAX; j++) // заполнить буфер данными
    buff[j] = rand();           // (0, 1, 2, ...)
                           // создать выходной поток
  ofstream os("edata.dat", ios::binary);
                           // записать в него
  os.write(reinterpret_cast<char*>(buff), MAX*sizeof(unsigned long) );
  os.close();              // должен закрыть его

  //for(j=0; j<MAX; j++)     // стереть буфер
  // buff[j] = 0;
                           // создать входной поток
  ifstream is("edata.dat", ios::binary);
                           // читать из него
  is.read( reinterpret_cast<char*>(buffin), MAX*sizeof(unsigned long) );

  for(j=0; j<MAX; j++)     // проверка данных
    if( buff[j] != buffin[j] )
      { cerr << "Incorrect data!\n"; return 1; }
  cout << "Correct data\n";
  return 0;
  }