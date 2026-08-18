#include <iostream>
using namespace std;

class Song {
private:
    string name, artist;
    int duration;

public:
    Song(string n, string a, int d) {
        name = n;
        artist = a;
        duration = d;
    }

    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2) {
    if (s1.duration > s2.duration)
        cout << s1.name << " is longer";
    else if (s2.duration > s1.duration)
        cout << s2.name << " is longer";
    else
        cout << "Both songs have same duration";
}

int main() {
    Song s1("Song A", "Artist A", 240);
    Song s2("Song B", "Artist B", 180);

    compareSongs(s1, s2);

    return 0;
}