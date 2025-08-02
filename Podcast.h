#ifndef PODCAST_H
#define PODCAST_H

#include "Media.h"

// Derived class of media
class Podcast : public Media {
private:
    string host;   // Podcast host's name
    int episodeNumber;   // Episode number

public:
    // Constructor
    Podcast(const string& title, double duration, const string& host, int episodeNumber);

    // Override play()
    void play() const override;

    string getType() const override;
};

#endif
