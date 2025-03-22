#pragma once
#include "song.h"
#include <string>

class Track : public Song
{
private:
    int duration_seconds;

public:
    Track();
    Track(std::string author, std::string name, int years, int duration);
    Track(const Track& T);

    void print() const;  // Перевизначення методу для виведення
    int getDurationInSeconds() const;  // Метод для отримання тривалості в секундах
    Track operator+(int additionalSeconds);  // Перевантаження оператора "+"
};