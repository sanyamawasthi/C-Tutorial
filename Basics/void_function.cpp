#include <iostream>
using namespace std;

void print_date(int, int, int);

int main(){
	int m, d, y;
	
	for (;;)
	{
		cout << "Enter the month: ";
		cin>> m;
		cout << "Enter the date: ";
		cin>> d;
		cout << "Enter the year: ";
		cin>> y;
		if (m<0) break;
		print_date(m,d,y);  
	}
}

void print_date(int m, int d, int y)
{	if (m<1 || m>12 || d<1 || d>31 || y<=0 ){cerr << "Invalid entries";}

	switch (m)
	{	case 1: cout << "January"; break;
		case 2: cout << "February"; break;
		case 3: cout << "March"; break;
		case 4: cout << "April"; break;
		case 5: cout << "May"; break;
		case 6: cout << "June"; break;
		case 7: cout << "July"; break;
		case 8: cout << "August"; break;
		case 9: cout << "september"; break;
		case 10: cout << "October"; break;
		case 11: cout << "November"; break;
		case 12: cout << "December"; break;
	}
	cout << " " << d << " , " << y << endl;	
}
