//codechef question : 
//https://www.codechef.com/problems/DISTINCTCOL

#include <iostream>
using namespace std;

int main() {
	int t, n;
	
	for (int i=0; i<t; i++){
	    cin >> n;
	    int arr[n+1];
	    arr[0]=0;
	    
	    for (int j=0; j<n; j++){
	        cin >> arr[j+1];      //input in array
	        
	        //if any element is greater than 0th element
	        if(arr[j+1] > arr[0]) {
	            arr[0] = arr[j+1];
	        }
	    }
	    
	    cout << arr[0] <<endl;
	}
	return 0;
}
