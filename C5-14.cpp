/*
 Programmer:§õ¦w¥H
 ¢Òate:3/23
 Instructor:Chow-Sing Lin
 Class:Program Design
 predict the user's interest
 */
#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    //the reviews that already get
    int table[4][6] = {
        {3,1,5,2,1,5},
        {4,2,1,4,2,4},
        {3,1,2,4,4,1},
        {5,1,4,2,4,2} };
    int movie[3], rate[3];
    int distance[4];
    //input the user's review
    for (int i = 0; i < 3; i++) {
        cout << "Enter the movie you want to rate (100~105) : " << endl;
        cin >> movie[i];
        cout << "Enter the rate (1~5) : " << endl;
        cin >> rate[i];
    }
    //calculate every rate
    for (int i = 0; i < 4; i++) {
        distance[i] = sqrt(pow(rate[0] - table[i][movie[0] - 100], 2) + pow(rate[1] - table[i][movie[1] - 100], 2) +
            pow(rate[2] - table[i][movie[2] - 100], 2));
    }
    //compare them to find out which one is the most closely match
    int min = distance[0], index = 0;
    for (int i = 0; i < 4; i++) {
        if (distance[i] < min) {
            min = distance[i];
            index = i;
        }
    }
    //output
    for (int i = 100; i < 106; i++) {
        if (movie[0] != i && movie[1] != i && movie[2] != i) {
            cout << "Predict a rating of " << table[index][i - 100] << " for movie " << i << endl;
        }
    }

    return 0;
}


