#include "../include/Hand.h"

Hand::Hand()
{
    m_NumCards = 0;
    m_Name = "";
    m_Value = 0;
}

Hand::Hand(const std::string &name) {
    m_Name = name;
}

int Hand::calculateValue() const
{
    int totalValue = 0;
    for (int i = 0; i < c_DeckSize; ++i) {
        totalValue += m_Cards[i].getValue();
    }

    return totalValue;
}

void Hand::reset()
{
    Card blankCard = Card();

    for (int i = 0; i < m_NumCards; ++i) {
        m_Cards[i] = blankCard;
    }

    m_NumCards = 0;
}