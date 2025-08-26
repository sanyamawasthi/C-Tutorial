#include <iostream>
#include <cmath>
#include <climits>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	char ch, pre = '\0';
	while (cin.get(ch)){
		if (pre == ' ' || pre == '\n') cout.put(char(toupper(ch)));
		else cout.put(ch);
		pre=ch;}
}
