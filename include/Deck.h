#pragma once
#include "Hand.h"
#include <time.h>       // time for srand
#include <iostream>     // cout

const static std::string c_CardSuits[] = { "Clubs",
                                           "Diamonds",
                                           "Hearts",
                                           "Spades"
                                          };
const static std::string c_CardNames[] = { "Ace",
                                           "Two",
                                           "Three",
                                           "Four",
                                           "Five",
                                           "Six",
                                           "Seven",
                                           "Eight",
                                           "Nine",
                                           "Ten",
                                           "Jack",
                                           "Queen",
                                           "King"
                                         };

class Deck {
public:
    Deck();

    // Randomly shuffle deck order
    void shuffleDeck();

    // Deal a card from the deck to a hand (maybe change this to return string)
    void deal(Hand& someonesHand);

    // Shuffle deck and reset index
    void reset();
private:
    // Swap two cards
    void swap(Card& a, Card& b);

    Card    m_Cards[c_DeckSize];
    int     m_CardsIndex;
};

inline void Deck::swap(Card& a, Card& b)
{
    Card temp = a;
    a = b;
    b = temp;
}