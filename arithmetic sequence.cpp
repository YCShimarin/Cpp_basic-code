#include <iostream>

using namespace std;

int main()
{
float n1, n2, n, beda, hasil, sn;
float a;


cout << "--- arithmetic sequence ---\n";
cout << "Enter series number to n = "; cin >> n;
cout << "Enter first value =  "; cin >> n1;
cout << "Enter second Value = "; cin >> n2;



for (int i=1;i<=n ; i++ )
{
        beda = n2-n1;
        hasil = n1 + (i-1)*beda;
        cout << hasil << " " ;
}
 a = (n1 + hasil)/2;
 sn = (n/2)*(2*n1+(n-1)*beda);
 cout << endl;
 cout << "Median equal to  "<<  a << endl; 
 cout << "arithmetic sequence of number " << n << " is "<< hasil<< endl;
 cout << "sum is equal to "<<n<< " adalah = "<< sn<< endl;
 cout << "Average is "<< sn/n<< endl;
    return 0;
}