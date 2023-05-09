#include "../include/Game.h"

Game::Game()
{
    m_Deck = Deck();
    m_DealerHand = Hand("Dealer");
    m_PlayerHand = Hand("You");
}

void Game::hitMe()
{
    m_Deck.deal(m_PlayerHand);
    printHandValues();
}

void Game::stand()
{
    while (m_DealerHand.calculateValue() <= 17) {
        m_Deck.deal(m_DealerHand);
    }
    printHandValues();
}

void Game::giveHint() const
{
    //Hint().PrintSuggestion(m_PlayerHand, m_DealerHand);
}

void Game::newSession()
{
    std::cout << "Starting new game...\n";

    // Reset all hands and deck
    m_PlayerHand.reset();
    m_DealerHand.reset();
    m_Deck.reset();

    // Do beginning deals
    m_Deck.deal(m_DealerHand);
    m_Deck.deal(m_PlayerHand);
    m_Deck.deal(m_PlayerHand);
    printHandValues();
}

int Game::getDealerHandValue() const
{
    return m_DealerHand.calculateValue();
}

int Game::getPlayerHandValue() const
{
    return m_PlayerHand.calculateValue();
}

void Game::printHandValues() const
{
    std::cout
        << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
        << "Dealer Value: " << getDealerHandValue() << "\n"
        << "Player Value: " << getPlayerHandValue() << "\n"
        << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
}