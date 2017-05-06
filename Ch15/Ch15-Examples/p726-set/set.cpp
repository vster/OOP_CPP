// set.cpp
// ���������, �������� ������� ���� string
#pragma warning (disable:4786) //��� ������ � ����������� //(������ ��� ������������ Microsoft)
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
   {                           // ������ ��������� ��������
   string names[] = {"Juanita", "Robert",
                     "Mary", "Amanda", "Marie"};
                               // ����������������
                               //��������� ��������
   set<string, less<string> > nameSet(names, names+5);
                               // �������� ��� ���������
   set<string, less<string> >::iterator iter;

   nameSet.insert("Yvette");   // ������� ���������
   nameSet.insert("Larry");
   nameSet.insert("Robert");   // �������� �������: �����
                               //������� ��� �������
   nameSet.insert("Barry");
   nameSet.erase("Mary");      // �������� ��������
                               // ����� ������� ���������
   cout << "\nSize = " << nameSet.size() << endl;
   iter = nameSet.begin();     // ����� ��������� ���������
   while( iter != nameSet.end() )
      cout << *iter++ << '\n';

   string searchName;          //��������� �������� ����� ��
                               //������������
   cout << "\nEnter search name: ";
   cin >> searchName;
                               // ����� ����������������
                               // ������� �����
   iter = nameSet.find(searchName);
   if( iter == nameSet.end() )
      cout << "Name " << searchName << " ABCENT in set.";
   else
      cout << "Name " << *iter << " EXIST in set.";
   cout << endl;
   return 0;
   }

