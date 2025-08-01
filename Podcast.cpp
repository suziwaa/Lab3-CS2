#include "Podcast.h"
#include <iostream>

// Initialize Podcast members and base Media class
Podcast::Podcast(const string& title, double duration, const string& host, int episodeNumber)
    : Media(title, duration), host(host), episodeNumber(episodeNumber) {}

// Play prints info as we can't actually play a podcast
void Podcast::play() const {
    cout << "Playing podcast: Ep " << episodeNumber << " - " << title
        << " hosted by " << host << " (" << duration << " min)" << endl;
}


string Podcast::getType() const {
    return "Podcast";
}
