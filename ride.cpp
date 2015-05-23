/*
ID: anurag41
PROG: ride
LANG: C++11                 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char a[1007], b[1007];
    fin >> a >> b;
    int i,j;
    int check1 = 1;
    int check2 = 1;

    for (i = 0; a[i] != '\0'; i++) {
	check1 = (check1 * (a[i] - 64)) % 47;
    }  

    for (j = 0; b[j] != '\0'; j++) {
	check2 = (check2 * (b[j] - 64)) % 47;
    }

    if (check1 == check2) 
	fout <<"GO\n";
    else 
	fout << "STAY\n";
    return 0;
}

