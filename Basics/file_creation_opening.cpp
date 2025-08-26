#include <iostream>
#include <fstream>
using namespace std;

int main(){ifstream infile("input.txt");
	ofstream outfile("output.txt");
	string word;
	char s;
	while (infile >> word){
		cout << word[0] << endl;
		if (word[0] >= 'a' && word[0]<='z'){
			word[0] += 'A'-'a';}
		outfile << word;
		infile.get(s);
		outfile.put(s);
		
	}
}
