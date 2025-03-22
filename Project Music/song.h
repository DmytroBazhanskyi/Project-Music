#include <string>

class Song
{
private:
    std::string song_name;
    std::string song_author;
    int song_years;

public:
    Song();
    Song(std::string author, std::string name, int years);
    Song(const Song& S);

    void print() const;
    bool operator==(const Song& other) const;
    int wordsInTitle() const;
};


