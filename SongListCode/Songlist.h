/**
    Songlist.h
    Purpose: Class to represent a playlist containing a set number of songs
    Provides the ability to add, play and remove a song as well as set it's size

    Author Maya Bishop
    Version 1.0  - 01/14/2020
*/

#ifndef Playlist_h
#define Playlist_h

#include <stdio.h>
using namespace std;
#include <string>
using namespace std;
#include "Song.h"
using namespace std;

class Songlist;

class Songlist{
    //class variables
    private:
        int totalSize;
        int filled;
        Song *list;
    
    //class functions
    public:
        /*constructor and deconstructor*/
        Songlist();
        ~Songlist();
        //int getFilled();
        
        /*add remove and play a song*/
        string addSong(string name, string artist);
        string playSong(const int& postition);
        string removeSong(const int& postition);
        
        /*sets size of playlist*/
        string createList(const int& length);
    
        /*checks if song is in playlist*/
        bool inSonglist(const string& name, const string& artist);
        
    
};
#endif /* Playlist_h */
