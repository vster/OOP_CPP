// statdata.cpp
// ����������� ������ ������
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class foo
{
  private:
    static int count;        // ����� ���� ��� ���� ��������
                             // (� ������ "����������")
  public:
    foo()                    // ����������������� ��� �������� �������
      { count++; }
    int getcount()           // ���������� �������� count
      { return count; }
};
//--------------------------------------------------------
int foo::count = 0;          // *�����������* count
//////////////////////////////////////////////////////////
int main()
{
  foo f1, f2, f3;            // �������� ���� ��������
  // ������ ������ ����� ���� � �� �� ��������
  cout << "Number of objects: " << f1.getcount() << endl;
  cout << "Number of objects: " << f2.getcount() << endl;
  cout << "Number of objects: " << f3.getcount() << endl;
  return 0;
}

