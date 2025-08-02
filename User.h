#ifndef USER_H
#define USER_H
#include <iostream>
#include "Playlist.h"


class User {
private:
    string username;
    Playlist playlist;

public:
    //Constructor
    User(const string& username, const string& playlistName);

    // Add media to playlist, this is in the user class as it is the user that adds media not the playlist itself
    void addToPlaylist(Media* media);

    void playPlaylist() const;
};

#endif
