#ifndef MUSIC_H
#define MUSIC_H

#include "Media.h"

// Derived class of media
class Music : public Media {
private:
    string artist;  // Artist name

public:
    // Constructor
    Music(const string& title, double duration, const string& artist);

    // Overrides play
    void play() const override;

    string getType() const override;
};

#endif
