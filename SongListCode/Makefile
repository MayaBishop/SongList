
all: songlistdriver

songlistdriver: SongListDriver.cpp Songlist.h Songlist.cpp Song.h Song.cpp
	g++ -std=c++11 -o songlistdriver SongListDriver.cpp Songlist.cpp Song.cpp

clean:
	rm *.o songlistdriver
