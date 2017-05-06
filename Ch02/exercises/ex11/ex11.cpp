#include <iostream>
#include <iomanip>         // для использования setw
using namespace std;

int main()
{
	char *firstname[3], *lastname[3], *addr[3], *city[3];

	firstname[0] = "Petrov";
	lastname[0] = "Vasily";
	addr[0] = "Klenovaya 16";
	city[0] = "Sankt-Peterburg";

	firstname[1] = "Ivanov";
	lastname[1] = "Sergey";
	addr[1] = "Osinovaya 2";
	city[1] = "Nahodka";

	firstname[2] = "Sidorov";
	lastname[2] = "Ivan";
	addr[2] = "Berezovaya 23";
	city[2] = "Kaliningrad";

	cout << setiosflags(ios::left) 
		 << setw(15) << "First name" << setw(15) << "Last name" << setw(15) << "Address" << setw(15) << "City" << endl
		 << "----------------------------------------------------------------" << endl
		 << setw(15) << firstname[0] << setw(15) <<  lastname[0] << setw(15) << addr[0] << setw(15) << city[0] << endl
		 << setw(15) << firstname[1] << setw(15) <<  lastname[1] << setw(15) << addr[1] << setw(15) << city[1] << endl
		 << setw(15) << firstname[2] << setw(15) <<  lastname[2] << setw(15) << addr[2] << setw(15) << city[2] << endl;

	return 0;
}
