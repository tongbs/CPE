#include <iostream>

using namespace std;

int main(){
    int num;
    int count = 0;
    cin>>num;
    while(num--)
    {
        count++;
        int n;
        cin>>n;
        int flag = 0;
        int area;
        int x1,y1,x2,y2,X1,Y1,X2,Y2;
        while(n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if(flag == 0)
            {
                flag = 1;
                X1 = x1;
                Y1 = y1;
                X2 = x2;
                Y2 = y2;
            }
            else
            {
                if(x1 > X1) X1 = x1;
                if(y1 > Y1) Y1 = y1;
                if(x2 < X2) X2 = x2;
                if(y2 < Y2) Y2 = y2;
            }
        }
        if(X1 > X2 || Y1 > Y2)//­n²Å¦Xlower left higher right
            area = 0;
        else
        {
            area = (X2 - X1)*(Y2 - Y1);
        }
        cout << "Case " << count << ":" << " " << area << endl;
    }


}
