#include<bits/stdc++.h>
using namespace std;
void replace( int &a , int & b){
	int a1 = a + b ;
	int b1 = abs(b - a );
	cout << a1 << endl;
	cout << b1;
}
int main(){
	int a , b ; cin >> a >> b ;
	replace(a , b);
	return 0;
}