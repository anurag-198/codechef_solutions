#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
	vector <long long> isprime;
	isprime.resize(100001);
	for (int j = 3; j < 100001; j++) {
		int flag = 1;
		for (int i = 2; i * i <= 100001; i++) {
			if (j % i == 0 && i * i <= j) { 
				flag = 0;
				break;
			}
		}	 
		if (flag == 1) {
			cout << j <<",";
		}
		
	}
	cout << endl;
}

