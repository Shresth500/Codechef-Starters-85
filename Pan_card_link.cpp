#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    if(s.size() == 1)
	        cout << s << endl;
	    else if(s.size() >= 2){
	            int val1 = s[s.size()-1]-'0';
	            int val2 = s[s.size()-2]-'0';
	            val2=val2%2;
	            cout << val2*10+val1 << endl;
	        }
	}
	return 0;
}
