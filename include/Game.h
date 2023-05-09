#pragma once
#include "Deck.h"

class Game {
public:
    Game();

    // Deal a card to the player hand
    void hitMe();

    // Deal cards to dealer hand until blackjack or bust
    void stand();

    // Give a hint based on current hands
    void giveHint() const;

    // Resets hands and deck
    void newSession();

    int  getDealerHandValue() const;
    int  getPlayerHandValue() const;
    void printHandValues() const;
private:
    Deck    m_Deck;
    Hand    m_DealerHand;
    Hand    m_PlayerHand;
};