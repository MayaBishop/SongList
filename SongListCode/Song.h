/**
    Song.h
    Purpose: Class to represent a song by containing its song title and the artist of the song

    Author Maya Bishop
    Version 1.0  - 01/14/2020
*/

#ifndef Song_h
#define Song_h

#include <stdio.h>
#include <string>
using namespace std;

class Song;

class Song{
    //class variables
    private:
        string name;
        string artist;
    
    //class functions
    public:
        //constructor
        Song();
        //get and set functions for each variable
        void setName(string newName);
        string getName();
        void setArtist(string newArtist);
        string getArtist();
};
#endif /* Song_h */
