#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

long long int array[100005];
long long temp[100005];

long long int merge(long long int array[], long long int temp[], long long int left, long long int mid, long long int right) {
	long long int i,j,k;
	long long int noofinv = 0;

	i = left;
	j = mid;
	k = left;

	while ((i <= mid - 1) && (j <= right)) {
		if (array[i] <= array[j]) {
			temp[k++] = array[i++];
		}
		else {
			temp[k++] = array[j++];
			noofinv += (mid - i);
//			cout << noofinv << endl;
		}
	}

	while (i <= mid - 1) {
		temp[k++] = array[i++];
	}
	
	while (j <= right) {
		temp[k++] = array[j++];
	}

	for (i = left; i <= right; i++) {
		array[i] = temp[i];
	}
	return noofinv;
}

long long int _mergesort(long long int array[],long long int temp[], long long int left,long long int right) {
		long long int mid, noofinv = 0;
		if (right > left) {
			mid = (right + left)/2;
			noofinv += _mergesort(array, temp, left, mid);
			noofinv += _mergesort(array, temp, mid + 1, right);

			noofinv += merge(array, temp,left, mid + 1, right);
		}
		return noofinv;
}

long long int merge_sort(long long int *array,long long int size) {
//	int *temp = new int(size);
	return _mergesort(array,temp,0,size - 1);
}
int main() {
	long long int no, i;
	long long int res;
	scanf ("%lld", &no);
	memset(array,0,no);
	for (i = 0; i < no; i++) {
		scanf ("%lld", &array[i]);
	}	

	res = merge_sort(array, no);
	printf ("%lld\n", res);
	return 0;
}
