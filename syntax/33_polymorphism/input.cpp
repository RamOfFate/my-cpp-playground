#include <iostream>
using namespace std;

class Entity{
    public:
        void kill(string player_name){
            cout << player_name << " killed by entity" << endl;
        }
};

class Creeper: public Entity{
    public:
        void kill(string player_name){
            cout << player_name << " exploded by creeper" << endl;
        }
};

int main(){
    Creeper creeper;
    creeper.kill("RamOfFate");

    return 0;
}