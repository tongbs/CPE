#include <iostream>
#include <sstream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int M,X1;
		int count1=0;
		cin>>M;
		X1=M;
		while(X1!=0){
			if(X1%2==1){
				count1++;
			}
			X1/=2;
			//cout << X1 << "!!!";
		}
		int a1,a2,a3,a4;
		int count2=0;
		a1=M/1000;
		a2=(M-(a1*1000))/100;
		a3=((M-(a1*1000)-(a2*100)))/10;
		a4=(M-(a1*1000)-(a2*100)-(a3*10));
		int X2=((a1*4096)+(a2*256)+(a3*16)+a4);
		while(X2!=0){
			if(X2%2==1){
				count2++;
			}
			X2/=2;
		}
		cout<<count1<<" "<<count2<<endl;
	}
}
