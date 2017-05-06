#include <fstream> 
#include <iostream>
#include <process.h>
using namespace std;

int main ( int argc, char* argv[] )
{
	char ch;
	if ( argc !=3 )
	{
		cerr << "\nFormat: mycopy srcfile destfile";
		exit(-1);
	}
	ifstream infile;
	infile.open( argv[1] );
	if ( !infile )
	{
		cerr << "\nCan't open " << argv[1] << endl;
		exit(-1);
	}
	ofstream outfile;
	outfile.open( argv[2] );
	if ( !outfile )
	{
		cerr << "\nCan't open " << argv[2] << endl;
		exit(-1);
	}
	while ( infile.get(ch) )
		outfile.put(ch);
	
	return 0;
}