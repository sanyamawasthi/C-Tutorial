#include <iostream>
using namespace std;

int main(){
	int n;
	for (;;)
	{	cout << "Enter int: "; cin >> n;
		if (n%2==0) continue;//Contniue works to continue to the loop
		if(n%3==0) break;/*breaks stops and move execute the code outside the loop*/
			cout << "\tBottom of the loop"<<endl;
	}
	cout << "\tOutside of loop"<<endl;

}/*continue and break are jump statements. switch is same as if but with correct 
case statement.*/
