#include <iostream>
using namespace std;

void TEGANGAN()
{
    float I, R, V;
    cout << "Besar Arus I = ";
    cin >> I;
    cout << "Besar Hambatan R = ";
    cin >> R;
    V = I * R;
    cout << "Besarnya Tegangan V = " << V << " volt" << endl;
}
float ARUS()
{
    float R2, V2;
    cout << "Besar Tegangan V = ";
    cin >> V2;
    cout << "Besar Hambatan R = ";
    cin >> R2;
    return (V2 / R2);
}
float HAMBATAN()
{
    float V3, I3;
    cout << "Besar Tegangan V = ";
    cin >> V3;
    cout << "Besarnya Arus I = ";
    cin >> I3;
    return (V3 / I3);
}

main()
{
    int pil;
    char jawab = 'Y';
    while (jawab == 'Y' || jawab == 'y')
    {
        cout << "Menghitung Besarnya Arus, Tegangan dan Hambatan" << endl;
        cout << "1.Hitung Tegangan" << endl;
        cout << "2.Hitung Arus" << endl;
        cout << "3.Hitung Hambatan" << endl;

        cout << "pilih : ";
        cin >> pil;
        if (pil == 1)
            TEGANGAN();
        if (pil == 2)
            cout << "Besarnya Arus I = \n" << ARUS() << " Ampere" << endl;
        if (pil == 3)
            cout << "Besarnya Hambatan R = \n" << HAMBATAN() << " Ohm" << endl;

        cout << "Hitung lagi? Y|N";
        cin >> jawab;
    }
    return 0;
}
