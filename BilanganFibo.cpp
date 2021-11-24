#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, f_n, f_n1, f_n2;

    cout << "ini Deret Fibonacci\n";
    cout << "Masukkan nilai n : "; cin >> n;
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n2 << " ";
    cout << f_n1 << " ";

        for (int i = 1; i < n; i++)
        {
            f_n = f_n1 + f_n2;
            f_n2 = f_n1;
            f_n1 = f_n;
            cout << f_n << " ";
        }
    getch();
    return 0;
}