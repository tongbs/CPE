#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
	

int main(){
	int n;
	cin>>n;
	char s[100];
	while(n--){
		cin>>s;
		int X1,X2,b1=0,b2=0;
		sscanf(s,"%d",&X1);//decimal
		sscanf(s,"%x",&X2);//heximal
		while(X1){
			b1+=X1&1;
			X1/=2;
		}
		while(X2){
			b2+=X2&1;
			X2/=2;
		}
		cout<<b1<<" "<<b2<<endl;
	}
	
	return 0;
} 






