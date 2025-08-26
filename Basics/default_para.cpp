#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int d(int, int, int=0);

int main(){int age, p, f;
	cout << "enter your age : ";
	cin >> age;
	cout << "enter the present year : ";
	cin >> p;
	cout << endl;
	cout << "Want present(p) age or future(f) age : ";
	string s;
	cin >> s;
	cout << endl;
	if (s=="p"){cout << "Age is : "<< d(age,p)<< endl;}
	else if (s=="f"){cout << "enter the future year : "; cin >> f; cout << endl;
		cout << "Age will be : " << d(age,p,f) << endl;}
}

int d(int a, int b, int c){int g;
	if (c==0){g = a;}
	else if (c!=0){g = a + c - b;}
	return g;
}
