#include "Music.h"
#include "Podcast.h"
#include "User.h"
#include <iostream>

int main() {
    
    User user("Drake", "Coding Mix");

    // Add different media types to the playlist
    user.addToPlaylist(new Music("Formula Structure of You", 3.2, "Tokenainamae"));
    user.addToPlaylist(new Podcast("WarHammer Lore", 60.3, "John Warhammer", 12));
    user.addToPlaylist(new Music("Sleeptight", 2.2, "Yuragi"));

   
    user.playPlaylist();

    return 0;
}
