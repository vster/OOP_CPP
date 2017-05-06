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
		void displaytime() const;
		void correct ( );		
		time operator + ( time );
		time operator - ( time );
		time operator ++ ( );
		time operator ++ ( int );
		time operator -- ( );
		time operator -- ( int );
		time operator * ( int );
		time operator / ( int );
		long time_to_sec ( );
		time sec_to_time ( long );
};
