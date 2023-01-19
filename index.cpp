#include <iostream>

using namespace std; 

int main(){

    string alphabets = "abcdefghijklmnopqrstuvwxyz";

    const char *p = alphabets.c_str();

    int i = p[0];

    for (int i; i <= 27; i++){
        cout << p[i] << endl;
    }


    //  cout << p[1] << endl;






    return 0;
}

// Exercise 1.
// 
// Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz".
// All of the characters from the alphabet should be stored in a 27 element array of chars and
// printing out of each of those elements should be done with the use of the for loop.