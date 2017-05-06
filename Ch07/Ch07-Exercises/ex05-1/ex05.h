class fraction
{
private:
	int c;
	int z;
public:
	fraction();
	void fget();
	void fput() const;
	void fadd (const fraction, const fraction);
	void fsub (const fraction, const fraction);
	void fmul(const fraction, const fraction);
	void fdiv(const fraction, const fraction);
	void fdiv(const fraction, const int);
	void lowterms( );
	void fmake(int, int);
};