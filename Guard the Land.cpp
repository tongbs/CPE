#include <iostream>

using namespace std;

int main()
{
    int test_num;
    cin >> test_num;
    int number = 0;
    while(test_num--)
    {
        int ax , ay , bx ,by;
        int cx , cy , dx ,dy;
        cin >> ax >> ay >> bx >> by;
        cin >> cx >> cy >> dx >> dy;
        int ix = max(ax,cx);
        int iy = max(ay,cy);
        int jx = min(bx,dx);
        int jy = min(by,dy);
        int A = (bx-ax)*(by-ay);
        int B = (dx-cx)*(dy-cy);
        int C = (jx-ix)*(jy-iy);
        number++;
        if(ix>=jx||iy>=jy)
        {
            cout << "Night "<< number << ": "<<"0 "<<A+B<<" "<<10000-A-B<<endl;
        }
        else
        {
            cout << "Night " << number << ": "<<C<<" "<<A+B-C-C<<" "<<10000-A-B+C<<endl;
        }
    }

}
