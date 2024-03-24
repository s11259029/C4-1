
/*
 Programmer:§õ¦w¥H
 ¢Òate:3/21
 Instructor:Chow-Sing Lin
 Class:Program Design
 converts the speed into mph
 */
#include <iostream>
using namespace std;
double convertToMPH(int min, int sec);
double convertToMPH(double kph);
#define mile 1.61
int main(void) {
    //ask for the unit
    char speed;
    cout << "Pace or kph (P/K) : " << endl;
    cin >> speed;
    if (speed == 'P') {
        int min, sec;
        double mph;
        //input
        cout << "Enter the minutes and seconds : " << endl;
        cin >> min >> sec;
        //convert
        mph = convertToMPH(min, sec);
        //output
        cout << mph << " miles per hour" << endl;
    }
    else {
        double kph;
        double mph;
        //input
        cout << "Enter the kilometers per hour : " << endl;
        cin >> kph;
        //convert
        mph = convertToMPH(kph);
        //output
        cout << mph << " miles per hour" << endl;
    }

    return 0;
}
double convertToMPH(int min, int sec) {
    double hour;
    double speed;
    //let minutes and seconds transfer into hour
    hour = (min + sec / 60.0) / 60.0;
    //calculate the speed
    speed = 1 / hour;
    return speed;
}
double convertToMPH(double kph) {
    double miles;
    //calculate the mph
    miles = kph / mile;
    return miles;
}

