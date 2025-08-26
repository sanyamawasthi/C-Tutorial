#include <iostream>
using namespace std;

int main(){char word[10];
	//do
	//{cin >> word;
	// if (*word) cout << word << " ";
	//}while(*word); 
	
	//Another way to write same thing is
	cin >> word;
	while (*word){
		cout << word << " ";
		cin >> word;}
}
