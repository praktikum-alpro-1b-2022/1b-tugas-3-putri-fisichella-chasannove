#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
     cout << "Rumus Y = bx^2+0.5x-c" << endl;
    cout << "=============================================" << endl;
    {
        double b = 25, x = 15, c = 20;
        float Y;
        cout << "Masukan b: ";
        cin >> b;
        cout << "Masukan x: ";
        cin >> x;
        cout << "Masukan c: ";
        cin >> c;
        Y = b*(x*x)+0.5*x - c;
        cout << "Y =" << Y << endl;
    }
    return 0;
}
