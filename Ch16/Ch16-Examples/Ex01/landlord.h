//landlord.h
//������������ ���� landlord.cpp � �������� ����������
//������� � �.�.
#pragma warning (disable:4786) //��� �������� (������
                               // ����������� microsoft)
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>           //��� sort()
#include <numeric>             //��� accumulate()
using namespace std;
////////////////////���������� ������//////////////////////
void getaLine(string& inStr);  // ��������� ������ ������
char getaChar();               // ��������� �������

////////////////////����� tenant (������)//////////////////
class tenant
  {
  private:
  string name;       // ��� ������
  int aptNumber;     // ����� ������� ������
  // ����� ����� ���� ������ ���������� � ������ 
  // (������� � �.�.)

  public:
  tenant(string n, int aNo);
  ~tenant();
  int getAptNumber();
  // ����� ��� ������������� �� ���������
  friend bool operator < (const tenant&, const tenant&);
  friend bool operator == (const tenant&, const tenant&);
  // ��� �������� �����-������
  friend ostream& operator << (ostream&, const tenant&);      
};  // ����� ���������� ������ tenant
////////////////////����� compareTenants///////////////////
class compareTenants            //�������������� ������ ���
                                // ��������� ���� �������
  {
  public:
  bool operator () (tenant*, tenant*) const;
  };

///////////////////����� tenantList////////////////////////
class tenantList
  {
  private:
  // ���������� ��������� �� �������
  set<tenant*, compareTenants> setPtrsTens;
  set<tenant*, compareTenants>::iterator iter;

  public:
  ~tenantList();                // ���������� 
                                // (�������� �������)
  void insertTenant(tenant*);   // �������� ������ � ������
  int getAptNo(string);         // ���������� ����� �������
  void display();               // ����� ������ �������
   };
// ����� ���������� ������ tenantList

////////////////����� tenantInputScreen////////////////////
class tenantInputScreen
  {
  private:
  tenantList* ptrTenantList;
  string tName;
  int aptNo;

  public:
  tenantInputScreen(tenantList* ptrTL) : ptrTenantList(ptrTL)
     { /* ��� ����� */ }
  void getTenant();
  };  //����� ������ tenantInputScreen

////////////////////����� rentRow//////////////////////////
// ���� ������ ������� �������: ����� � 12 �������� �����
class rentRow
  {
  private:
  int aptNo;
  float rent[12];

  public:
  rentRow(int);                 // ����������� � �����
                                // ����������
  void setRent(int, float);     // ������ ����� �� �����
  float getSumOfRow();          // ����� �������� 
                                // �� ����� ������
  // ����� ��� ���������� �� ���������
  friend bool operator < (const rentRow&, const rentRow&);
  friend bool operator == (const rentRow&, const rentRow&);
  // ��� ������
  friend ostream& operator << (ostream&, const rentRow&);
  };  // ����� ������ rentRow

///////////////////////////////////////////////////////////
class compareRows               //�������������� ������ ���������
                                //�������� rentRows
  {
  public:
    bool operator () (rentRow*, rentRow*) const;
  };

////////////////////����� rentRecord///////////////////////
class rentRecord
  {
  private:
  // ��������� ���������� �� ������� rentRow (�� ������ �� 
  //  ������)
  set<rentRow*, compareRows> setPtrsRR;
  set<rentRow*, compareRows>::iterator iter;

  public:
  ~rentRecord();
  void insertRent(int, int, float);
  void display();
  float getSumOfRents();        // ����� ���� ��������
   };  // ����� ������ rentRecord

////////////////////����� rentInputScreen//////////////////
class rentInputScreen
  {
  private:
  tenantList* ptrTenantList;
  rentRecord* ptrRentRecord;
  
  string renterName;
  float rentPaid;
  int month;
  int aptNo;

  public:
  rentInputScreen(tenantList* ptrTL, rentRecord* ptrRR) :
                      ptrTenantList(ptrTL), ptrRentRecord(ptrRR)
     { /*��� �����*/ }
  void getRent();               //�������� ����� ������ 
                                // ������ �� ���� �����
  };  // ����� ������ rentInputScreen

///////////////////////����� expense///////////////////////
class expense
  {
  public:
  int month, day;
  string category, payee;
  float amount;
  expense()
    {  }
  expense(int m, int d, string c, string p, float a) :
       month(m), day(d), category(c), payee(p), amount(a)
    { /* ��� �����! */ }
  // ����� ��� �������� �� ���������
  friend bool operator < (const expense&, const expense&);
  friend bool operator == (const expense&, const expense&);
  // ����� ��� ������
  friend ostream& operator << (ostream&, const expense&);
  };  // ����� ������ expense   
///////////////////////////////////////////////////////////
class compareDates //�������������� ������ ��������� ������
  {      
  public:
    bool operator () (expense*, expense*) const;
  };
///////////////////////////////////////////////////////////
class compareCategories         //�������������� ������
                                // ��������� ������
  {      
  public:
    bool operator () (expense*, expense*) const;
  };

///////////////////����� expenseRecord/////////////////////
class expenseRecord
  {
  private:
  //������ ���������� �� �������
  vector<expense*> vectPtrsExpenses;
  vector<expense*>::iterator iter;

  public:
  ~expenseRecord();
  void insertExp(expense*);   
  void display();
  float displaySummary();       // ����� ��� �������� 
                                // ������
  };  // ����� ������ expenseRecord

////////////////����� expenseInputScreen///////////////////
class expenseInputScreen
  {
  private:
  expenseRecord* ptrExpenseRecord;

  public:
  expenseInputScreen(expenseRecord*);
  void getExpense();
  };  // ����� ������ expenseInputScreen

//////////////////����� annualReport///////////////////////
class annualReport
  {
  private:
  rentRecord* ptrRR;
  expenseRecord* ptrER;
  float expenses, rents;

  public:
  annualReport(rentRecord*, expenseRecord*);
  void display();
  };  // ����� ������ annualReport

//////////////////����� userInterface//////////////////////
class userInterface
  {
   private:
  tenantList*          ptrTenantList;
  tenantInputScreen*   ptrTenantInputScreen;
  rentRecord*          ptrRentRecord;
  rentInputScreen*     ptrRentInputScreen;
  expenseRecord*       ptrExpenseRecord;
  expenseInputScreen*  ptrExpenseInputScreen;
  annualReport*        ptrAnnualReport;
  char ch;

  public:
  userInterface();
  ~userInterface();
  void interact();
  };  // ����� ������ userInterfac
//////////////////����� ����� landlord.h///////////////////


