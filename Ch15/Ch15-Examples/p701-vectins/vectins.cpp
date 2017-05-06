// vectins.cpp
// демонстраци€ методов insert(), erase()
#include <iostream>
#include <vector>
using namespace std;

int main()
   {
   int arr[] = { 100, 110, 120, 130 };  //массив типа int

   int j;
   vector<int> v(arr, arr+4);           // инициализировать вектор
                                        //массивом

   cout << "\nBefore insert: ";
   for(j=0; j<v.size(); j++)        // вывести все элементы
      cout << v[j] << ' ';

   v.insert( v.begin()+2, 115);         // вставить 115 в позицию 2

   cout << "\nAfter insert:  ";
   for(j=0; j<v.size(); j++)            // вывести все элементы
      cout << v[j] << ' ';

   v.erase( v.begin()+2 );              // удалить элемент со 2 позиции

   cout << "\nAfter delete:    ";
   for(j=0; j<v.size(); j++)            // вывести все элементы
      cout << v[j] << ' ';
   cout << endl;
   return 0;
   }


