const int MAX = 80;

class bMoney
{
private:
	long double money;
	char str[MAX];
public:
	bMoney ( )
		{};
	bMoney ( char s[] ) 
		{};
	void mstold ( );
	void ldtoms ( );
	const void getMoney ( );
	const void putMoney ( );
	bMoney operator + ( bMoney);
	bMoney operator - ( bMoney);
	bMoney operator * ( long double );
	long double operator / ( bMoney );
	bMoney operator / ( long double );
};