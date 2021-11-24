#include <iostream>
#include <windows.h>

using namespace std;

void displaytime(int hours, int minute, int second) {
    cout    << hours << ":" 
            << minute << ":"
            <<second << endl;
}

int main() {
    int hour = 0;
    int min = 0;
    int sec = 0;

    while(true) {
        Sleep(1);

        sec++;

        if(sec > 59) {
            min++;
            sec = 0;
        }
        if(min > 59) {
            hour++;
            sec = 0;
            min = 0;
        }

        displaytime(hour, min, sec);
    }
}