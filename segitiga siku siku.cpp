/***haya fadhilah***/
/////20051397005/////

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "segitiga siku-siku";
	cin >> n;
	
	cout << "pola haya\n\n";
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
	
}
