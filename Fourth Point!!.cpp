#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x1 , y1;
    double x2 , y2;
    double x3 , y3;
    double x4 , y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {
        //double c = 0.50;
        cout << fixed << setprecision(3);

        if(x1 == x2 && y1 == y2)
        {
            double X = x3+x4-x1;
            cout  << setprecision(3) << X << " " << y3+y4-y1 << endl;
        }
        else if(x1 == x3 && y1 == y3)
        {
            cout << x2+x4-x1 << " " << y2+y4-y1 << endl;
        }
        else if(x1 == x4 && y1 == y4)
        {
            cout << x3+x2-x1 << " " << y3+y2-y1 << endl;
        }
        else if(x2 == x3 && y2 == y3)
        {
            cout << x1+x4-x2 << " " << y1+y4-y2 << endl;
        }
        else if(x3 == x4 && y3 == y4)
        {
            cout << x2+x1-x3 << " " << y2+y1-y3 << endl;
        }
        else
        {
            cout << x3+x1-x2 << " " << y3+y1-y2 << endl;
        }
    }
    return 0;

}
