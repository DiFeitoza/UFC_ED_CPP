#include <iostream>
using namespace std;

int fat(int n) {
	if(n == 0)  // Condição de parada
		return 1;
	else {	// Caso geral
		int k = n * fat(n-1);
    	return k;
	}
}

int main() {
	int n = 0;
	cin >> n;
	cout << fat(n);
	return 0;
}