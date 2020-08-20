#include <iostream>
#include "emoji.h"
#include <cmath>

struct player{
    unsigned int level = 1;
    int XP = 0;
    unsigned int HP = 50;
    unsigned int survival = 0;
    int counter = 1;

    void runGame(){
        srand(0);
        int from = 1;
        int to = 3;
        int range = to - from + 1;

        std::cout << "HP " << HP << emojicpp::emojize(":heartpulse:") << std::endl;
        std::cout << "Lvl " << level << emojicpp::emojize(":star2:") << std::endl;
        std::cout << "XP " << XP << emojicpp::emojize(":thinking_face:") << std::endl;

        while(HP != 0){
            int input;
            int guess = rand()%range + from;

            std::cout << "Enter a number between 1 and 3\n";
            std::cin >> input;

            if(input == guess){
                std::cout << "Correct guess!\n";
                survival+=1;
                counter++;

                XP+=5;

                if (counter > 1){
                    XP*=counter;
                }

                else {
                    counter = 1;
                }

                if(XP >= 5 + level*level){
                    XP = XP-5-level*level;
                    level+=1;
                }
                std::cout << "HP " << HP << emojicpp::emojize(":heartpulse:") << std::endl;
                std::cout << "Lvl " << level << emojicpp::emojize(":star2:") << std::endl;
                std::cout << "XP (" << XP << "/" << 5 + level*level << ")" << emojicpp::emojize(":thinking_face:") << std::endl;
                std::cout << "Counter of guesses in a row " << counter << emojicpp::emojize(":boar:") << std::endl;
            }
            else{
                std::cout << "Incorrect guess!\n";
                survival+=1;
                HP-=abs(guess-input);
                std::cout << "HP " << HP << emojicpp::emojize(":heartpulse:") << std::endl;
                std::cout << "Lvl " << level << emojicpp::emojize(":star2:") << std::endl;
                std::cout << "XP (" << XP << "/" << 5 + level*level << ")" << emojicpp::emojize(":thinking_face:") << std::endl;
                std::cout << "Counter of guesses in a row " << counter << emojicpp::emojize(":boar:") << std::endl;
            }
        }
        std::cout << "Game has ended, you died, bye bye\n" << emojicpp::emojize("Players heart :broken_heart:") << std::endl;
        std::cout << "You survived " << survival << " times. Better luck next time" << std::endl;
    }
};

int main() {
    player Yoshimitsu;
    Yoshimitsu.runGame();
}