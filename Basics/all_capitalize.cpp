#include <iostream>
using namespace std;

int main(){/*char s[100];
	do{cin.getline(s,100,' ');
		if (*s) cout << s << endl;
	}while(*s);*/
	char s;
	while(cin.get(s)){
		if (s>='a' && s<='z'){cout.put(s);}
		if (s>='A' && s<='Z'){
			s-='B'-'b';
			cout.put(s);}
		if (s == '\n'){break;}
	}
	cout << endl;
	return 0;
}
