#include <iostream>
using namespace std;

int main(){
	int m;
	cout << "Enter your endsem score : "; cin >> m;

	switch (m/10)
	{ case 10: cout << "You got S" << endl; 
	  	break;
	  case 9: cout << "You got A" << endl; 
	  	break;
	  case 8: cout << "You got B" << endl; 
	  	break;
	  case 7: cout << "You got C" << endl; 
	  	break;
	  case 6: cout << "You got D" << endl; 
	  	break;
	  case 5: cout << "You got E" << endl; 
	  	break;
	  case 4: cout << "You got F" << endl; 
	  	break;
	  case 3: cout << "You got F" << endl; 
	  	break;
	  case 2: cout << "You got F" << endl; 
	  	break;
	  case 1: cout << "You got F" << endl; 
	  	break;
	  case 0: cout << "You got F" << endl; 
 	  	break;
	  default: cout << "Invalid entry" << endl; 
	  	break;
	}
	cout << "Thank you" << endl;
	return 0;
}
