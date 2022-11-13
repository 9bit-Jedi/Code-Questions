/*
	https://www.codechef.com/problems/T20MCH
	codechef : can chef win T20 game
*/

#include <iostream>
using namespace std;

int main() {
    int r, c, o;
    cin >> r >> o >> c;
    
    if( (r-c) < ( (20-o)*36) ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
	return 0;
}
