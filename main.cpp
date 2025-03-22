#include<iostream>
#include"song.h"
using namespace std;

int main() {

	Song song1("MamaRika", "Last Day", 2023);
	Song song2("Metallica", "One", 1988);
	Song song3("System of a down", "Forest", 2001);

	song1.print();
	song3.print();
	song2.print();

	cout << "Song 1 and 2 relese years are: " << endl;
	if (song1 == song2) {
		cout << "same." << endl;
	}
	else {
		cout << "diferent." << endl;

		cout << "Number of words in song name" << song1.wordsInTitle() << endl;
		cout << "Number of words in song name" << song3.wordsInTitle() << endl;
	}
}