#include <iostream>
#include <string>
#define len 500

using namespace std;
//題目意思：讀取一數字，此數字最大有1000位。計算該數字是否為九的倍數？如是，再計算其階層數。
//※判斷是否為九的倍數：所有位數相加 ÷ ９＝０，即為九的倍數。
//※計算階層數：所有位數相加後得出的第一個總和為一階，依此類推直到該數字無法再計算總和。
//Example 1:
//999 => 27(9+9+9, 1階) => 9(2+7, 2階)
//Example 2:
//99999 99999 99999 99999 9 => 189(9+9+...+9, 1階) => 18(1+8+9, 2階) => 9(1+8, 3階)

int main()
{
    string a;
    while(cin >> a)
    {
        int b[len] = {0};
        if(a=="0") break;
        else
        {
            for(int i = 0; i<a.length(); i++)
            {
                b[i] = a[i]-'0';
            }

            int sum = 0;
            for(int i = 0; i<a.length(); i++)
            {
                sum+=b[i];
            }

            if(sum%9!=0)
            {
                cout << a << " is not a multiple of 9." << endl;
            }
            else
            {
                int n = 1;
                int s = 0;
                while(sum>=10)
                {
                    s = 0;
                    while(sum>0)
                    {
                        s+=sum%10;
                        sum/=10;
                    }
                    sum = s;
                    n++;
                }
                cout << a << " is a multiple of 9 and has 9-degree " << n << "." << endl;
            }
        }
    }
    return 0;
}
