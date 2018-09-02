#include <iostream>

using namespace std;

int fib(int n)
{
    int a = 1;
    int b = 1;
    for(int i = 3;i<=n;i++){
        int c =a+b;
        a=b;
        b=c;
    }
    return b;

}

int main(){
    int n;
    cin>>n;
    cout<< fib(n);
}
