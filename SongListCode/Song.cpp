/**
    Song.cpp
    Purpose: Class to represent a song by containing its song title and the artist of the song

    Author Maya Bishop
    Version 1.0  - 01/14/2020
*/

#include "Song.h"

/*
 Initalizes current Song object as empty
 */
Song::Song(){
    name = "";
    artist = "";
}

/*
 Sets the current Song's  name member to the passed in parameter
 
 param:
 newName: string - new name of song
 */
void Song::setName(string newName){
    name = newName;
}

/*
 Allows access to value of name member
 Returns:
 string - name
 */
string Song::getName(){
    return name;
}

/*
Sets the current Song's  artist member to the passed in parameter

param:
newArtist: string - new name of artist
*/
void Song::setArtist(string newArtist){
    artist = newArtist;
}

/*
Allows access to value of artist member
Returns:
string - artist
*/
string Song::getArtist(){
    return artist;
}

