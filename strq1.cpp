#include <bits/stdc++.h>

#define ll long long 
#define m 1000002
using namespace std;

long long c[m], h[m],e[m],f[m],ch[m],ce[m],cf[m],hc[m],he[m],hf[m],ec[m],eh[m],ef[m],fc[m],fh[m],fe[m];

int main() {

	ll tc, i;

	string a;
	cin >> a;


	c[0] = 0;
	h[0] = 0;
	e[0] = 0;
	f[0] = 0;
	ch[0] = 0;
	ce[0] = 0;
	cf[0] = 0;
	hc[0] = 0;
	he[0] = 0;
	hf[0] = 0;
	ec[0] = 0;
	eh[0] = 0;
	ef[0] = 0;
	fc[0] = 0;
	fh[0] = 0;
	fe[0] = 0;

	if (a[0] == 'c') 
		c[0] = 1;
	else if (a[0] == 'h')
		h[0] = 1;
	else if (a[0] == 'e')
		e[0] = 1;
	else if (a[0] == 'f')
		f[0] = 1;

	for (i = 1; i < a.size(); i++) {
		c[i] = c[i - 1];
	        h[i] = h[i - 1];
	       	e[i] = e[i-1];
        	f[i] = f[i-1];
       	 	ch[i] = ch[i-1];
        	ce[i] = ce[i-1];
        	cf[i] = cf[i-1];
        	hc[i] = hc[i-1];
        	he[i] = he[i-1];
        	hf[i] = hf[i-1];
        	ec[i] = ec[i-1];
        	eh[i] = eh[i-1];
        	ef[i] = ef[i-1];
        	fc[i] = fc[i-1];
        	fh[i] = fh[i-1];
        	fe[i] = fe[i-1];

		if (a[i] == 'c') { 
			c[i] = c[i - 1] + 1;
			ec[i] = ec[i - 1] + e[i];
			fc[i] = fc[i - 1] + f[i];
			hc[i] = hc[i - 1] + h[i];
		}
		
		else if (a[i] == 'e') { 
			e[i] = e[i - 1] + 1;
			he[i] = he[i - 1] + h[i];
			ce[i] = ce[i - 1] + c[i];
			fe[i] = fe[i - 1] + f[i];
		}

		else if (a[i] == 'f') { 
			f[i] = f[i - 1] + 1;
			hf[i] = hf[i - 1] + h[i];
			ef[i] = ef[i - 1] + e[i];
			cf[i] = cf[i - 1] + c[i];
		}

		else if (a[i] == 'h') { 
			h[i] = h[i - 1] + 1;
			ch[i] = ch[i - 1] + c[i];
			eh[i] = eh[i - 1] + e[i];
			fh[i] = fh[i - 1] + f[i];
		}
	}
	
	scanf ("%lld", &tc);
	char z, b;
	ll l, r;
	for (i = 0; i < tc; i++) {
		scanf (" %c", &z);
		scanf (" %c", &b);
		scanf ("%lld%lld", &l, &r);

		if ((z == 'c') && (b == 'h')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",ch[r - 1] - ch[l - 1] - (c[l - 2] * (h[r-1] - h[l-1])));
			else 
				printf ("%lld\n",ch[r - 1] - ch[l - 1]);
		} 	

		else if ((z == 'c') && (b == 'e')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",ce[r-1] - ce[l-1] - (c[l - 2] * (e[r-1] - e[l-1])));
			else
				printf ("%lld\n",ce[r-1] - ce[l-1]);
		} 	

		else if ((z == 'c') && (b == 'f')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",cf[r-1] - cf[l-1] - (c[l - 2] * (f[r-1] - f[l-1])));
			else
				printf ("%lld\n",cf[r-1] - cf[l-1]);
		} 	


		else if ((z == 'e') && (b == 'h')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",eh[r-1] - eh[l-1] - (e[l - 2] * (h[r-1] - h[l-1])));
			else
				printf ("%lld\n",eh[r-1] - eh[l-1]);
		} 	

		else if ((z == 'e') && (b == 'c')) {
			if ((l - 2) >= 0)
				printf ("%lld\n", ec[r-1] - ec[l-1] - (e[l - 2] * (c[r-1] - c[l-1])));
			else 
				printf ("%lld\n", ec[r-1] - ec[l-1]);
		} 	

		else if ((z == 'e') && (b == 'f')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",ef[r-1] - ef[l-1] - (e[l - 2] * (f[r-1] - f[l-1])));
			else
				printf ("%lld\n",ef[r-1] - ef[l-1]);
		} 	


		else if ((z == 'f') && (b == 'h')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",fh[r-1] - fh[l-1] - (f[l - 2] * (h[r-1] - h[l-1])));
			else
				printf ("%lld\n",fh[r-1] - fh[l-1]);
		} 	

		else if ((z == 'f') && (b == 'c')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",fc[r-1] - fc[l-1] - (f[l - 2] * (c[r-1] - c[l-1])));
			else
				printf ("%lld\n",fc[r-1] - fc[l-1]);
		} 	

		else if ((z == 'f') && (b == 'e')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",fe[r-1] - fe[l-1] - (f[l - 2] * (e[r-1] - e[l-1])));
			else
				printf ("%lld\n",fe[r-1] - fe[l-1]);
		} 	


		else if ((z == 'h') && (b == 'c')) {
			if ((l - 2) >= 0)
				printf ("%lld\n",hc[r-1] - hc[l-1] - (h[l - 2] * (c[r-1] - c[l-1])));
			else
				printf ("%lld\n",hc[r-1] - hc[l-1]);
		} 	

		else if ((z == 'h') && (b == 'e')) {
			if ((l - 2) >= 0)
				printf("%lld\n",he[r-1] - he[l-1] - (h[l - 2] * (e[r-1] - e[l-1])));
			else 
				printf("%lld\n",he[r - 1] - he[l-1]);
		} 	

		else if ((z == 'h') && (b == 'f')) {
			if ((l - 2) >= 0)
				printf("%lld\n",hf[r-1] - hf[l-1] - (h[l - 2] * (f[r-1] - f[l-1])));
			else 
				printf("%lld\n",hf[r - 1] - hf[l - 1]);
			
		} 	
	}	

	return 0;
}
