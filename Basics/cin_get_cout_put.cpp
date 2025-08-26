#include <iostream>
#include <cstring>
using namespace std;

int main(){/*char ch;
	int count = 0;
	while (cin.get(ch))
		if (ch == 'e') ++count;
	cout << count << " e were counted.\n";*/
	// this counts the number of e's given as input
	
	// Uisng cin.get()
	char ch[100];
	cin.get(ch,100);
	cout << ch << " " << endl;
	return 0;
	}
