using namespace std;

const int MAX = 80;

class bMoney
{
private:
	long double money;
public:
	bMoney ( );
	bMoney ( char s[] );
	void madd ( bMoney m1, bMoney m2 );
	const void getMoney ( );
	const void putMoney ( );
};
