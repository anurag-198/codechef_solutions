#include <iostream>
#include<iterator>
#include <cstdio>
#include<algorithm>
#include<set>

using namespace std;
int scan()
{
int t = 0;
char c;
c = getchar_unlocked();
while(c < '0' || c > '9')
c = getchar_unlocked();
while(c >= '0' && c <= '9')
{
t=(t << 3)+(t << 1) + c - '0';
c = getchar_unlocked();
}
return(t);
}

int main() {
	int n, a, b, i, j, x1, x2, y1, y2;
	float xc, xd, yc, yd ,x3, x4, y3, y4;
	n = scan();

	if (n == 0) {
		printf("4\n");
		return 0;
	}
	if (n == 1) {
		printf("3\n");
		return 0;
	}
	
	if (n == 2) {
		printf("2\n");
		return 0;
	}
 
	set<pair<float,float> > myset;
	set<pair<float,float> >::iterator it;
        set<pair<float,float> >::iterator it1;
        set<pair<float,float> >::iterator it2;
        set<pair<float,float> >::iterator it3;

	int found1 = 0;
	int found2 = 0;
	int ff = 0;
	int o = 0;
	for (i = 0; i < n; i++) {
		a = scan();
		b = scan();
		myset.insert(make_pair(a,b));
	}

	for (it = myset.begin(); it != myset.end(); ++it)  {
		for (it1 = next(it); it1 != myset.end(); ++it1) {
			found1 = 0;
			found2 = 0;

			if (it != it1) {
				x1 = it->first;
				x2 = it1->first;
				y1 = it->second;
				y2 = it1->second;
				xc = (float)(x1 + x2) / 2;
				xd = (float)(x1 - x2) / 2;
				yc = (float)(y1 + y2) / 2;
				yd = (float)(y1 - y2) / 2;
				x3 = xc - yd;
				x4 = xc + yd;
				y3 = yc + xd;
				y4 = yc - xd;

//		it2 = myset.find(make_pair(x3,y3));
			
		if (myset.find(pair<float,float>(x3,y3)) != myset.end()) {
			found1++;
		}			

//		it3 = myset.find(make_pair(x4,y4));	

		if (myset.find(pair<float,float>(x4,y4)) != myset.end())  {
			found2++;	
		}

		if ((found1 == 1) && (found2 == 1)) {
			printf ("%d\n",0);
			o = 1;
			break;
		}
		if ((found1 == 1) || (found2 == 1)) {
			ff = 1;
		}		
	    }
	  }
		if (o == 1)
			break;
	}

	if (ff == 1)
		printf ("%d\n", 1);
	if ((o != 1) && (ff != 1))
		printf("%d\n", 2);
	return 0;
}
