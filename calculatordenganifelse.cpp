#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b;
    const float PI = 3.1413647;
    int c, d;

    cout << endl;
    cout << "---------------- kalkulator disini ----------------\n ";
    cout << "Operasi\t" << "Trigonometri\t" << "Logaritma\n";
    cout << "--------------------------------------------------\n";
    cout << "1. Kali\t\t"     << "7. Sin\t\t"   << "13. Log\n";
    cout << "2. Bagi\t\t"     << "8. cos\n";
    cout << "3. Tambah\t"   << "9. Tan\n";
    cout << "4. kurang\t"   << "10. Arcsin\n";
    cout << "5. Akar\t\t"     << "11. Arcos\n";
    cout << "6. Pangkat\t"  << "12. Arctan\n\n";
    cout << "Mau memakai fungsi apa.?  "; cin >> c;

    switch (c) {
        case 1:
            cout << "input nilal pertama : "; cin >> a; 
            cout << "input nilai kedua : "; cin >> b;
            cout << "Hasilnya : " << a * b << endl;
            break;
        case 2:
            cout << "input nilal pertama : "; cin >> a; 
            cout << "input nilai kedua : "; cin >> b;
            cout << "Hasilnya : " << a / b << endl;
            break;
        case 3:
            cout << "input nilal pertama : "; cin >> a; 
            cout << "input nilai kedua : "; cin >> b;
            cout << "Hasilnya : " << a + b << endl;
            break;
        case 4:
            cout << "input nilal pertama : "; cin >> a; 
            cout << "input nilai kedua : "; cin >> b;
            cout << "Hasilnya : " << a - b << endl;
            break;
        case 5:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << sqrt(a)  << endl;
            break;
        case 6:
            cout << "input nilal : "; cin >> a; 
            cout << "input nilai kedua : "; cin >> b;
            pow(a,b) == d;
            cout << "Hasilnya : " << d << endl;
            break;
        case 7:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << sin(a)  << endl;
            break;
        case 8:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << cos(a)  << endl;
            break;
        case 9:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << tan(a)  << endl;
            break;
        case 10:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << asin(a)*180.0/PI  << endl;
            break;
        case 11:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << acos(a)*180.0/PI  << endl;
            break;
        case 12:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << atan(a)*180.0/PI  << endl;
            break;
        case 13:
            cout << "input nilal : "; cin >> a; 
            cout << "Hasilnya : " << log(a)  << endl;
            break;
        default:
            cout << "Error bro..!"<< endl;
        }

        cout << "tekan ctrl + c untuk berhenti\n";
    system ("pause");
    main();
    return 0;

}   