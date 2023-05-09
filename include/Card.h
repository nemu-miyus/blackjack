#pragma once
#include <string>

class Card {
  public:
      Card();
      Card(const std::string &name, const std::string &suit, const int &value);

      // Accessors
      std::string    getName() const;
      std::string    getSuit() const;
      int            getValue() const;
  private:
      std::string    m_Name;
      std::string    m_Suit;
      int            m_Value;
};

inline std::string Card::getName() const
{
    return m_Name;
}

inline std::string Card::getSuit() const
{
    return m_Suit;
}

inline int Card::getValue() const
{
    return m_Value;
}