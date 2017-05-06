// formato.cpp
// Форматированный вывод в файл с использованием <<
#include <fstream>        // для файлового ввода/вывода
#include <iostream>
#include <string>
using namespace std;

int main()
  {

	ofstream outfile("fdata.txt"); //создать объект ofstream

	for (int i = 0; i<10; i++)
		outfile << i << ' ';
	cout << "File written\n";
	return 0;
  }

