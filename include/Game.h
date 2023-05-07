#pragma once
#include "Deck.h"

class Game {
public:
    Game() {
        this->sessionDeck = Deck();
        this->dealerHand = Hand("Dealer");
        this->playerHand = Hand("You");
    }
    void PrintHandValues();
    void HitMe();
    void Stand();
    void GiveHint();
    void NewSession();
    int DealerHandValue();
    int PlayerHandValue();
private:
    Deck sessionDeck;
    Hand dealerHand;
    Hand playerHand;
};