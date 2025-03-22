#include "track.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Playlist {
private:
    std::vector<Track> tracks;

public:
    void addTrack(const Track& track);  // Додати трек вручну
    void addTrackFromFile(const std::string& filename);  // Додати треки з файлу
    void printPlaylist() const;  // Вивести плейлист
    int getTotalDurationByGenre(const std::string& genre) const;  // Підрахувати загальну тривалість для жанру

