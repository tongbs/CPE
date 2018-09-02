#include <iostream>
#include <string>

#define len 500

using namespace std;

int main(){
	string a,b;
while(cin>>a>>b){
	int c[len]={};
	int d[len]={};
	int e[2*len]={};
	int l=a.length();
	for(int i=0;i<l;i++){
		c[i]=a[l-i-1]-'0';
	}
	//for(int i=0;i<l;i++){
	//	cout<<c[i]<<"??";
	//}


	int m=b.length();
	for(int i=0;i<m;i++){
		d[i]=b[m-i-1]-'0';
	}
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			e[i+j]+=c[j]*d[i];
			if(e[i+j]>=10){
				e[i+j+1]+=e[i+j]/10;
				e[i+j]=e[i+j]%10;
			}
		}
	}
	int p;
	for(p=2*len-1;p>=0;p--){
		if(e[p]!=0) break;
	}
	for(;p>=0;p--){
		cout<<e[p];
	}
	cout<<endl;
}
	return 0;
}
