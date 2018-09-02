#include <iostream>
#include <cmath>
//印出三位數內的所有armstrong number
using namespace std;

int main(){
	int val=0;
	int sum=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				val=100*i+10*j+k;
				if(i==0&&j==0){
					sum=pow(k,1);
					if(val==sum){
					cout<<val<<endl;
				}
				}
				if(i==0&&j!=0){
					sum=pow(j,2)+pow(k,2);
					if(val==sum){
					cout<<val<<endl;
				}
				}
				if(i!=0){
					sum=pow(i,3)+pow(j,3)+pow(k,3);
					if(val==sum){
					cout<<val<<endl;
				}
				}

			}
		}

	}

}
