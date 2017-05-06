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

class date
{
	private:
		int day;
		int month;
		int year;
	public:
		date()
		{}
		void getdate();
		void showdate() const;
};

class publication2 : private publication, private date
{
private:
	date pdate;
public:
	void getdata ( );
    void putdata ( ) const;
};

class book : private publication2
{
private:
	int pages;
public:
    void getdata ( );
    void putdata ( ) const;
};

class tape : private publication2
{
private:
	float duration;
public:
	void getdata ( );
	void putdata ( ) const;
};
