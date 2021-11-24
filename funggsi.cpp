#include <iostream>

using namespace std;

float  luasLingkaran (float PI = 3.1415)
{
    return (PI);
}
float kelLingkaran (float a = 2, float PI = 3.1415)
{
    return (a*PI);
}

int main()
{
        float hasil, r;
        const float PI =  3.1415;

        cout << "-------------------------------------------------------------\n";
        cout << "Selamat datang di pencarian Luas dan kelilnga lingkaran\n-------------------------------------------------------------\n";
        cout << "masukkan nilai jari-jari anda = "; cin >> r; cout << " Cm";
        cout << "-------------------------------------------------------------\n";

        hasil = luasLingkaran() * r * r;
        cout <<"hasil luas lingkaran adalah         : " << hasil << " Cm" << endl;

        hasil = kelLingkaran() * r;
        cout <<"hasil keliling lingkaran adalah     : " << hasil << " Cm" << endl;

        system ("pause");
        return 0;
}