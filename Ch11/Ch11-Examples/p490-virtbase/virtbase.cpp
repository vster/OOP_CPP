// virtbase.cpp
// ����������� ������� ������
class Parent
    {
    protected:
      int basedata;
    };
class Child1 : virtual public Parent // ��������� �����
                                     // ������ Parent
    { };
class Child2 : virtual public Parent // ��������� �����
                                     // ������ Parent
    { };
class Grandchild : public Child1, public Child2
    {
    public:
      int getdata()
        { return basedata; }         // OK: ������ ���� �����
                                     //������ Parent
    };


