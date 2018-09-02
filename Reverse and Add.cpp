#include <iostream>
#include <string>

using namespace std;

long long int reverse(long long int a){//±N¼Æ¦rÄA­ËEX. 9871 -> 1789 
	long long int r=0;
	while(a){
		r=r*10+a%10;
		a/=10;
	}
	return r;
}



int main(){
	long long int n;
	long long int a;
	cin>>n;
	for(int i=0;i<n;i++){
		long long int count=0;
		cin>>a;
		a+=reverse(a);
		while(1){
			long long int num;
			num=reverse(a);
			count++;
			if(a==num){
				cout<<count<<" "<<a<<endl;
				break;
			}
			else
				a+=num;
		}
	}
	return 0;
} 
