struct time
{
	int hours;
	int minutes;
	int seconds;
};

long time_to_secs(time);
time secs_to_time(long);
time gettime(int);

