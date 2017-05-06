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
		time operator + ( time ) const;	
};
void time::displaytime() const
{
	cout << setw(2) << hrs << ":"
	 << setfill('0') 
	 << setw(2) << mins << ":"
	 << setw(2) << secs;
}


time time::operator + (time tt2) const
{
	int h, m, s;
	s = secs + tt2.secs;
	m = mins + tt2.mins;
	h = hrs + tt2.hrs;
	if ( s >= 60 )
	{ s -= 60; 	m++; }	
	if ( m >= 60 )
	{ m -= 60; h++; }		
	return time ( h, m, s );
}