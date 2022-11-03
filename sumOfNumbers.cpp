/* 
https://www.codechef.com/problems/FLOW006
Code-Chef problem : Sum of digits of given numbers
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    cout << "t is : " << t <<endl;

    int n;

    for (int i=0; i < t ; i++) {
        cout << "input > " << flush;
        cin >> n;

        int sum=0; 

        while (n>0){
            int lastDigit= n%10;
            sum = sum + lastDigit;

            n=n/10;
        }
        cout << sum << endl;
    }

    return 0;
}