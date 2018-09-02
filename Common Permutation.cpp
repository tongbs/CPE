#include <iostream>
#include <string>
#define len 26

using namespace std;

int main(){
	string a,b;

while(cin>>a>>b){

	int ch1[len]={};//一定要初始化
	int ch2[len]={};
	int ch[len]={};
	int l=a.length();
	int m=b.length();
	for(int i=0;i<l;i++){//統計第一個字串個字母的頻率
		ch1[a[i]-'a']++;
	}
	for(int i=0;i<m;i++){
		ch2[b[i]-'a']++;
	}
	for(int i=0;i<len;i++){//找出現頻率小的
		if(ch1[i]>ch2[i])
			ch[i]=ch2[i];
		else
			ch[i]=ch1[i];
		if(ch[i]>0){      //印出英文字母
			for(int j=0;j<ch[i];j++){
				cout<<char('a'+i);
			}
		}
	}
	cout<<endl;
}
return 0;
}
