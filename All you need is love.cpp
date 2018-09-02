#include <iostream>
#include <string>
#include <cmath>

//此題就是要找出2個數字的最大公因數。如果有找到則為" All you need is love!" 反之為Love is not all you need!。

using namespace std;

int main(){
    int number;
    int count = 0;
    cin>>number;
    while(number--){
        string a,b;
        int n1 = 0;
        int n2 = 0;
        cin>>a>>b;
        count++;
        for(int i = a.length()-1; i >= 0; i--)
        {
            n1+=(pow(2,a.length()-i-1)*(a[i]-'0'));
            //cout << i << "!!" << a[i]-'0' <<endl;
        }
        for(int i = b.length()-1; i >= 0; i--)
        {
            n2+=(pow(2,b.length()-i-1)*(b[i]-'0'));
        }
        //cout << n1 << endl << n2 << endl;

        int flag = 0;

        if(n1 >= n2)
        {
            for(int j = 2; j <= n2; j++)
            {
                if(n1 % j == 0 && n2 % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            for(int j = 2; j<= n1; j++)
            {
                if(n1 % j == 0 && n2 % j == 0)
                {
                    flag = 1;
                    break;//一定要break才不會TTL
                }
            }
        }
        if(flag==1)
        {
            cout << "Pair #" << count << ": All you need is love!"<<endl;
        }
        else
        {
            cout << "Pair #" << count << ": Love is not all you need!"<<endl;
        }
        a.clear();
        b.clear();
    }
    return 0;
}
