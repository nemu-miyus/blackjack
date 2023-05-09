#include "../include/Card.h"

Card::Card()
{
    m_Name = "";
    m_Suit = "";
    m_Value = 0;
}

Card::Card(const std::string &name, const std::string &suit, const int &value)
{
    m_Name = name;
    m_Suit = suit;
    m_Value = value;
}