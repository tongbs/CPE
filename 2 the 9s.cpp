#include <iostream>
#include <string>
#define len 500

using namespace std;
//�D�طN��GŪ���@�Ʀr�A���Ʀr�̤j��1000��C�p��ӼƦr�O�_���E�����ơH�p�O�A�A�p��䶥�h�ơC
//���P�_�O�_���E�����ơG�Ҧ���Ƭۥ[ �� ���ע��A�Y���E�����ơC
//���p�ⶥ�h�ơG�Ҧ���Ƭۥ[��o�X���Ĥ@���`�M���@���A�̦���������ӼƦr�L�k�A�p���`�M�C
//Example 1:
//999 => 27(9+9+9, 1��) => 9(2+7, 2��)
//Example 2:
//99999 99999 99999 99999 9 => 189(9+9+...+9, 1��) => 18(1+8+9, 2��) => 9(1+8, 3��)

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
