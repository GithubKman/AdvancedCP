#include <iostream>
#include <vector>
#include "playingcard.h"


int main()
{
	using enum CardRank;
	using enum CardSuit;
	using enum CardDirection;
	std::vector<PlayingCard> cards {{Ten,Diamonds,Up}, {Three,Clubs,Down}, {King,Hearts,Up}};
	PlayingCard::printRow(cards);
	std::cout << ((cards.at(0) > cards.at(1)) ? "Card is greater than card2" : "Card is less than card2") << "\n";
	return 0;
}
