#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int M,N,output_case=1,i,j,k,l;

	while(1)
	{
		cin >> M >> N;
		if(M == 0 && N == 0) return 0;

		cout << "Triangular Museum " << output_case++ << endl;

		int high=M*N,base_tell=1,sign_tell=1,tri_num=1,tri_base=(M-1);


		for(i=0;i<high;i++){
			for(j=0;j<high-i-1;j++) cout << " ";

			if(sign_tell%M != 0){
				for(l=0;l<tri_num;l++){
					cout << "/";

					for(k=0;k<2*(sign_tell-1);k++){
						cout << " ";
					}

					cout << "\\";

					if(base_tell != tri_num){
						for(k=0;k<2*(tri_base);k++){
							cout << " ";
						}
						base_tell++;
					}
					else{
						base_tell = 1;
					}
				}
				tri_base--;
				sign_tell++;

			}
			else{
				for(l=0;l<tri_num;l++){
					cout << "/";

					for(k=0;k<2*(sign_tell-1);k++){
						cout << "_";
					}

					cout << "\\";

					if(base_tell != tri_num){
						for(k=0;k<2*(tri_base);k++){
							cout << "_";
						}
						base_tell++;
					}
					else{
						base_tell = 1;
					}
				}
				tri_base = M-1;
				sign_tell = 1;
				tri_num++;
			}
			cout << endl;
		}
		cout << endl;
	}
}

