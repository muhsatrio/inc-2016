#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

//string pecahString(string s,int x) {

//}

int main() {
	int t,x,lenS,lenP;
	string s,p;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		bool sama=false;
		cin >> p >> s;
		while (s.length()>=p.length() && !sama) {
			x=0;
			lenS=s.length();
			lenP=p.length();
			while (s[x]==p[x] && x<lenP)
				x++;
			if (x>=lenP)
				sama=true;
			else
				s=s.substr(x+1,lenS-x);
		}
		cout << "Case #" << i << ": ";
		if (sama)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}