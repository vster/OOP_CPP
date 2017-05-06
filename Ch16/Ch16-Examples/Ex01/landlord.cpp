#include "landlord.h"

void getaLine(string& inStr)     // получение строки текста
  {
  char temp[21];
  cin.get(temp, 20, '\n');
  cin.ignore(20, '\n');
  inStr = temp;
  }
//---------------------------------------------------------
char getaChar()                 // получение символа
  {
  char ch = cin.get();
  cin.ignore(80, '\n');
  return ch;
  }
//---------------------------------------------------------

////////////////методы класса tenant///////////////////////
tenant::tenant(string n, int aNo) : name(n), aptNumber(aNo)
  { /* тут пусто */ }
//---------------------------------------------------------
tenant::~tenant()
  { /* тут тоже пусто */ }
//---------------------------------------------------------
int tenant::getAptNumber()
  { return aptNumber; }
//---------------------------------------------------------
bool operator < (const tenant& t1, const tenant& t2)
  { return t1.name < t2.name; }
//---------------------------------------------------------
bool operator == (const tenant& t1, const tenant& t2)
  { return t1.name == t2.name; }
//---------------------------------------------------------
ostream& operator << (ostream& s, const tenant& t)
  { s << t.aptNumber << '\t' << t.name << endl;  return s; }
//---------------------------------------------------------

///////////метод класса tenantInputScreen//////////////////
void tenantInputScreen::getTenant()   // получение данных о
                                      // жильцах
  {
  cout << "Enter tenant name (Uncle Fedor): ";
  getaLine(tName);
  cout << "Enter room number (101): ";
  cin >> aptNo;
  cin.ignore(80, '\n');               // создать жильца
  tenant* ptrTenant = new tenant(tName, aptNo);
  ptrTenantList->insertTenant(ptrTenant); // занести в
                                          // список жильцов
  }
///////////////////////////////////////////////////////////
bool compareTenants::operator () (tenant* ptrT1,
                                  tenant* ptrT2) const
  { return *ptrT1 < *ptrT2; }
//---------------------------------------------------------

////////////////методы класса tenantList///////////////////
tenantList::~tenantList()       // деструктор
  {
  while( !setPtrsTens.empty() ) // удаление всех жильцов,
      {                         // удаление указателей из
                                // множества
    iter = setPtrsTens.begin();
    delete *iter;
    setPtrsTens.erase(iter);
    }
  }  // end ~tenantList()
//---------------------------------------------------------
void tenantList::insertTenant(tenant* ptrT)
  {
  setPtrsTens.insert(ptrT);     //вставка
  }
//---------------------------------------------------------
 int tenantList::getAptNo(string tName) // им€ присутствует
                                        // в списке?
   {
   int aptNo;
   tenant dummy(tName, 0);
   iter = setPtrsTens.begin();
   while( iter != setPtrsTens.end() )
      {
      aptNo = (*iter)->getAptNumber(); // поиск жильца
      if(dummy == **iter++)            // в списке?
         return aptNo;                 // да
      }
   return -1;                          // нет
    }
//---------------------------------------------------------      
 void tenantList::display()      // вывод списка жильцов
   {
   cout << "\nApt#\tTenant name\n-------------------\n";
   if( setPtrsTens.empty() )
     cout << "***No tenants***\n";
   else
     {
     iter = setPtrsTens.begin();
     while( iter != setPtrsTens.end() )
        cout << **iter++;
     }
   }  // end display()
//---------------------------------------------------------

/////////////////методы класса rentRow/////////////////////
rentRow::rentRow(int an) : aptNo(an)   //1-арг. конструктор
  { fill( &rent[0], &rent[12], 0); }
//---------------------------------------------------------
void rentRow::setRent(int m, float am)
  { rent[m] = am; }
//---------------------------------------------------------      
float rentRow::getSumOfRow()    // сумма арендных платежей 
                                // в строке
  { return accumulate( &rent[0], &rent[12], 0); }
//---------------------------------------------------------
bool operator < (const rentRow& t1, const rentRow& t2)
  { return t1.aptNo < t2.aptNo; }
//---------------------------------------------------------
bool operator == (const rentRow& t1, const rentRow& t2)
  { return t1.aptNo == t2.aptNo; }
//---------------------------------------------------------
ostream& operator << (ostream& s, const rentRow& an)
  {
  s << an.aptNo << '\t';        // вывести номер комнаты
  for(int j=0; j<12; j++)       // вывести 12 арендных
                                // платежей
    {
    if(an.rent[j] == 0)
      s << "  0  ";
    else
      s << an.rent[j] << "  ";
    }
  s << endl;
  return s;
  }
///////////////////////////////////////////////////////////
bool compareRows::operator () (rentRow* ptrR1,
                               rentRow* ptrR2) const
  { return *ptrR1 < *ptrR2; }

/////////////////методы класса rentRecord//////////////////
rentRecord::~rentRecord()       // деструктор
  {
  while( !setPtrsRR.empty() )   // удалить строки 
                                // с платежами,
     {                  // удалить указатели из множества
     iter = setPtrsRR.begin();
     delete *iter;
     setPtrsRR.erase(iter);
     }
  }
//---------------------------------------------------------
void rentRecord::insertRent(int aptNo, int month, float amount)
  {
  rentRow searchRow(aptNo);     // временна€ строка
                                // с тем же aptNo
  iter = setPtrsRR.begin();     // поиск setPtrsRR
  while( iter != setPtrsRR.end() )
    {
    if(searchRow==**iter)              // rentRow найден?
      {                                // да, заносим
      (*iter)->setRent(month, amount); // строку в
                                       // список
       return;
       }
    else
       iter++;
    }                                  // не найден
  rentRow* ptrRow = new rentRow(aptNo);// нова€ строка
  ptrRow->setRent(month, amount);  // занести в нее платеж
  setPtrsRR.insert(ptrRow);        // занести строку в
                                    // вектор
  }  // конец insertRent()
//---------------------------------------------------------
void rentRecord::display()
  {
  cout << "\nAptNo\tJan  Feb  Mar  Apr  May  Jun  "
       <<          "Jul  Aug  Sen  Oct  Nov  Dic\n"
       << "---------------------------------"
       << "---------------------------------\n";
  if( setPtrsRR.empty() )
    cout << "***No pays!***\n";
  else
    {
    iter = setPtrsRR.begin();
    while( iter != setPtrsRR.end() )
       cout << **iter++;
     }
  }
//---------------------------------------------------------
float rentRecord::getSumOfRents()   // сумма всех платежей
  {
  float sumRents = 0.0;
  iter = setPtrsRR.begin();
  while( iter != setPtrsRR.end() )
    {
    sumRents += (*iter)->getSumOfRow();
    iter++;
    }
  return sumRents;
  }
//---------------------------------------------------------

/////////////////методы класса rentInputScreen/////////////
void rentInputScreen::getRent()
  {
  cout << "Enter name of tenant: ";
  getaLine(renterName);
  aptNo = ptrTenantList->getAptNo(renterName);
  if(aptNo > 0)                 // если им€ найдено,
    {                           // получить сумму платежа
    cout << "Enter sum of pay (345.67): ";
    cin >> rentPaid;
    cin.ignore(80, '\n');
    cout << "Enter number of month (1-12): ";
    cin >> month;
    cin.ignore(80, '\n');
    month--;               // (внутренн€€ нумераци€ 0-11)
    ptrRentRecord->insertRent(aptNo, month, rentPaid);
    }
  else                      // возврат
    cout << "No such tenant.\n";
  }  // end getRent()
//---------------------------------------------------------

///////////////////методы класса expense///////////////////
bool operator < (const expense& e1, const expense& e2)
  {                              // сравнивает даты
  if(e1.month == e2.month)       // если тот же мес€ц,
     return e1.day < e2.day;     // сравнить дни
  else                           // иначе,
     return e1.month < e2.month; // сравнить мес€цы
  }
//---------------------------------------------------------
bool operator == (const expense& e1, const expense& e2)
  { return e1.month == e2.month && e1.day == e2.day; }   
//---------------------------------------------------------
ostream& operator << (ostream& s, const expense& exp)
  {
  s << exp.month << '/' << exp.day << '\t' << exp.payee << '\t' ;
  s << exp.amount << '\t' << exp.category << endl;
  return s;
  }
//---------------------------------------------------------

///////////////////////////////////////////////////////////
bool compareDates::operator () (expense* ptrE1,
                                expense* ptrE2) const
  { return *ptrE1 < *ptrE2; }
//---------------------------------------------------------

///////////////////////////////////////////////////////////
bool compareCategories::operator () (expense* ptrE1,
                                     expense* ptrE2) const
  { return ptrE1->category < ptrE2->category; }
//---------------------------------------------------------

//////////////////методы класса expenseRecord//////////////
expenseRecord::~expenseRecord()         // деструктор
  {
  while( !vectPtrsExpenses.empty() )   // удалить объекты
                                       // expense
     {                                 // удалить 
                                       // указатели на вектор
    iter = vectPtrsExpenses.begin();
    delete *iter;
    vectPtrsExpenses.erase(iter);
    }
  }
//---------------------------------------------------------
void expenseRecord::insertExp(expense* ptrExp)
  { vectPtrsExpenses.push_back(ptrExp); }
//---------------------------------------------------------
void expenseRecord::display()
  {
  cout << "\nDate\Receiver\t\tSum\tCategory\n"
       << "----------------------------------------\n";
  if( vectPtrsExpenses.size() == 0 )
    cout << "***No expenses***\n";
  else
    {
    sort( vectPtrsExpenses.begin(), // сортировка по дате
          vectPtrsExpenses.end(), compareDates() );
      iter = vectPtrsExpenses.begin();
      while( iter != vectPtrsExpenses.end() )
       cout << **iter++;
    }
  }
//---------------------------------------------------------
float expenseRecord::displaySummary() // используетс€ при
                                      // составлении 
                                      // годового отчета
  {
  float totalExpenses = 0;            // сумма, все 
                                      // категории

  if( vectPtrsExpenses.size() == 0 )
    {
    cout << "\tAll categories\t0\n";
    return 0;
    }
  // сортировать по категории
  sort( vectPtrsExpenses.begin(),
      vectPtrsExpenses.end(), compareCategories() );

  // по каждой категории сумма записей

  iter = vectPtrsExpenses.begin();
  string tempCat = (*iter)->category;
  float sumCat = 0.0;
  while( iter != vectPtrsExpenses.end() )
    {            
    if(tempCat == (*iter)->category)
      sumCat += (*iter)->amount; // та же категори€
    else
      {                          // друга€
      cout << '\t' << tempCat << '\t' << sumCat << endl;
      totalExpenses += sumCat;   // прибавить предыдущую 
                                 // категорию
        tempCat = (*iter)->category;
        sumCat = (*iter)->amount;// прибавить конечное
                                 // значение суммы
      }
    iter++;
    }  // end while
  totalExpenses += sumCat;         // прибавить сумму
                                   // конечной
                                   // категории
  cout << '\t' << tempCat << '\t' << sumCat << endl;
  return totalExpenses;
  }  // конец displaySummary()
  //--------------------------------------------------------
//////////////методы класса expenseInputScreen/////////////
expenseInputScreen::expenseInputScreen(expenseRecord* per) : ptrExpenseRecord(per)
  { /*пусто*/ }
  //------------------------------------------------------
void expenseInputScreen::getExpense()
  {
  int month, day;
  string category, payee;
  float amount;

  cout << "Enter month (1-12): ";
  cin >> month;
  cin.ignore(80, '\n');
  cout << "Enter day (1-31): ";
  cin  >> day;
  cin.ignore(80, '\n');
  cout << "Enter category of expenses (Remont, Taxes): ";
  getaLine(category);
  cout << "Enter receiver "
      << "(ProstokvashinoEnergoSbyt): ";
  getaLine(payee);
  cout << "Enter sum (39.95): ";
  cin >> amount;
  cin.ignore(80, '\n');
  expense* ptrExpense = new
           expense(month, day, category, payee, amount);
  ptrExpenseRecord->insertExp(ptrExpense);
  }
//---------------------------------------------------------

////////////////методы класса annualReport/////////////////
annualReport::annualReport(rentRecord* pRR,
       expenseRecord* pER) :    ptrRR(pRR), ptrER(pER)
  { /* пусто */ }                     
//---------------------------------------------------------
void annualReport::display()
  {
  cout << "Year report\n--------------\n";
  cout << "Income\n";
  cout << "\tRent\t\t";
  rents = ptrRR->getSumOfRents();
  cout << rents << endl;

  cout << "Expense\n";
  expenses = ptrER->displaySummary();
  cout << "\nBalance\t\t\t" << rents - expenses << endl;
  }
//---------------------------------------------------------

////////////////методы класса userInterface//////////////
userInterface::userInterface()
  {
  //это жизненно важно дл€ программы
  ptrTenantList     = new tenantList;
  ptrRentRecord     = new rentRecord;
  ptrExpenseRecord  = new expenseRecord;
  }
//---------------------------------------------------------
userInterface::~userInterface()
  {
  delete ptrTenantList;
  delete ptrRentRecord;
  delete ptrExpenseRecord;
  }
//---------------------------------------------------------
void userInterface::interact()
  {
  while(true)
    {
    cout << "For input press 'i', \n"
         << "      'd' for output report, \n"
         << "      'q' for quit: ";
    ch = getaChar();
    if(ch=='i')                     // ввод данных
       {
       cout << " 't' for adding of tenants, \n"
            << "   'r' for input of rent, \n"
            << "   'e' for input of expense: ";
       ch = getaChar();
       switch(ch)
          {
          //экраны ввода существуют только во врем€ их
          //использовани€
          case 't': ptrTenantInputScreen =
             new tenantInputScreen(ptrTenantList);
             ptrTenantInputScreen->getTenant();
             delete ptrTenantInputScreen;
             break;
          case 'r': ptrRentInputScreen =
             new rentInputScreen(ptrTenantList, ptrRentRecord);
             ptrRentInputScreen->getRent();
             delete ptrRentInputScreen;
             break;
          case 'e': ptrExpenseInputScreen =
             new expenseInputScreen(ptrExpenseRecord);
             ptrExpenseInputScreen->getExpense();
             delete ptrExpenseInputScreen;
             break;
          default: cout << "Unknown function\n";
             break;
          }                    // конец секции switch
       }                       // конец услови€ if
    else if(ch=='d')           // вывод данных
       {
       cout << " 't' for output of tenants, \n"
            << "   'r' for output of rent\n"
            << "   'e' for output of expense, \n"
            << "   'a' for output of year report: ";
       ch = getaChar();
       switch(ch)
          {
          case 't': ptrTenantList->display();
             break;
          case 'r': ptrRentRecord->display();
             break;
          case 'e': ptrExpenseRecord->display();
             break;
          case 'a':
             ptrAnnualReport = new annualReport(ptrRentRecord, ptrExpenseRecord);
             ptrAnnualReport->display();
             delete ptrAnnualReport;
             break;
          default: cout << "Unknown output function\n";
             break;
          }                    // конец switch
       }                       // конец elseif
    else if(ch=='q')
       return;                 // выход
    else
       cout << "Unknown function. Enter only 'i', 'd' or 'q'\n";
    }                          // конец while
  }                             // конец interact()
//////////////////конец файлаlandlord.cpp//////////////////


