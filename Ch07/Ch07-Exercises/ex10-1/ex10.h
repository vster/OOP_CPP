class matrix
{
private:
	enum { SZ = 10 };
	int arlim[SZ][SZ];
	int ilim, jlim;
public:
	matrix();
	matrix( int, int );
	void putel( int, int, int );
	int getel( int, int );
};
