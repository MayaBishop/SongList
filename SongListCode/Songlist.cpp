/**
    Songlist.cpp
    Purpose: Class to represent a playlist containing a set number of songs
    Provides the ability to add, play and remove a song as well as set it's size

    Author Maya Bishop
    Version 1.0  - 01/14/2020
*/

#include "Songlist.h"

/*
 intializes current Songlist object to default size 1 not filled
 */
Songlist::Songlist(){
    totalSize = 1;
    filled = 0;
    list = new Song [totalSize];
}

/*
 Deletes all elements of the Song array
 */
Songlist::~Songlist(){
    delete [] list;
    list = nullptr;
}

/*
 Adds a song at the end of the play list if song is not already in the list and the list is not full
 
 Parms:
 name: string - name for song
 artist: string - artist name for song
 Returns:
  "success" if it was successful or "can not insert name;artist" if it failed
 */
string Songlist::addSong(string name, string artist){
    if (totalSize <= filled){
        return "can not insert "+name+";"+artist;
    }
    if (artist == "" || name == "" || artist == " " || name == " "){
        return "can not insert "+name+";"+artist;
    }
    if(inSonglist(name,artist)){
        return "can not insert "+name+";"+artist;
    }
    list[filled].setName(name);
    list[filled].setArtist(artist);
    filled++;
    return "success";
}


/*
Plays song at position unless postition is past the filled length of the array

Parms:
position: int - position of the the song you want to play
Returns:
 "played n s;a" if it was successful or "can not play n" if it failed
*/
string Songlist::playSong(const int& postition){
    if (filled < postition){
        return "can not play "+to_string(postition);
    }
    return "played "+to_string(postition)+" "+list[postition-1].getName()+";"+list[postition-1].getArtist();
}

/*
Removes song at position unless postition is past the filled length of the array

Parms:
position: int - position of the the song you want to play
Returns:
 "success" if it was successful or "can not erase n" if it failed
*/
string Songlist::removeSong(const int& postition){
    if (filled < postition){
        return "can not erase "+to_string(postition);
    }
    for(int i=postition-1; i+1<filled;i++){
        list[i] = list[i+1];
    }
    if(list[filled-1].getName()!=""){
        list[filled-1] = Song();
    }
    filled--;
    return "success";
}

/*
 Linear search to check if the exact same song is in the playlist as the input
 
 Parms:
 name: string - name for song
 artist: string - artist name for song
 Returns:
 true or false whether the song is in the list or not
 */
bool Songlist::inSonglist(const string& name, const string& artist){
    for(int i=0; i<filled;i++){
        if(list[i].getName()==name && list[i].getArtist()==artist){
            return true;
        }
    }
    return false;
}

/*
 Creates Song array of the passed in length
 
 Parms:
 length: int - length of array
 Returns:
 success
 */
string Songlist::createList(const int& length){
    totalSize = length;
    delete[] list;
    list = new Song [totalSize];
    for(int i = 0; i < totalSize; i++){
        list[i] = Song();
    }
    filled = 0;
    return "success";
}
