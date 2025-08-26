#include <iostream>
using namespace std;

void print(int q, int w, int e, int a[][4][4]);

int main(){int arr[4][4][4];
	int x;
	cout << "Enter the elements : ";
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			for (int k=0; k<4; k++){
				cin >> x;
				arr[i][j][k]=x;}}}
	print(4,4,4,arr);
}

void print(int q,int w,int e, int a[][4][4]){
	for (int i=0; i<q; i++ ){
		for (int j=0; j<w; j++){
			for (int k=0; k<e; k++){
				cout << a[i][j][k] << "\t";}
		cout << endl;}
	cout << endl;
	cout << endl;}
}
