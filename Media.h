#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

// Base class representing general media content
class Media {
protected:
    string title;      // Title of the media
    double duration;   // Duration in minutes

public:
    // Constructor to initialize common media attributes
    Media(const string& title, double duration);

    // Pure virtual function to play the media (polymorphic)
    virtual void play() const = 0;

    // Pure virtual function to get the type of media
    virtual string getType() const = 0;

    // Virtual destructor for proper cleanup of derived classes
    virtual ~Media() {}
};

#endif

