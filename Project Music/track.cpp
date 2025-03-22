#include "track.h"
#include <iostream>
#include <sstream>

Track::Track() : Song("", "", 0), duration_seconds(0) {}

Track::Track(std::string author, std::string name, int years, int duration)
    : Song(author, name, years), duration_seconds(duration) {}

Track::Track(const Track& T)
    : Song(T), duration_seconds(T.duration_seconds) {}

// �������������� ������ print ��� Track
void Track::print() const {
    Song::print();
    int minutes = duration_seconds / 60;
    int seconds = duration_seconds % 60;
    std::cout << "  Duration: " << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << "\n";
}

// ����� ��� ��������� ��������� � ��������
int Track::getDurationInSeconds() const {
    return duration_seconds;
}

// �������������� ��������� "+" ��� ��������� ��������� �����
Track Track::operator+(int additionalSeconds) {
    Track newTrack(*this);
    newTrack.duration_seconds += additionalSeconds;
    return newTrack;
}
