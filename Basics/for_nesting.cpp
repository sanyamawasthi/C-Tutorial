#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	for (int a=1; a<=10; a++)
	{
		for (int b=1; b<=10; b++)
		{
			cout << setw(4) << a*b;
		}
		cout << endl;
	}
	return 0;
}
