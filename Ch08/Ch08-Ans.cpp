2.
X x1, x2, x3;
x3.substract(x2, x1);

3.
x3 = x2 - x1;

5.
class Counter
{	
	private:
		unsigned int count;
	public:
		Counter ( ) : count ( 0 )
		{}
		void Counter operator -- ()
		{ count--; }
}

8.
Distance Distance::operator++ ( )
	{
	++feet;
	}

9.
Distance Distance::operator++ ( )
{
	int f = ++feet;
	float i = inches;
	return Distance ( f, i );     // создаем и возвращаем временную переменную
}
		
14.
String String::operator++ ( ) 
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		str[i]= toupper(str[i]);
	}
	return String (str);
}
		

