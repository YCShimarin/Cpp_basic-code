#include <iostream>
using namespace std;

int main()
{
    int a;
    string b;
        //untuk pencabangan y banyak
    cout << "what is your name..? \n"; getline(cin,b);
    cout << "what is your math score..? \n";
    cin >> a;
        if (a>100){
            cout << "Are you kidding me.?, Your math score is zero" << b << endl;
        }

        else if (a >= 50){
            cout << "Congrat, " << b << " .Your Pass\n";
        }
        else if (a<50){
            cout << "Ready to Remedial " << b << "..?\n ";
        }
        
        
       
        
    cout << "Thanks..";
}   