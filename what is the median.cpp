#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    int n;
    while(cin>>n){
        a.push_back(n);
        sort(a.begin(),a.end());
        int l=a.size();
        if(l%2==1){
            cout<<a[((l+1)/2)-1]<<endl;
        }
        else{
            int m=(l/2)-1;
            int k=(l/2);
            int j=(a[m]+a[k])/2;
            cout<<j<<endl;
        }
    }
    return 0;
}
