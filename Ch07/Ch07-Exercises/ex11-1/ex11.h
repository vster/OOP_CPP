const int MAX = 80;

class money
{
	private:
		long double m;
		char str[MAX];
	public:
		money();
		const void putm();
		const void puts();
		void ldtoms(long double ldm);
		const void mstold(char s[]);
};