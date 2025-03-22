#include "playlist.h"

void Playlist::addTrack(const Track& track) {
    tracks.push_back(track);
}

void Playlist::addTrackFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string author, name, genre;
    int year, duration;

    if (file.is_open()) {
        while (file >> author >> name >> year >> duration >> genre) {
            Track track(author, name, year, duration, genre);
            addTrack(track);
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file!" << std::endl;
    }
}

void Playlist::printPlaylist() const {
    for (const auto& track : tracks) {
        track.print();
    }
}

int Playlist::getTotalDurationByGenre(const std::string& genre) const {
    int totalDuration = 0;
    for (const auto& track : tracks) {
        if (track.getGenre() == genre) {
            totalDuration += track.getDurationInSeconds();
        }
    }
    return totalDuration;
}
