#pragma once
#include <string>

class Card {
public:
    Card() {}
    Card(std::string name, std::string suit, int value) {
        this->name = name;
        this->suit = suit;
        this->value = value;
    }
    std::string GetCardName();
    std::string GetSuit();
    int GetCardValue();
private:
    std::string name = "Name";
    std::string suit = "Suit";
    int value = 0;
};