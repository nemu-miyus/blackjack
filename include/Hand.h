#pragma once
#include "Card.h"

const int DECK_SIZE = 52;

class Hand {
public:
    Hand() {}
    Hand(std::string handName) {
        this->handName = handName;
    }
    void AddToHand(Card newCard);
    int GetHandIndex();
    Card GetCard(int handIndex);
    std::string GetHandName();
    int CalculateHandValue();
    void IncreaseHandIndex();
    void ResetHand();
private:
    Card cardsInHand[DECK_SIZE];
    int handIndex = 0;
    std::string handName = "Hand Name";
    int handValue = 0;
};