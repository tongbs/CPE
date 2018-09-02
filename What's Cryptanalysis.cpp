#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int array[100];
using namespace std;

int main()
{
	int n,i,l,max=0;
	char j;
	char a[1000];
	cin>>n;
	for(i=0;i<=n;i++){
		gets(a);
		for(j='A';j<='Z';j++){
			for(l=0;a[l]!='\0';l++){
				if(toupper(a[l])==j)
					array[j]++;
			}
		if(array[j]>max)
			max=array[j];	
		}
	}
	for(i=max;i>0;i--){
		for(j='A';j<='Z';j++){
			if(array[j]==i)
				cout<<j<<' '<<i<<endl;
		}		
	}
	return 0;	
} 

