#include <iostream>

using namespace std;

int rev (int a)
{
    int temp = 0;
    while(a)
    {
        temp = temp*10 + a%10;
        a/=10;
    }
    return temp;
}


int main(){
    int test_case;
    cin >> test_case;
    while(test_case--)
    {
        int n;
        cin >> n;
        int count = 0;
        while(n != rev(n))
        {
            n = n + rev(n);
            count ++ ;
        }
        cout << count << " " << n << endl;
    }


}
