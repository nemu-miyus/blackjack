#pragma once
#include "Card.h"

const static int c_DeckSize = 52;

class Hand {
public:
    Hand();
    Hand(const std::string &name);

    // Add a card to hand
    void add(const Card &newCard);

    // Calculate the value of all the cards in hand
    int calculateValue() const;

    // Empty the hand
    void reset();

    // Returns the card at a certain index of the hand
    Card getCard(const int &index) const;

    // Accessors
    int            getIndex() const;
    std::string    getName() const;
private:
    // Cards in hand
    Card           m_Cards[c_DeckSize];
    int            m_NumCards;

    // Name of the owner of the hand
    std::string    m_Name;

    // Value of all cards in hand
    int            m_Value;
};

inline void Hand::add(const Card& newCard)
{
    m_Cards[m_NumCards] = newCard;
    ++m_NumCards;
}

inline Card Hand::getCard(const int& index) const
{
    return m_Cards[index];
}

inline int Hand::getIndex() const
{
    return m_NumCards;
}

inline std::string Hand::getName() const
{
    return m_Name;
}