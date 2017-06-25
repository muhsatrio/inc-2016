#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int t,n,x;
	long long k,arr[1001],maks,min,diff,count,temp;
	cin >> t;
	for (int i=1;i<=t;i++) {
			cin >> n >> k;
			for (int j=0;j<n;j++) 
				cin >> arr[j];
			sort(arr,arr+n);
			count=1;
			for (int j=0;j<n;j++) {
				x=j;
				diff=arr[x]-arr[j];
				temp=0;
				while (x<n-1 && diff<=k) {
					temp++;
					x++;
					diff=arr[x]-arr[j];
				}
				if (diff<=k)
					temp++;
				if (temp>count)
					count=temp;
			}
			cout <<"Case #" << i << ": " << count << endl;
	}
}
