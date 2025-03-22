#include "track.h"
#include <iostream>

int main() {

    Track track1("MamaRika", "LastDay", 2023, 210);  // ��������� 3 ������� 30 ������
    Track track2("SystemOfADown", "Aerials", 2001, 236);   // ��������� 3 �������

    track1.print();
    track2.print();

    if (track1 == track2) {
        std::cout << "Track has same relese date.\n";
    }
    else {
        std::cout << "Track has diferent relese date.\n";
    }

    track1 = track1 + 30;  // �������� ��������� �� 30 ������
    track1.print();

    return 0;
}