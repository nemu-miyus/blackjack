#pragma once
#include <iostream>     // cout
#include <fstream>      // ifstream
#include "Hand.h"

class Hint {
public:
    Hint();

    // Return a suggestion for the player based on hands
    std::string printSuggestion(Hand playerHand, Hand dealerHand);
private:
    static const int c_TableRow = 11;
    static const int c_TableColumn = 10;
    char hintTable[c_TableRow][c_TableColumn];
};