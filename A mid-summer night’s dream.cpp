#include <iostream>
#include <vector>
#include <algorithm>
//first output min �����
//second output �ƦC�����X�ӼƦr�M����Ƥ@��(���ƭӼƦ���Ӥ����)
//third �ĤT�ӬO�n�A��X���X�Ӥ��P�ŦXA�ʽ誺�Ʀr�A�o�ǼƦr�]�t�S���X�{�b�o��Ʀr�̭����C
//�N�O������Ƭ۴�[1�A�]�����F������ӼƥH�~�A��Ƥ����C�Ӥ��P���ȳ��]�t�b���C
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        vector<int> b;
        for(int i = 0; i<num; i++)
        {
            int a;
            cin >> a;
            b.push_back(a);
        }
        sort(b.begin(),b.end());
        int mid = (b.size()-1)/2;
        int counting = 0;
        int diffvalue;
        if(num%2==1)
        {
            for(int i = mid; i>=0&&b[i]==b[mid]; i--)
            {
                counting++;
            }
            for(int i = mid+1; i<b.size()&&b[i]==b[mid]; i++)
            {
                counting++;
            }
            diffvalue = 1;
        }
        else
        {
            for(int i = mid; i>=0&&b[i]==b[mid]; i--)
            {
                counting++;
            }
            for(int i = mid+1; i<b.size()&&b[i]==b[mid+1]; i++)
            {
                counting++;
            }
            diffvalue = b[mid+1]-b[mid]+1;
        }
        cout << b[mid] << " " << counting << " " << diffvalue << endl;
    }
    return 0;
}
