#include <iostream>
using namespace std;

int main(){
/*goto can be used to escape the loop to somewhere else in loop or whole*/
	const int n=5;
	for (int i=0; i<n; i++)
	{	for (int j=0; j<n; j++)
		{	for (int k=0; k<n; k++)
			{	if (i+j+k>n) goto esc;
				else cout << i+j+k << " ";
			}
			cout << "* ";
		}
		esc: cout << "." << endl;//inside i loop and outside j loop
	}
	return 0;
}
