#include <fstream> 
#include <iostream>
#include <process.h>
using namespace std;

int main ( int argc, char* argv[] )
{
	char ch;
	if ( argc != 2 )
	{
		cerr << "\nFormat: filesize filename";
		exit(-1);
	}
	ifstream infile;
	infile.open( argv[1] );
	if ( !infile )
	{
		cerr << "\nCan't open " << argv[1] << endl;
		exit(-1);
	}
	infile.seekg(0, ios::end);
	int endposition = infile.tellg();

	cout << "\nSize of " << argv[1] << " is " << endposition << " bytes." << endl;

	return 0;
}

