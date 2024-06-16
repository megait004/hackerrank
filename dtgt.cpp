#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int s1,s2,s3,r,d,tong;
	cin >> s1 >> s2 >> s3;
	 if(s1<s2&&s1<s3){
	 	r=sqrt(s1);
	 	cout << r << endl;
	 }
	  if( s2 == s3&&s1!=s2&&s1!=s3 ){
	 	d=s2/r;
	 	cout << d  << endl ;
	 }
	 tong=r*8+d*4;
	 cout << tong ;
	 
	   if(s1==s2&&s1==s3){
	  		cout << s1 *12;
	  }
//	 tong=r*8+d*4;
//	 cout << tong ;
	 
	 return 0;
}