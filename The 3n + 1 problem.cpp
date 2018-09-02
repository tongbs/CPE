//#include <iostream>
//
//using namespace std;
//
//unsigned long long int algorithm(long long int a){
//	unsigned long long int count=0;
//	while(a){
//
//		if(a==1){
//			//cout<<a<<endl;
//			a=0;
//			count++;
//		}
//		else if(a%2==1){
//			a=3*a+1;
//			//cout<<a<<' ';
//			count++;
//		}
//		else if(a%2==0){
//			a=a/2;
//			//cout<<a<<' ';
//			count++;
//		}
//	}
//	//cout<<count<<endl;
//	return count;
//}
//
//
//
//
//int main(){
//	unsigned long long int n,m,temp;
//	while(cin>>n>>m){
//		if(n>m){
//			temp=n;
//			n=m;
//			m=temp;
//		}
//		for(long long int i=n;i<=m;i++){
//			algorithm(i);
//		}
//		unsigned long long int max=algorithm(n);
//
//		for(long long int i=n;i<m;i++){
//			if(max<algorithm(i)){
//				max=algorithm(i);
//			}
//		}
//		cout<<n<<' '<<m<<' '<<max<<endl;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

int calc_cycle_len(int num)
{
    int cycle_length=1;

    while(num!=1)
    {
        cycle_length++;
        if(num%2==1)
            num=num*3+1;
        else
            num/=2;
    }

    return cycle_length;
}
int main(void)
{
    int temp,i,Num1,Num2,cycle_length=0,max_cycLen=0;

    while(cin >> Num1 >> Num2)
    {
        cout << Num1 << ' ' << Num2 << ' ';
        max_cycLen=0;
        if(Num1>Num2)
        {
            temp=Num2;
            Num2=Num1;
            Num1=temp;
        }
        for(i=Num1;i<=Num2;i++)
        {
            cycle_length=calc_cycle_len(i);
            if(cycle_length>max_cycLen)
                max_cycLen=cycle_length;
        }
        cout << max_cycLen << endl;
    }
    return 0;
}

