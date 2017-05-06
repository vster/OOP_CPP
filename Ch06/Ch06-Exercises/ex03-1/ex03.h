class time
{
	private:
		int hrs;
		int mins;
		int secs;
	public:
		time();
		time(int, int, int);
		void displaytime() const;
		void add_time(time, time);
};
