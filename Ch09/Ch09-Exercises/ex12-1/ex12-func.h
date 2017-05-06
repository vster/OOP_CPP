class fraction
{
	private:
		int c;
		int z;
	public:
		fraction()
			{}
		fraction (int cin, int zin) : c ( cin ), z ( zin )
			{ 
				simplfrac(); 
			}
		void fget();
		void fput() const;
		int intput();
		fraction operator + ( fraction f2 );
		fraction operator - ( fraction f2 );
		fraction operator * ( fraction f2 );
		fraction operator / ( fraction f2 );
		bool operator == ( fraction f2 );
		bool operator != ( fraction f2 );
		void simplfrac();
		fraction lowterms( fraction );
};

class sterling
{
protected:
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
	{ to_ster(); }
	void to_dec();
	void to_ster ();
	void getsterling();
	void putsterling() const;
	sterling operator + ( sterling s2 );
	sterling operator - ( sterling s2 );
	sterling operator * ( double n );
	sterling operator / ( double n );
	double operator / ( sterling s2 );
};

class sterfrac : private sterling
{
private:
	int eighths;
public:
	sterfrac() : sterling ()
	{ eighths = 0; }
	sterfrac ( long p, int s, int pnc, int e ) : sterling( p, s, pnc ) 
	{ eighths = e; }
	void to_dec();
	void to_ster();
	void getsterling();
	void putsterling() const;
	sterfrac operator + ( sterfrac s2 );
	sterfrac operator - ( sterfrac s2 );
	sterfrac operator * ( double n );
	sterfrac operator / ( double n );
	double operator / ( sterfrac s2 );
};