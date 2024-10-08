// CS201R-PGM6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functions.h"
#include "Media.h"

using namespace std;

int main() {

    ifstream inList, inCommands;
    ofstream outFile, outErr;

    try {
        inList.exceptions(ifstream::failbit);
        inList.open("mediaList.txt");
        inCommands.exceptions(ifstream::failbit);
        inCommands.open("mediaCommands.txt");
        outFile.exceptions(ofstream::failbit);
        outFile.open("mediaReport.txt");
        outErr.exceptions(ofstream::failbit);
        outErr.open("mediaError.txt");
    }
    catch (ifstream::failure& fail) {
        cout << "Could not open input file" << endl;
        cout << fail.what() << endl;
        cout << fail.code() << endl;
        exit(1);
    }

    vector <Media*> myLib;

    // read data into myLib
    readMediaList(inList, outErr, myLib);
    inList.close();


    // prepare to read the commands
    string commandRecord, token;
    vector<string> tokens;

    getline(inCommands, commandRecord);
    char choice = commandRecord[0];

    while (choice != 'Q') {
        //you can parse input record into tokens here
        //OR
        //send commandRecord to another function to subdivide this work
        //this is an idea of how to handle this

        if (choice == 'M')
            cout << "Call a function to Print Movies..." << endl;

        //add logic for other possible entries!

        else if (choice == 'Q') {
            cout << "Thank You for Using Media Everywhere" << endl;
            break;
        }
        
        else {
            cout << "There is an error in the input command: " << commandRecord << "\n";
        }

        getline(inCommands, commandRecord);
        choice = commandRecord[0];
    }

    inCommands.close();
    outFile.close();
    outErr.close();
}