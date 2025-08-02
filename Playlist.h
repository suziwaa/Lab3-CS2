#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Media.h"
#include <vector>
using namespace std;


class Playlist {
private:
    string name;              
    vector<Media*> mediaList; 

public:
    // Constructor
    Playlist(const string& name);

    void addMedia(Media* media);

    void playAll() const;

    // Destructor
    ~Playlist();
};

#endif
