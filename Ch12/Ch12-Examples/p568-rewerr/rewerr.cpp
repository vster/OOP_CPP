// rewerr.cpp
// Обработка ошибок ввода/вывода
#include <fstream>            // для файловых потоков
#include <iostream>
using namespace std;
#include <process.h>          // для exit()

const int MAX = 1000;
int buff[MAX];

int main()
  {
	int j;
	for(int j=0; j<MAX; j++)    // заполнить буфер данными
    buff[j] = j;
  ofstream os;                // создать выходной поток
                              // открыть его
  os.open("edata.dat", ios::trunc | ios::binary);
  if(!os)
    { cerr << "Error open input file\n"; exit(1); }

  cout << "Run writing...\n"; // записать в него содержимое
                              // буфера
  os.write( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  if(!os)
    { cerr << "Writing to file is impossible\n"; exit(1); }
  os.close();                 // надо закрыть поток

  for(j=0; j<MAX; j++)        // очистить буфер
    buff[j] = 0;

  ifstream is;                // создать входной поток
  is.open("edata.dat", ios::binary);
  if(!is)
    { cerr << "Error open input file\n";exit(1); }

  cout << "Run reading...\n"; // чтение файла
  is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
  if(!is)
    { cerr << "Error reading file\n"; exit(1); }

  for(j=0; j<MAX; j++)        // проверять данные
    if( buff[j] != j )
      { cerr << "\nIncorrect data\n"; exit(1); }
  cout << "Correct data\n";
  return 0;
  }


