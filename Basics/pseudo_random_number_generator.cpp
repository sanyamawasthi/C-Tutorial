#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	for (int i=0; i<8; i++)
	{	cout << rand() << endl;
	}
	cout << "Random maximum" << RAND_MAX << endl;
	return 0;
}
