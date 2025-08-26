#include <iostream>
#include <cctype>
using namespace std;

void printchar(int );

int main(){
	int c;
	for (c=0; c<128; c++){printchar(c);}
	return 0;
}

void printchar(int c)
{	cout << "The character ["<<c <<"]" << char(c) << " is a ";
	if (isdigit(c)) {cout << "digit" << endl;}
	else if (islower(c)){cout << "lower-case letter" << endl;}
	else if (isupper(c)){cout << "upper-case letter" << endl;}
	else if (isspace(c)){cout << "white space character" << endl;}
	else if (iscntrl(c)){cout << "control character" << endl;}
	else if (ispunct(c)){cout << "punctuation mark" << endl;}
	else {cout << "Error" << endl;}	
}
