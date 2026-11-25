#pragma once
#include <string>
#include <vector>
#include "playingcard.h"

class DeckOfCards
{
private:
    std::vector<PlayingCard> drawPile;
    std::vector<PlayingCard> discardPile;
    std::vector<PlayingCard> inPlay;
public:
    DeckOfCards(bool jokers = false);
    std::string stringify() const;
    std::vector<PlayingCard> getDrawPile() const;
    std::vector<PlayingCard> getDiscardPile() const;
    std::vector<PlayingCard> getInPlay() const;
    //Puts all but top of discard into the drawPile and shuffles it
    void reshuffleDiscard();
    // Returns the top card of discard pile but does not remove it from
    // the discard pile.
    PlayingCard getTopDiscard() const;
    // Returns a the top card from discard and moves it internally to inPlay
    PlayingCard takeTopDiscard() const;
    void shuffle();
    PlayingCard deal();
};
