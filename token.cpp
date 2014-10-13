#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
	ifstream token;

	if (argc != 2) 
	{
	cout << endl << "Usage: a.out inputFileName" << endl; return 1;
	}

	cout <<"Opening file " << argv[1] << endl;

	token.open(argv[1]); // try to open the file

	if (token.fail()){
	cout << "Could not open file " << argv[1] << "." << endl;
	return 1;
	}

	cout << "Reading from file..."<< endl;
	
	string tokenx[100];
	int counter = 0;
	token >> tokenx[counter];

	while(!token.fail())
	{
		cout << tokenx[counter] << endl;
		counter++;
		token >> tokenx[counter];

	}
			
	token.close();
	return 0;
}
