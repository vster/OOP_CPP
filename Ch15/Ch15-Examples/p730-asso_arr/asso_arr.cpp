// asso_arr.cpp
// ������������ �����������, ������������� � �������� //�������������� �������
#pragma warning (disable:4786)  //��� �����������
//(������ ����������� Microsoft)
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
   {
   string name;
   int pop;

   string states[] = { "Wyoming", "Colorado", "Nevada",
                       "Montana", "Arizona", "Idaho"};
   int pops[] = { 470, 2890, 800, 787, 2718, 944 };

   map<string, int, less<string> > mapStates;      //�����������
   map<string, int, less<string> >::iterator iter; //��������

   for(int j=0; j<6; j++)
      {
      name = states[j];                //��������� ������ �� ��������
      pop = pops[j];
      mapStates[name] = pop;           //��������� �� � �����������
      }
   cout << "Enter name of state: "; //��������� ����� �����
   cin >> name;
   pop = mapStates[name];              //����� ��������� �����
   cout << "Population: " << pop << " 000\n";

   cout << endl;                       //����� ����� �����������
   for(iter = mapStates.begin(); iter != mapStates.end(); iter++)
      cout << (*iter).first << ' ' << (*iter).second << "000\n";
   return 0;
   }


