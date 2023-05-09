#include "../include/Deck.h"

Deck::Deck()
{
    // Create a standard card deck
    int index = 0;
    for (std::string suit : c_CardSuits)
    {
        int value = 1;
        for (std::string name : c_CardNames)
        {
            if (value >= 10) {
                value = 10;
            }
            m_Cards[index] = Card(name, suit, value);
            value++;
            index++;
        }
    }

    m_CardsIndex = 0;
    shuffleDeck();
}

void Deck::shuffleDeck()
{
    srand(time(NULL));

    for (int i = 0; i < c_DeckSize; ++i) {
        int j = rand() % c_DeckSize;
        swap(m_Cards[i], m_Cards[j]);
    }
}

void Deck::deal(Hand& someonesHand)
{
    Card cardFromDeck = m_Cards[m_CardsIndex];

    someonesHand.add(cardFromDeck);
    std::cout << someonesHand.getName()
        << " received the " << cardFromDeck.getName()
        << " of " << cardFromDeck.getSuit() << "\n";
    
    ++m_CardsIndex;
}

void Deck::reset()
{
    shuffleDeck();
    m_CardsIndex = 0;
}