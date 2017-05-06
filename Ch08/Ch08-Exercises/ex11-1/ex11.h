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
};