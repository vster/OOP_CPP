///////////////////////////////////////////////////////////
class Distance  // класс английских мер длины
{
private:
	int feet;
	float inches;
public:
	// конструктор без параметров
	Distance ( );
	// конструктор с двумя параметрами
	Distance ( int, float );
	// получение информации от пользователя
	void getdist ( );
	// показ информации
	void showdist ( );
	// сложение двух длин
	Distance operator+ ( Distance ) const;
	Distance operator- ( Distance ) const;
};