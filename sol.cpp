#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int yy;
		cin >> yy;
		string d[7]={"sunday","monday","tuesday",
					 "wednesday","thursday","friday",
					 "saturday"};
		int cnt=1;
		for(int i=1901; i<=yy; ++i) {
			if((i-1)%400==0)
				cnt+=2;
			else if((i-1)%100!=0&&(i-1)%4==0)
				cnt+=2;
			else
				cnt++;
		}
		cout << d[cnt%7] << "\n";
	}
}
