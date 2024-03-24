/*
 Programmer:§õ¦w¥H
 ¢Òate:3/21
 Instructor:Chow-Sing Lin
 Class:Program Design
 converts the time from 24-hour notation to 12-hour notation
 */
#include <iostream>
using namespace std;
int input(void);
char conversion(int hour, int minute);
void output(int hour, int minute, char AP);
int main(void) {
    while (true) {
        int hour, minute;
        char AP;        //am or pm
        //use input function to input
        cout << "Enter the time of hour and minute by 24-hour notation : " << endl;
        hour = input();
        minute = input();
        //use convert function to convert
        AP = conversion(hour, minute);
        //use output function to output
        output(hour, minute, AP);
        //do it again or not
        char next;
        cout << "Again? (Y/N) : " << endl;
        cin >> next;
        //stop the program
        if (next == 'N') {
            break;
        }
    }

    return 0;
}
int input(void) {
    //input
    int input;
    cin >> input;
    return input;
}
char conversion(int hour, int minute) {
    char AP;
    //distinguish am or pm
    if (hour < 12) {
        AP = 'A';
    }
    else {
        AP = 'P';
    }
    return AP;
}
void output(int hour, int minute, char AP) {
    //output
    if (AP == 'A') {
        cout << "Time in 12-notation is : " << hour << ":" << minute << " A.M." << endl;
    }
    else {
        hour = hour - 12;
        cout << "Time in 12-notation is : " << hour << ":" << minute << "P.M." << endl;
    }

}
