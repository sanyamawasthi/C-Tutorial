#include <iostream>
using namespace std;

int main(){
	int m=2;
	int n = m++;
	cout<<m<<endl;
	cout<<n<<endl;
	int k = m--;
	cout << k << endl;
	cout <<"New value of m is: " << m << endl;
	return 0;
}

