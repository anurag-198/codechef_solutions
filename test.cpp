/*
ID: anurag41
PROG: gift1
LANG: C++11                 
*/
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
	ofstream fout ("test.out");
        ifstream fin ("test.in");
	
	int tc, i , j;
	fin >> tc;
	char name1[100], name[1000];
    	char names[tc][100];
	int cash[tc];	
	int c = tc;
    	for (i = 0; i < tc; i++) {
		fin >> names[i];
		cash[i] = 0;
	}

	int a, b;
		while (c--) {
		fin >> name;
		fin >> a;
		fin >> b;
		int j;
		int rem, d;
		if (b != 0) {
			 rem = a % b;
			 d = (a / b);
		}
		else {
			rem = 0; 
			d = 0;
		}

		for (i = 0; i < tc; i++) {
			if (strcmp(name, names[i]) == 0) {
				cash[i] = cash[i] + rem - a;
			}
		}

		for (j = 0; j < b; j++) {
			fin >> name1;
			for (i = 0; i < tc; i++) {
				  if (strcmp(name1, names[i]) == 0) {
                        	        cash[i] = cash[i] + d;
				}
			}
	           }
		}
		  int max = 0;
		  for (j = 0; j < tc; j++) {
			fout << names[j] <<" "<< cash[j] << endl;
		  }
    	
    return 0;
}

