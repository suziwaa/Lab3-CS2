#include "User.h"

// Constructor
User::User(const string& username, const string& playlistName)
    : username(username), playlist(playlistName) {}

// Add media to playlist
void User::addToPlaylist(Media* media) {
    playlist.addMedia(media);
}

// Play all media in playlist
void User::playPlaylist() const {
    playlist.playAll();
}
