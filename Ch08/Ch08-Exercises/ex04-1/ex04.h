class Int
{
private:
	int i;
public:
	Int ()
	{ i = 0; }
	Int ( int ii )
	{ i = ii; }
	void showInt ()
	{ cout << i; }
	Int operator + ( Int );
	Int operator - ( Int );
	Int operator * ( Int );
	Int operator / ( Int );
	Int checkit ( long double );
};
