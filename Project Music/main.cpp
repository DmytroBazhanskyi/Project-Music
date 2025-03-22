#include "track.h"
#include <iostream>

int main() {

    Track track1("MamaRika", "LastDay", 2023, 210);  // “ривал≥сть 3 хвилини 30 секунд
    Track track2("SystemOfADown", "Aerials", 2001, 236);   // “ривал≥сть 3 хвилини

    track1.print();
    track2.print();

    if (track1 == track2) {
        std::cout << "Track has same relese date.\n";
    }
    else {
        std::cout << "Track has diferent relese date.\n";
    }

    track1 = track1 + 30;  // «б≥льшуЇмо тривал≥сть на 30 секунд
    track1.print();

    return 0;
}