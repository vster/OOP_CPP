#include <iostream>
#include <iomanip>
using namespace std;

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
		void add_time(time tt1, time tt2)
		{
			secs = tt1.secs + tt2.secs;
			if (secs >= 60)
			{
				secs -= 60;
				mins++;
			}
			mins += tt1.mins + tt2.mins;
			if (mins >= 60)
			{
				mins -= 60;
				hrs++;
			}
			hrs += tt1.hrs + tt2.hrs;
		}
};

int main()
{
	const time t1(10, 43, 50);
	const time t2(20, 35, 25);
	time t3;

	t3.add_time(t1, t2);

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();

	return 0;
}
