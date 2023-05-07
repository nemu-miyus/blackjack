#pragma once
#include "Hand.h"

class Deck {
public:
    Deck() {
        std::string cardSuit[] = { "Clubs" , "Diamonds" , "Hearts" , "Spades" };
        std::string cardName[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

        int index = 0;
        for (std::string suit : cardSuit)
        {
            int value = 1;
            for (std::string name : cardName)
            {
                if (value >= 10) {
                    value = 10;
                }
                deckList[index] = Card(name, suit, value);
                value++;
                index++;
            }
        }

        ShuffleDeck();
    }
    void ShuffleDeck();
    void IncreaseDeckIndex();
    void Deal(Hand& someonesHand);
private:
    Card deckList[DECK_SIZE];
    void swap(Card& a, Card& b);
    int deckIndex = 0;
};