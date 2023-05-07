#pragma once
#include "Game.h"

class Menu {
public:
    Menu() {
        this->currentGame = Game();
    }
    void StartGame();
    void MakeSelection();
    void DetermineWinner();
    void EndGame();
    int RetPlayerValue();
    int RetDealerValue();
    int RetChoice();
private:
    Game currentGame;
    std::string menuString =
        "\n***********************************\n"
        "1) New Hand\n" //deletes old game, creates new game
        "2) Hit Me\n" //deals card to player
        "3) Stand\n" //dealer draws until dealer value >=17
        "4) Hint\n" //prints hint based on dealer and player value
        "5) Exit\n" //terminates program
        "***********************************\n"
        "Your Choice? > ";
    int choice = 0;
    int playerValue = 0;
    int dealerValue = 0;
};