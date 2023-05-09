#include "../include/Hint.h"

Hint::Hint()
{
    // Read from file
    std::ifstream inputfile("blackJack-play-suggestion.txt");

    if (!inputfile.is_open()) {
        std::cout << "Error opening file";
    }

    for (int r = 0; r < c_TableRow; r++) {
        for (int c = 0; c < c_TableColumn; c++) {
            inputfile >> hintTable[r][c];
        }
    }

    inputfile.close();
}

std::string Hint::printSuggestion(Hand playerHand, Hand dealerHand) {
    int playerHandValue = playerHand.calculateValue();
    int dealerHandValue = dealerHand.calculateValue();
    char tableChar;

    // Account for ace
    if (dealerHandValue == 1) {
        dealerHandValue = 11;
    }

    // Account 
    if (playerHandValue < 7) {
        playerHandValue = 7;
    }
    else if (playerHandValue > 17) {
        playerHandValue = 17;
    }

    tableChar = hintTable[playerHandValue - 7][dealerHandValue - 2];

    switch (tableChar) {
    case 'H':
    case 'D':
    case 'h':
        return "Suggestion: [Hit]\n";
        break;
    case 'S':
        return "Suggestion: [Stand]\n";
        break;
    }
}