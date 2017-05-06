4.
template<class T>
T dub(T a)
{
	return 2*a;
}

13.
class BoundsErrpr{};

16.
class X
{
public:
	int xnumber;
	char xname[MAX];
	X(int xd,char *xs)
	{
		xnumber = xd;
		strcopy(xname,xs);
	}
};
