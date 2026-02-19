#include <iostream>
using namespace std;

class Player{
	string name;
	static int totalPlayers;
	
	public:
		Player(string name){
			this->name = name;
			totalPlayers++;
			cout << "A player connected the game\n" << endl;
		}
		
		~Player(){
			cout << name << " has left the game\n" << endl;
			totalPlayers--;
		}
		
		static void displayPlayers(){
			cout << "Total number of players = " << totalPlayers << "\n\n";
		}
};

int Player::totalPlayers = 0;

int main(){
	
	cout << "Before game\n";
    Player::displayPlayers();
{
    Player p1("Ali");
    Player p2("Sara");

    cout << "\nAfter Players joined\n";
    Player::displayPlayers();

}    cout << "\nAfter Game ended\n";
    Player::displayPlayers();
}
