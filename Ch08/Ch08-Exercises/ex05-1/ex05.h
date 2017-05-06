class time
{
	private:
		int hrs;
		int mins;
		int secs;
	public:
		time() : hrs(0), mins(), secs()
			{ }
		time(int h, int m, int s) : hrs(h), mins(m), secs(s)
			{ }
		void displaytime() const
		{
		cout << setw(2) << hrs << ":"
		 << setfill('0') 
		 << setw(2) << mins << ":"
		 << setw(2) << secs;
		}
		void correct ( );		
		time operator + ( time );	
		time operator ++ ( );
		time operator ++ ( int );
		time operator -- ( );
		time operator -- ( int );
};
