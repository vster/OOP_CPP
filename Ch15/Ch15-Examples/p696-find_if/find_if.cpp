// find_if.cpp
// ищет в массиве типа string первое вхождение слова
//«Дмитрий»
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//---------------------------------------------------------
bool isDon(string name)      // возвращает true, если
                             //name=="Дмитрий"
   {
   return name == "Dmitr";
   }
//---------------------------------------------------------
string names[] = { "Serge", "Tata", "Elena",
                  "Dmitr", "Miha", "Vlad" };
// string names[] = { "Сергей", "Татьяна", "Елена", "Дмитрий", "Михаил", "Владимир" };
int main()
   {
   string* ptr;
   ptr = find_if( names, names+5, isDon );

   if(ptr==names+5)
      cout << "There is no Dmitr in list.\n";
   else
      cout << "Dmitr written in position "
        << (ptr-names)
        << " in list.\n";
   return 0;
   }


