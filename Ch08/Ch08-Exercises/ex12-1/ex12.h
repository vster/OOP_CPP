const int MAX = 80;

class sterling
{
private:
	long pounds;
	int shillings;
	int pence;
	double decpounds;
public:
	sterling()
	{}
	sterling(long p, int s, int pnc ) : pounds(p), shillings(s), pence(pnc)
	{}
	sterling ( double dp ) : decpounds ( dp )
	{ strlng(); }
	void decpnds();
	void strlng ();
	void getSterling();
	void putSterling() const;
	sterling operator + ( sterling );
	sterling operator - ( sterling );
	sterling operator * ( double );
	sterling operator / ( double );
	double operator / ( sterling );
	operator double ( )
	{
		decpnds();
		return decpounds;
	}
};


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
	bMoney ( long double m ) : money(m)
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
	operator double ()
	{
		return money;
	}
};