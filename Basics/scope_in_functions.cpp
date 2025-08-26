#include <iostream>
using namespace std;


int x = 2;
void f(){int x = 1;
       	::x = 5;
	cout << "This is f()'s x : "<< x << endl;
	cout << "this is global x : " << ::x << endl;
	cout << endl;}


int main(){int x = 3;
	
	{int x = 4;
		cout << "Block inside main : " << x << endl;
		cout << "This is which x : " << ::x << endl;
		cout << endl;}

	cout << "Inside main : " << x << endl;
	f();
	cout << "Which x now : " << x << endl;
	cout << "Calling global x : " << ::x << endl;
	return 0;
}

