// englmult.cpp
// ��������� ����������� �������������� ������������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class Type                  // ��� ���������
{
  private:
    string dimensions;
    string grade;
  public:
    // ����������� ��� ����������
    Type ( ) : dimensions ( "N/A" ), grade ( "N/A" )
      { }
    // ����������� � ����� �����������
    Type ( string di, string gr ) : dimensions ( di ), grade ( gr )
      { }
    void gettype ( )        // ������ ���������� � ������������
      {
        cout << "  Enter nominal sizes (2x4 etc): ";
        cin >> dimensions;
        cout << "  Enter grade (raw, cant etc): ";
        cin >> grade;
      }
    void showtype ( )       // ����� ����������
      {
        cout << "\n  Sizes: " << dimensions;
        cout << "\n  Grade: " << grade;
      }
};
///////////////////////////////////////////////////////////
class Distance              // ���������� ���� �����
{
  private:
    int feet;
    float inches;
  public:
    // ����������� ��� ����������
    Distance ( ) : feet ( 0 ), inches ( 0.0 )
      { }
    // ����������� � ����� �����������
    Distance ( int ft, float in ) : feet ( ft ), inches ( in )
      { }
    void getdist ( )        // ������ ���������� � ������������
      {
        cout << "  Enter feet: "; cin >> feet;
        cout << "  Enter inches: "; cin >> inches;
      }
    void showdist ( ) const // ����� ����������
      {
        cout << feet << "\'-" << inches << '\"';
      }
};
///////////////////////////////////////////////////////////
class Lumber: public Type, public Distance
{
  private:
    int quantity;           // ����������
    double price;           // ���� �� �����
  public:
    // ����������� ��� ����������
    Lumber ( ) : Type ( ), Distance ( ), quantity ( 0 ), price ( 0.0 )
      { }
    // ����������� � ������ �����������
    Lumber ( string di, string gr, // ��������� ��� Type
             int ft, float in,     // ��������� ��� Distance
             int qu, float prc ) : // ���� ����������� ���������
             Type ( di, gr ),      // ����� ������������ Type
             Distance ( ft, in ),  // ����� ������������ Distance
             quantity ( qu ), price ( prc ) // ����� ����� �������������
      { }
    void getlumber ( )
      {
        Type::gettype ( );
        Distance::getdist ( );
        cout << "  Enter quantity: "; cin >> quantity;
        cout << "  Enter price: "; cin >> price;
      }
    void showlumber ( ) 
      {
        Type::showtype ( );
        cout << "\n  Length: ";
        Distance::showdist ( );
        cout << "\n  Cost " << quantity << " pcs: " << ( price * quantity ) << " rub";
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  Lumber siding;            // ���������� ����������� ��� ����������

  cout << "\n  Info of casing:\n";
  siding.getlumber ( );     // �������� ������ �� ������������

  // ���������� ����������� � ������ �����������
  Lumber studs ( "2x4", "const", 8, 0.0, 200, 4.45F );

  // ���������� ����������
  cout << "\nCasing"; siding.showlumber ( );
  cout << "\nCant";    studs.showlumber ( );

  cout << endl;
  return 0;
}


