#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float n, a, b, u2, hasil, m, sn;

    cout << "Geometry Series ";
    cout << "Enter series number to n = "; cin >> n;
    cout << "Enter first value =  "; cin >> a;
    cout << "Enter second Value   = "; cin >> u2;

    b = u2/a;
    cout << "Series = ";
    for (int C = 1; C <= n; C++)
    {
        hasil = a * pow(b,C-1);
        cout << hasil << " ";
    }
    cout << endl;
    m = (hasil+a)/2;
    sn = a*((pow(b,n)-1)/(b-1));
    cout << "geometry series of number "<< n << " is " << hasil<< endl;
    cout << "Median equal to " <<m <<endl;
    cout << "sum is equal to "  << sn << endl;
    cout << "Average is " << sn/n << endl;

    return 0;

}