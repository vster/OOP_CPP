enum Period {hour, week, mounth};
const int LEN = 80;       // максимальная длина имени

///////////////////////////////////////////////////////////
class employee            // некий сотрудник
{
  private:
    char name[ LEN ];     // имя сотрудника
    unsigned long number; // номер сотрудника
  public:
    void getdata ( );
    void putdata ( ) const;    
};

///////////////////////////////////////////////////////////
class employee2 : public employee
{
private:
	double compensation;
	Period period;
public:
	void getdata ( );
	void putdata ( ) const;
};
///////////////////////////////////////////////////////////
class manager : public employee2 // менеджер
{
  private:
    char title[ LEN ];    // должность, например вице-президент
    double dues;          // сумма взносов в гольф-клуб
  public:
    void getdata ( );
    void putdata ( ) const;      
};
///////////////////////////////////////////////////////////
class scientist : public employee2 // ученый
{
  private:
    int pubs;                     // количество публикаций
  public:
    void getdata ( );
    void putdata ( ) const;  
};
///////////////////////////////////////////////////////////
class laborer : public employee2   // рабочий
{
};

