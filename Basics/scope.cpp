#include <iostream>
using namespace std;

int x = 10; //global variable which is accessible in whole file

int main(){
	int x; // variable which is accessible only in main()
	x = 11;
	{
		int x = 12; //nest variable accessible only in this nest
		cout << "Inside block of main : "<< x <<endl;
		cout << "What is this: " << ::x << endl;
	}
	cout << "Inside main: "<< x <<endl;
	cout << "Outside main : " << ::x  << endl;
	cout << "Getting ASCII value of alphabets and line commands: " << int('\t')<<endl;
}
