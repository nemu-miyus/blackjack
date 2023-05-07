#pragma once
#include <iostream>     // cout
#include <fstream>      // ifstream
#include "Hand.h"

class Hint {
public:
    Hint() {
        std::ifstream inputfile("blackJack-play-suggestion.txt");

        if (!inputfile.is_open()) {
            std::cout << "Error opening file";
        }

        for (int r = 0; r < TABLE_ROW; r++) {
            for (int c = 0; c < TABLE_COLUMN; c++) {
                inputfile >> hintTable[r][c];
            }
        }

        inputfile.close();
    }
    void PrintSuggestion(Hand playerHand, Hand dealerHand);
private:
    static const int TABLE_ROW = 11;
    static const int TABLE_COLUMN = 10;
    char hintTable[TABLE_ROW][TABLE_COLUMN];
};