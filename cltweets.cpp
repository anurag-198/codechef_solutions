#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int a,b;

	scanf ("%d", &a);
	scanf ("%d", &b);

	int k = b;
	char ch1,ch2;
	char d[b + 1][10];
	int i = 1;
	int c = 0;
	scanf("%c ",&ch1);
	int count[b+1];

	while (i <= b) {
		count[i] = 0;
		fgets(d[i],20,stdin); 
//		cout << d[i];
		i++;
	}

//	cout << d[1][6]-48 << endl;
	for (i = 1; i <= b; i++) {
//		cout <<"click " <<i<<" "<< d[i] << endl;
			if ((int)(d[i][6] - 48) == 28) {
				for (k = 1; k <= b; k++) {
					count[k] = 0;
				}
//				cout << (int)(d[i][6] - 48);
				printf("%d\n",0);
				c = 0;
				continue;
			}
			else {
				count[(int)(d[i][6] - 48)] = !((int)(count[d[i][6] - 48]));
//				cout << (int)(d[i][6] - 48);
				if (count[(int)(d[i][6] - 48)] == 1)
					c++;
				else
					c--; 	
			}
			printf("%d\n", c);
	}

	return 0;
}
