#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int T;
    int N,M,Q;
    int x,y;
    char map[102][102];
    cin>>T;
    while(T--){
        cin>>M>>N>>Q;
        getchar();
        for(int k=0;k<M;k++){
               gets(map[k]);
        }

        cout<<M<<" "<<N<<" "<<Q<<endl;
        while(Q--){
            cin>>x>>y;
            int ans=1;
            int a,b,i;
            for(i=0;i<=M||i<=N;i++){
                int flag=0;
                for(a=x-i;a<=x+i;a++){
                    for(b=y-i;b<=y+i;b++){
                        if(a<0||b<0||a>=M||b>=N){
                           flag=1;
                           break;
                        }
                        if(map[a][b]!=map[x][y]){
                            flag=1;
                        }
                    }
                }
                if(flag==0){
                    if(ans<2*i+1){
                        ans=2*i+1;
                    }
                }
                else break;
            }
            cout<<ans<<endl;
        }

    }

}
