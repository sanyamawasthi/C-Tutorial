#include <iostream>
#include <cstring>
using namespace std;

int main(){/*char ch[100];
	cin.get(ch,100);
	cout << strlen(ch) << endl;
	cout << endl;

	//getting position
	char s[] = "I love her";
	cout << s << endl;
	char* p = strchr(s,' ');
	cout << "offset : " << p-s << endl;
	p=strchr(s,'e');
	cout << "occurrence of first e : " << p-s << endl;
	p= strrchr(s,'e');
	cout << "Occurrence of last e : " << p-s << endl;
	p=strstr(s,"her");
	cout << "occurence of her : " << p-s << endl;*/
	
	//strcpy() and strncpy()
	/*char s1[] = "What is the matter";
	char s2[] = "Nothing, its all fine.";
	char s3[] = "Goody";
	cout << "Before copyng" << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	strcpy(s2,s1);
	cout << "After copying" << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	strncpy(s3,s1,4);
	cout << "after sized copying" << endl;
	cout << s1 << endl;
	cout << s3 << endl;*/

	//strcat() strncat()
	char s1[] = "abcdefg";
	char s2[] = "xyz";
	char s3[] = "hijklm";
	cout << s1 << endl;
	cout << s2 << endl;
	cout << endl;
	strcat(s1,s2);
	cout << s1 << endl;
	cout << s2 << endl;
	strncat(s1,s2,2);
	cout << s1 << endl;
}
