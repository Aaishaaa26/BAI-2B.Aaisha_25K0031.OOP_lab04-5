#include <iostream>
#include <string>
using namespace std;

class Weapon{
public:
    string weaponName;
    int damage;

    Weapon(string name,int dmg){
        this->weaponName = name;
        this->damage = dmg;
    }
};

class Player{
public:
    string playerName;
    int health;
    Weapon weapon; 

    static int activePlayers;

    Player(string pName,int hp,string wName,int dmg): weapon(wName,dmg){
        this->playerName = pName;
        this->health = hp;
        this->activePlayers++;
    }
    ~Player(){
        activePlayers--;
        cout<<playerName <<" has left "<< activePlayers <<" players remaining" << endl;
    }

    void showStatus() const{
        cout << "Player: " << playerName<<endl;
        cout <<"Health: "<< health <<endl;
        cout <<"Weapon: "<< weapon.weaponName <<" | Damage: "<< weapon.damage << endl << endl;
    }
};

int Player::activePlayers = 0;

int main(){
    cout << "Active Players : "<< Player::activePlayers <<endl;

    Player players[3] = {
        Player("Aaisha",100,"Peca",45),
        Player("Zainab",90,"Goblin",30),
        Player("Sumaima",80,"Barbarian",60)
    };

    cout <<"Active Players: "<< Player::activePlayers << endl <<endl;
    cout <<"Player Status" << endl;
    for (int i = 0; i < 3; i++){
        players[i].showStatus();
    }
}
