/* 
https://www.codechef.com/LRNDSA01/problems/FLOW007
Code-Chef problem : Reverse given number 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    int n;
    for(int i=0; i<t ; i++) {
        cin >> n;
        int newNum =0;

        while (n>0) {
            int lastDigit = n%10;

            newNum = (newNum*10) + lastDigit;
            n = n/10;
        }
        cout << newNum << endl;
    }

    return 0;
}
