#include"song.h"
#include<iostream>
#include<sstream>


Song::Song() : song_author(" "), song_name(" "), song_years(0)
{}
Song::Song(std::string author, std::string name, int years)
	: song_author(author), song_name(name), song_years(years)
{}

Song::Song(Song& S)
	: song_author(S.song_author), song_name(S.song_name), song_years(S.song_years)
{}


void Song::print() const {
	std::cout << song_author << ".  " << '"' << song_name << '"' << "  (" << song_years << ")\n";
}
bool Song::operator==(const Song& other) const {
	return this->song_years == other.song_years;
}
int Song::wordsInTitle() const {
	std::istringstream stream(song_name);
	std::string words;
	int count = 0;
	while (stream >> words) {
		count++;
	}
	return count;
}