#include "Playlist.h"
#include <iostream>

// Constructor
Playlist::Playlist(const string& name) : name(name) {}

// Add media to playlist
void Playlist::addMedia(Media* media) {
    mediaList.push_back(media);
}


void Playlist::playAll() const {
    cout << "Playlist: " << name << endl;
    for (const auto& media : mediaList) {
        media->play();
    }
}

// Destructor
Playlist::~Playlist() {
    for (auto media : mediaList) {
        delete media;
    }
}
