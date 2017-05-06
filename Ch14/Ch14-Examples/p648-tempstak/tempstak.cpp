// tempstak.cpp
// ���������� ����� � ���� �������
#include <iostream>
using namespace std;
const int MAX = 100;
///////////////////////////////////////////////////////////
template <class Type>
class Stack
  {
  private:
    Type st[MAX];       //����: ������ ������ ����
    int top;            //������ ������� �����
  public:
    Stack()             //�����������
      { top = -1; }
    void push(Type var) //������� ����� � ����
      { st[++top] = var; }
    Type pop()          //������ ����� �� �����
      { return st[top--]; }
  };
///////////////////////////////////////////////////////////
int main()
  {
  Stack<float> s1;      //s1 � ������ ������ Stack<float>

  s1.push(1111.1F);     //������� 3 �������� float, 
  s1.push(2222.2F);     // ���������� 3 �������� float
  s1.push(3333.3F);
  cout << "1: " << s1.pop() << endl;
  cout << "2: " << s1.pop() << endl;
  cout << "3: " << s1.pop() << endl;

  Stack<long> s2;       //s2 � ������ ������ Stack<long>

  s2.push(123123123L);  //������� 3 long, ���������� 3 long
  s2.push(234234234L);
  s2.push(345345345L);
  cout << "1: " << s2.pop() << endl;
  cout << "2: " << s2.pop() << endl;
  cout << "3: " << s2.pop() << endl;
  return 0;
  }


