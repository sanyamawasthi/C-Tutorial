#include <iostream>
#include <cstring>
using namespace std;

int main(){char s[] = "Sanyam is a good boy";
	char* p;
	p = strtok(s," ");
	while(p){
		cout << p << endl;
		p = strtok(NULL, " ");
	}
	cout << s << endl;

	//// strbrk()
	char r[] = "The strongest is none";
	cout << r << endl;
	char* a = strpbrk(r,"rom");
	cout << a-r << endl;
	if (p==NULL) cout << "None" << endl;
	return 0;
}
