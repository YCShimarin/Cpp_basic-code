#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

int a;
float x, y, t, hasilk, hasilk2, hasilL;
float b, c, d;
const float PI = 3.14125;

int main()
{
    system ("cls");
    cout << "------------------------------------\n";
    cout << "---------luas dan keliling----------\n------------------------------------\n1. segitiga\t\t";
    cout << " 5. lingkaran\n2. trapesium\t\t 6. layangan\n3. jajaran genjang\t 7. persegi\n4. persegi panjang\n\n";
    cout << "mau cari luas apa..? "; cin >> a;
    
    switch(a)
    {
        case 1 :
            cout << "nilai alas     = "; cin >> x;
            cout << "nilai tinggi   = "; cin >> t;
            cout << endl;
                hasilL = (x*t)/2;
                hasilk = 2 * (sqrt(pow(x/2,2) + pow(t,2))) + x;
            cout << "Luas       = " << hasilL << endl;
            cout << "Keliling   = " << hasilk << endl;
            break;

        case 2 :
            cout << "nilai alas     = "; cin >> x;
            cout << "nilai atap     = "; cin >> y;
            cout << "nilai tinggi   = "; cin >> t;
            cout << endl;
                hasilL = ((x+y)*t)/2;
                hasilk = 2 * (sqrt(pow((x-y)/2,2) + pow(t,2))) + x + y;
                hasilk2 = (sqrt(pow((x-y),2) + pow(t,2))) + x + y + t;
            cout << "Luas trapesium               = " << hasilL << endl;
            cout << "keliling trapesium sama kaki = " << hasilk << endl;
            cout << "keliling trapesium siku siku = " << hasilk2 << endl;
            break;

        case 3 :
            cout << "nilai alas          = "; cin >> x;
            cout << "nilai sisi miring   = "; cin >> y;
            cout << "nilai tinggi        = "; cin >> t;
            cout << endl;
            hasilL = a * t;
            hasilk = 2*x + 2*y;
            cout << "Luas jajaran ganjang       = " << hasilL <<endl;
            cout << "Keliling jajaran genjang   = " << hasilk <<endl;
            break;

        case 4 :
            cout << "nilai alas          = "; cin >> x;
            cout << "nilai tinggi        = "; cin >> t;
                hasilL = a * t;
                hasilk = (2*a) + (2*t);
            cout << "Luas persegi panjang       = " << hasilL <<endl;
            cout << "Keliling persegi panjang   = " << hasilk <<endl;
            break;

        case 5 :
            cout << "nilai jari jari     = "; cin >> x;
                hasilL = PI * pow(x,2);
                hasilk = PI * 2 * x;
            cout << "Luas lingkaran       = " << hasilL <<endl;
            cout << "Keliling lingkaran   = " << hasilk <<endl;
            break;

        case 6 :
            cout << "nilai Diagonal 1     = "; cin >> x;
            cout << "nilai diagonal 2     = "; cin >> y;
                hasilL = (x * y)/2;
                //hasilk = ;
            cout << "Luas lingkaran       = " << hasilL <<endl;
            //cout << "Keliling lingkaran   = " << hasilk <<endl;
            break;

        case 7 :
            cout << "nilai sisi     = "; cin >> x;
                hasilL = pow(x,2);
                hasilk = 4 * x;
            cout << "Luas persegi        = " << hasilL <<endl;
            cout << "Keliling persegi    = " << hasilk <<endl;
        default:
            cout << "error" << endl;    }

    getch();
    return 0;

}

