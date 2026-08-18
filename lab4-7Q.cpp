#include <iostream>
using namespace std;

class Player {
private:
    string name;
    int health, score, level;

public:
    Player(string n, int h, int s, int l) {
        name = n;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager {
public:
    void display(Player p) {
        cout << "Name: " << p.name << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    void checkAlive(Player p) {
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Dead" << endl;
    }
};

int main() {
    Player p("Rudra", 80, 500, 5);

    GameManager g;

    g.display(p);
    g.checkAlive(p);

    return 0;
}