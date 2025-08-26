#include <bits/stdc++.h>
using std::cout, std::cin, std::endl, std::string;

int main(){
	int number;
	cout << "Enter the number : ";
	cin >> number;

	int counter=0;
	int sum =0;
	int product=1;

	while(number%10 != 0){
		counter = number%10;
		sum += counter;
		product *= counter;
		number = number/10;
	}

	cout << "sum of digits : " << sum << endl;
	cout << "product of digits : " << product << endl;
}

