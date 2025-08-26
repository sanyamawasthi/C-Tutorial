#include <iostream>
#include <string>
using namespace std;

float max(float , float);
int max(int, int);


int main(){int a,b;
	float x,y;
	string s;
	cout << "number decimal(d) or integer(i) : ";
	cin >> s;
	if (s=="i"){cout << "Enter the numbers : ";
		cin >> a >> b;
		cout << max(a,b) << endl;}
	else if (s=="d"){cout << "Enter the numbers : ";
		cin >> x >> y;
		cout << max(x,y) << endl;}
	return 0;
}

float max(float x, float y){return (x > y ? x:y);}

int max(int a, int b){return (a > b ? a:b);}

/*if want to declare and use same named functions but have different definition, 
 remember that either atleast one input type varies or number of inputs vary wiht same
type. */
