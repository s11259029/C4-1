/*
 Programmer:§õ¦w¥H
 ¢Òate:3/23
 Instructor:Chow-Sing Lin
 Class:Program Design
 simulate the authentication process of enter the password
 */
#include <iostream>
using namespace std;
int num_ran(void);
int main(void) {
    //set the actual pin number
    int PIN[5] = { 1,2,3,4,5 };
    int num[10];
    int input[5];
    int index = 0;
    //make the random number
    for (int i = 0; i < 10; i++) {
        num[i] = num_ran();
    }
    //output the table of the numbers
    cout << "PIN : 0 1 2 3 4 5 6 7 8 9\nNUM : ";
    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }
    //let user to input the password
    cout << "\nEnter the password (each number seperate with the space) : " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> input[i];
        //compare it with the table to check if it is correct
        if (input[i] == num[PIN[i]]) {
            index++;
        }
    }
    //output
    if (index == 5) {
        cout << "Password correct !" << endl;
    }
    else {
        cout << "Password worng !" << endl;
    }

    return 0;
}
int num_ran(void) {
    //choose the random number
    int random = rand() % 3 + 1;
    return random;
}
