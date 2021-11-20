#include <iostream>
using namespace std;

int main(){
	
	int a;
	int i;
	int A;
	
	cin >> a;
	
	for (i=0; i<=10; i++){
		A = a * 2;
		cout << A << endl;
		a = A;
	}
}
