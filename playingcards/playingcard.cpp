#include "playingcard.h"
#include <format>
#include <ranges>

const std::string PlayingCard::BRAND = "Bicycle";

PlayingCard::PlayingCard()
{
    card = 0x00;
}

PlayingCard::PlayingCard(CardRank rank, CardSuit suit, CardDirection direction)
{
    card = static_cast<std::uint8_t>(rank) |
           static_cast<std::uint8_t>(suit) |
           static_cast<std::uint8_t>(direction);
}

CardRank PlayingCard::getRank() const
{
    return static_cast<CardRank>(card & rankMask);
}

CardSuit PlayingCard::getSuit() const
{
    return static_cast<CardSuit>(card & suitMask);
}
CardDirection PlayingCard::getDirection() const
{
    return static_cast<CardDirection>(card & directionMask);
}
void PlayingCard::setRank(CardRank rank)
{
    card &= ~rankMask;
    card |= static_cast<std::uint8_t>(rank);
}
void PlayingCard::setSuit(CardSuit suit)
{
    card &= ~suitMask;
    card |= static_cast<std::uint8_t>(suit);
}
void PlayingCard::setDirection(CardDirection direction)
{
    card &= ~directionMask;
    card |= static_cast<std::uint8_t>(direction);
}

bool PlayingCard::getRed() const
{
    return ((getSuit()) == CardSuit::Diamonds || 
            (getSuit()) == CardSuit::Hearts);
}

bool PlayingCard::getFace() const
{
    return ((getRank()) == CardRank::Jack ||
            (getRank()) == CardRank::Queen ||
            (getRank()) == CardRank::King);
}
bool PlayingCard::isUp() const
{
    return to_bool(getDirection());
}

std::string PlayingCard::stringify() const
{
    std::string cardString = std::string(to_string(getRank()));
    cardString += " of ";
    cardString += to_string(getSuit());
    cardString += ", ";
    cardString += to_string(getDirection());
    return cardString;
}
std::string PlayingCard::printCard() const
{
    if (!isUp())
    {
        return std::format(CARD_TEMPLATE, "  ", BRAND.front());
    } else
    return std::format(CARD_TEMPLATE, prettyString(getRank()), prettyString(getSuit()));
}
void PlayingCard::printRow(const std::vector<PlayingCard>& cards)
{
	// print row of cards
	std::vector<std::string> lines;

	for (auto card : cards)
	{
	    std::string cardString = card.printCard();
		size_t lineNumber = 0;
		for (const auto line_range : std::views::split(cardString, '\n'))
		{
	        std::string_view line(line_range.begin(), line_range.end());
			if (lines.size() < (lineNumber + 1))
			{
				lines.resize(lineNumber + 1);
			}
			lines.at(lineNumber) += line;
			++lineNumber;
            
		}
	}
	for (std::string_view line : lines)
	{
	    std::cout << line << '\n';
	}
}

std::string PlayingCard::getBrand()
{
    return BRAND;
}

// need to test of comparisons work
bool PlayingCard::operator<(const PlayingCard& rho) const
{
    return (getRank() < rho.getRank());
}
bool PlayingCard::operator<=(const PlayingCard& rho) const
{
    return (getRank() <= rho.getRank());
}
bool PlayingCard::operator>(const PlayingCard& rho) const
{
    return (getRank() > rho.getRank());
}
bool PlayingCard::operator>=(const PlayingCard& rho) const
{
    return (getRank() >= rho.getRank());
}
bool PlayingCard::operator==(const PlayingCard& rho) const
{
    return (getRank() == rho.getRank());
}
bool PlayingCard::operator!=(const PlayingCard& rho) const
{
    return (getRank() != rho.getRank());
}
