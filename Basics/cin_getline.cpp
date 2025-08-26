#include <iostream>
using namespace std;

int main(){char line[80];
	//do
	//{	cin.getline(line, 80);
	//	if (*line) cout << line << " "; 
	//}while (*line);
	
	//giving some parameters to cin.getline()
	do
	{cin.getline(line, 80, ',');
	 if (*line) cout << line << " ";
	}while (*line);

}
