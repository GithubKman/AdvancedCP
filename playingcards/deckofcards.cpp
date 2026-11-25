#include "deckofcards.h"
#include "playingcard.h"
#include <cstdint>

DeckOfCards::DeckOfCards(bool jokers)
{
    if (jokers)
    {
        drawPile.reserve(JOKERDECKSIZE);
    } else
    {
        drawPile.reserve(DECKSIZE);
    }
    for (uint8_t suit = 0; suit < 4; suit++)
    {
        for (uint8_t rank = 1; rank <= to_int(CardRank::King); rank++)
        {
            drawPile.emplace_back(PlayingCard{to_rank(rank), to_suit(suit), CardDirection::Down});
        }
    }
    if (jokers)
    {
        drawPile.emplace_back(PlayingCard{CardRank::Joker0, CardSuit::Clubs, CardDirection::Down});
        drawPile.emplace_back(PlayingCard{CardRank::Joker0, CardSuit::Diamonds, CardDirection::Down});
    }
}

std::string DeckOfCards::stringify() const
{
    std::string strOut = "To Draw:\n";
    for (int i = 0; i < drawPile.size(); ++i)
    {
        strOut += (drawPile.at(i).stringify());
    }
    strOut += "\nDealt:\n";
    for (int i = 0; i < inPlay.size(); ++i)
    {
        strOut += (inPlay.at(i).stringify() + "\n");
    }
    strOut += "\nDiscard:\n";
    for (int i = 0; i < discardPile.size(); ++i)
    {
        strOut += (discardPile.at(i).stringify() + "\n");
    }
    return strOut;
}

std::vector<PlayingCard> DeckOfCards::getDrawPile() const
{
    return drawPile;
}
std::vector<PlayingCard> DeckOfCards::getDiscardPile() const
{
    return discardPile;
}
std::vector<PlayingCard> DeckOfCards::getInPlay() const
{
    return inPlay;
}

