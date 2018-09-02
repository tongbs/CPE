#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int num;
    cin>>num;
    while(num--){
        int n;
        cin>>n;
        vector <int> a;
        int m;
        for(int i=0;i<n;i++){
            cin>>m;
            a.push_back(m);
        }
        sort(a.begin(),a.end());
        /*for(int t=0;t<n;t++){
            cout<<a[t]<<"++";
        }*/
        if(n%2==1){
            int k = ((n + 1)/2)-1;
            int b=0;
            for(int j = 0;j<n;j++){
                b+=abs(a[j]-a[k]);
            }
            cout<<b<<endl;
        }
        else{
            int h = n/2;
            int c = 0;
            for(int r = 0;r<n;r++){
                c+=abs(a[r]-a[h]);
            }
            cout<<c<<endl;
        }
       a.clear();
    }
    return 0;
}
