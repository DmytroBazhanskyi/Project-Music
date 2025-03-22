#pragma once
#include "song.h"
#include <string>

class Track : public Song
{
private:
    int duration_seconds;  // Тривалість треку в секундах
    std::string genre;     // Жанр треку

public:
    Track(); 
    Track(std::string author, std::string name, int years, int duration, std::string genre);  
    Track(const Track& T); 

    void print() const;  // Перевизначення методу для виведення
    int getDurationInSeconds() const;  // Метод для отримання тривалості в секундах
    Track operator+(int additionalSeconds);  // Перевантаження оператора "+"
    std::string getGenre() const;  // Метод для отримання жанру
};
