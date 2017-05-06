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


class book : private publication
{
private:
	int pages;
public:
    void getdata ( );
    void putdata ( ) const;
};

class tape : private publication
{
private:
	float duration;
public:
	void getdata ( );
	void putdata ( ) const;
};