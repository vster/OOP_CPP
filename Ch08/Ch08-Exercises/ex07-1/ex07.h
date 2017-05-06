class fraction
{
	private:
		int c;
		int z;
	public:
		fraction()
			{}
		fraction (int cin, int zin) : c ( cin ), z ( zin )
			{}
		void fget()
		{ char dummychar; cin >> c >> dummychar >> z; }
		void fput() const
		{ cout << c << "/" << z; }
		fraction operator + ( fraction );
		fraction operator - ( fraction );
		fraction operator * ( fraction );
		fraction operator / ( fraction );
		bool operator == ( fraction );
		bool operator != ( fraction );
		fraction lowterms( fraction );
};
