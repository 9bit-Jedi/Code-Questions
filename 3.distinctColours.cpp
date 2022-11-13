#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	for (int i=0; i<t; i++){
	    cin >> n;
	    
	    int A[n+1];
	    A[0]=INT_MIN;
	    
	    for (int j=0; j<n; j++){
	        cin >> A[j+1];      //input in array
	        
	        //if any element is greater than 0th element
	        if(A[j+1] > A[0]) {
	            A[0] = A[j+1];
	        }
	    }
	    
	    cout << A[0] <<endl;
	}
	return 0;
}
