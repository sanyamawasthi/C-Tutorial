#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int r, c;
	cout << "Enter the rows wanted : ";
	cin >> r;
	cout << endl;
	cout << "Enter the number of columns : ";
	cin >> c;
	cout << endl;
	for (int i=1; i<=r; i=i+1 )
	{	for (int j=1; j<=c; j=j+1)
		{	
			if (j>i) break;
			else cout << setw(4) << 0*j;
		}
		cout << endl;
	}
	return 0;
}
