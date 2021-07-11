#include<iostream>
using namespace std;
int main(){
	/*int i = 1, j = 2;
	cout << "1+";
	bool start = true;
	bool end = true;
	int q;
	for (i = 2; i <= 10; i++){
		if (start == true){
			cout << "(";
			q = 1;
			start = false;
		}
		cout << i;
		if (q == j){
			cout << ")+";
			j++;
			start = true;
		}
		else if (q < j){
			cout << "+";
			q++;
		}
	}*/

	int i = 1, j = 1;
	bool start = true;
	bool end = true;
	int q;
	int n;
	while (true)
	{
		i = 1; 
		j = 1;
		start = end = true;
		cin >> n;
		for (i = 1; i <= n; i++){
			if (j >= 2){
				if (start == true){
					cout << "+(";
					q = 1;
					start = false;
				}
				cout << i;
				if (q == j || i == n){
					cout << ")";
					j++;
					start = true;
				}
				else if (q < j){
					cout << "+";
					q++;
				}
			}
			else{
				cout << i;
				j++;
			}
		}

		cout << endl;
	}
	int a;
	cin >> a;

	return 0;
}