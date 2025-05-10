#include "track.h"
#include "playlist.h"
#include <iostream>
/*
Завдання:
Розробити програму для моделювання музичного плейлиста з можливістю:
- створення треків (назва, автор, рік, тривалість, жанр);
- додавання треків до плейлиста вручну або з текстового файлу;
- підрахунку загальної тривалості за заданим жанром;
- виводу всієї інформації про треки у плейлисті.

Структура:
- Клас Song: базовий клас, зберігає назву, автора, рік.
- Клас Track: наслідує Song, додає тривалість та жанр.
- Клас Playlist: зберігає список треків, методи додавання, фільтрації та виводу.
*/ 
//опис програми додала Микитенко Ярослава
//(і надалі всі помилки буду виправляти я 
//оскільки інші учасники такі як Бажанський Дмитро та Курило Валерія були відчислені)
int main() {
    Track track1("MamaRika", "LastDay", 2023, 210, "Pop");  // Тривалість 3 хвилини 30 секунд
    Track track2("SystemOfADown", "Aerials", 2001, 236, "Rock");   // Тривалість 3 хвилини

    // Створення плейлиста
    Playlist playlist;
    playlist.addTrack(track1);
    playlist.addTrack(track2);

    // Виведення плейлиста
    playlist.printPlaylist();

    // Перевірка загальної тривалості для певного жанру
    std::string genre = "Pop";
    int totalDuration = playlist.getTotalDurationByGenre(genre);
    std::cout << "Total duration for " << genre << " genre: " << totalDuration / 60 << " minutes and " << totalDuration % 60 << " seconds.\n";

    // Додавання треку з файлу
    playlist.addTrackFromFile("Text.txt");  // Формат файлу: author name year duration genre

    // Виведення оновленого плейлиста
    playlist.printPlaylist();

    return 0;
}
