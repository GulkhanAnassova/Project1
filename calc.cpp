/*
Author: Gulkhan Anassova
Course: CSCI 135
Instructor: Genady Mariyash
Assignment: Task B:A calculator program.

we want to make a simple calculator that can add anad subtract integers.
*/

#include <iostream>
#include <fstream>
using namespace std;


int main(){

    //fstream inFile;
    // inFile.open("numbers.txt"); // open infile;
    // variable declaration;
    int s = 0;
    int sum = 0;
    //fstream inFile;
    // if(!inFile.is_open()){
    //     cout << "cannot open file" << endl;
    // }
    
    while(cin >> s) { // While the reading operation is a success
        sum += s;  
    }

    cout << sum << endl;  // print the read word

    //inFile.close();// close infile;
    
    return 0;
}
