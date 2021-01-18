#include <bits/stdc++.h>

using namespace std;
int main() {
	long long int n;
  long long int count = 0;
	while (cin >> n && n!=0) {
		vector<string> v;
		while(n--) {
			string s;
			cin >> s;
			v.push_back(s);
		}

		long long int size = v.size();
		vector<string> ans(size);
		for(auto i = 0; i < size; i++) {
			if (i%2) {
				ans[size- ((i-1)/2) - 1] = v[i];
			} else {
				ans[i/2] = v[i];
			}
		}

		cout << "SET " << ++count << endl;
		for(auto i=ans.begin(); i!=ans.end(); i++) {
			cout << *i << endl;
		}
	}
	return 0;
}
