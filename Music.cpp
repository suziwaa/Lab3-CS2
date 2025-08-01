#include "Music.h"
#include <iostream>

// Initializes music members and base media class
Music::Music(const string& title, double duration, const string& artist)
    : Media(title, duration), artist(artist) {}

// Play method prints music info since we can't actually play the music
void Music::play() const {
    cout << "Playing song: " << title << " by " << artist
        << " (" << duration << " min)" << endl;
}

string Music::getType() const {
    return "Music";
}
