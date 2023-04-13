#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    int count=0;
	    float sum = 0;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sum+=(float)(arr[i]);
	        if((float)(sum/(i+1))*100 == 100)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
