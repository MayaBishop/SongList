/**
    SongListDriver.cpp
    Purpose: Tester file for Songlist class
    Invokes Songlist methods, processes standard input and writes standard output

    Author Maya Bishop
    Version 1.0  - 01/14/2020
*/

#include <iostream>
using namespace std;
#include <string>
using namespace std;
#include "Songlist.h"

int main(int argc, const char * argv[]) {
    //delare variables
    string command;
    string parameters;
    string line;
    int divider;
    Songlist songlist;
    //loop through each line of the file and read the command until the end of the file
    while(!cin.eof()){
        //get the line from the file and find the divider
        getline(cin, line);
        divider = line.find(" ");
        command = line.substr(0,divider);
        parameters = line.substr(divider+1);
        
        //check what command has been entered and run the command related to it
        if(command=="m"){
            cout << songlist.createList(stoi(parameters)) << endl;
        }else if (command == "i"){
            int colon = parameters.find(";");
            cout << songlist.addSong(parameters.substr(0,colon), parameters.substr(colon+1)) << endl;
        }else if (command == "p"){
            cout << songlist.playSong(stoi(parameters)) << endl;
        }else if (command == "e"){
            cout << songlist.removeSong(stoi(parameters)) << endl;
        }
    }
    return 0;
}
