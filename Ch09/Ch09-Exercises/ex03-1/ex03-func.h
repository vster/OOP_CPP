using namespace std;
const int LEN = 80;

class publication
{
private:
	char title [ LEN ];
	float price;
public:
	void getdata ( );
    void putdata ( ) const;      
};

class sales
{
private:
	float ArrSales[3];
public:
	void getdata();
	void putdata ( ) const;
};

class book : public publication, public sales
{
private:
	int pages;
public:
    void getdata ( );
    void putdata ( ) const;
};

class tape : public publication, public sales
{
private:
	float duration;
public:
	void getdata ( );
	void putdata ( ) const;
};
