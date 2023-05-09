#include <stdlib.h>
#include "include/Menu.h"

int main()
{
    Menu playMenu;
    std::cout << "Let's play BlackJack!";

    while (true) {
        playMenu.StartGame();
        int playerValue = 0;
        int dealerValue = 0;
        int choice = 0;

        while (playerValue < 21 && dealerValue < 21 && choice != 3) {
            playMenu.MakeSelection();
            playerValue = playMenu.RetPlayerValue();
            dealerValue = playMenu.RetDealerValue();
            choice = playMenu.RetChoice();
        }

        playMenu.DetermineWinner();
        std::cout << "Play again?\n";
    }

    return 0;
}