/*
 Programmer:§õ¦w¥H
 ¢Òate:3/22
 Instructor:Chow-Sing Lin
 Class:Program Design
 classify yhe score
 */
#include <iostream>
using namespace std;
int main(void) {
    //initial the grade array
    int grade[6] = { 0 };
    int input[100];
    //input the grade
    cout << "Enter your grade : " << endl;
    int i = 0;
    while (cin >> input[i]) {
        //check the grade is in the 0 to 5
        if (input[i] >= 0 && input[i] <= 5) {
            //classify
            grade[input[i]]++;
        }
        //check the next one
        i++;
        //stop the program
        if (getchar() == '\n') {
            break;
        }

    }
    //output
    for (int i = 0; i < 6; i++) {
        cout << grade[i] << "grade(s) of " << i << endl;
    }
    return 0;
}


