#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
	int a;
	float b;
	double c;
	char d;
	string e;
	long int f;
	long double g;
	short h;

	cout << "int : " << typeid(a).name() << endl;
	cout << "float : " << typeid(b).name() << endl;
	cout << "double : " << typeid(c).name() << endl;
	cout << "char : " << typeid(d).name() << endl;
	cout << "string : " << typeid(e).name() << endl;
	cout << "long int : " << typeid(f).name() << endl;
	cout << "long double: " << typeid(g).name() << endl;
	cout << "short : " << typeid(h).name() << endl;
	return 0;
}
