#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,n,temp,arr[2001];
	cin >> t;
	for (int i=1;i<=t;i++) {
		cin >> n;
		for (int j=0;j<n;j++)
			cin >> arr[j];
		cout <<"Case #" << i << ": "<< min(arr[0],arr[n-1]) << endl;
	}
}