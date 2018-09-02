#include <iostream>
using namespace std;
#define len 300

int main(){
	string a,b;
	int c[len]={};
	int d[len]={};
	int e[len]={};
	getline(cin,a);
	getline(cin,b);
	//cout<<a<<"???"<<endl;
	int i,j,l,m;
	l=a.length();
	m=b.length();
		//cout<<l<<"====="<<endl;
	for(i=0;i<l;i++){
		c[i]=a[l-i-1]-'0';
	}
	for(j=0;j<m;j++){
		d[j]=b[m-j-1]-'0';
	}
	for(int k=0;k<len;k++){
		e[k]=c[k]+d[k];
	} 
	for(int k=0;k<len-1;k++){
		if(e[k]>9){
			e[k+1]+=e[k]/10;
			e[k]=e[k]%10;
		}
	}
	//for(int k=0;k<len;k++){
	//	cout<<e[k];
	//}
	int p;
	
	for(p=len-1;p>=0;p--){
		if(e[p]!=0) break;
	}
	for(;p>=0;p--){
		cout<<e[p];
	}
	cout<<endl;
	/*for(int j=0;j<len;j++){
		cout<<c[j];
	}
	cout<<endl;*/
	return 0;
}
