#include <iostream>
#include <cmath>
#include <algorithm>
#define len 5000
#define max 4000
int num[max+1][len];

using namespace std;

void factorial()
{
    int i , j;
    for(i = 0; i < max; i++)
    {
        for(j = 0; j < len; j++)
        {
            num[i][j] = 0;
        }
    }
    num[0][0] = 1;
    num[1][0] = 1;
    for(i = 2; i < max; i++)
    {
        for(j = 0; j < len; j++)
        {
           num[i][j] += num[i-1][j]*i;
           if(num[i][j] >= 10)
           {
               num[i][j+1]+=num[i][j]/10;
               num[i][j]%=10;
           }
        }
    }
}

void answer(int p)
{
    int i;
    for(i = len-1; i > 0; i--)
    {
        if(num[p][i] != 0)
            break;
    }
    //long long int m = 0;
    //cout << i << "+++" <<endl;
    for(;i >= 0; i--)
    {
        cout << num[p][i];
    }
     //cout << m;
     //return  m;
}


int main(){
    int n = 0;
    while(cin >> n)
    {
        factorial();
        answer(n);
//        if(n < 0 && abs(n)%2 == 0)
//        {
//            cout << "Underflow!" << endl;
//        }
//        else if(n < 0 && abs(n)%2!=0)
//        {
//            cout << "Overflow!" << endl;
//        }
//        else if(n>=0 && n <= 7)
//        {
//            cout << "Underflow!" << endl;
//        }
//        else if(n>=0 && n > 13)
//        {
//            cout << "Overflow!" << endl;
//        }
//        else if(n==8)
//        {
//            cout << "40320" << endl;
//        }
//        else if(n==9)
//        {
//            cout << "362880" << endl;
//        }
//        else if(n==10)
//        {
//            cout << "3628800" << endl;
//        }
//        else if(n==11)
//        {
//            cout << "39916800" << endl;
//        }
//        else if(n==12)
//        {
//            cout << "479001600" << endl;
//        }
//        else if(n == 13)
//        {
//            cout << "6227020800" << endl;
//        }
    }
    return 0;
}
