// sortcom.cpp
// сортировка массива строк с помощью пользовательской  //функции сортировки
#include <iostream>
#include <string>                    // для strcmp()
#include <algorithm>
using namespace std;
                                     // массив строк
char* names[] = { "Serge", "Tata", "Elena",
                  "Dmitr", "Miha", "Vlad" };

bool alpha_comp(char*, char*);       // объявление

int main()
   {
   sort(names, names+6, alpha_comp); // сортировка строк
	//	sort(names, names+6); // сортировка строк
   for(int j=0; j<6; j++)      // вывод отсортированных строк
      cout << names[j] << endl;
   return 0;
   }

bool alpha_comp(char* s1, char* s2)  // возвращает true
                                     // если s1<s2
   {
   return ( strcmp(s1, s2)<0 ) ? true : false;
   }


