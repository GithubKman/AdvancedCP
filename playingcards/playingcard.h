#pragma once
#include <cassert>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>
#include <iostream>

constexpr int DECKSIZE = 52;
constexpr int JOKERDECKSIZE = 54;
enum class CardRank : std::uint8_t
{
    Nothing = 0x0,
    Ace = 0x01,
    Two = 0x02,
    Three = 0x03,
    Four = 0x04,
    Five = 0x05,
    Six = 0x06,
    Seven = 0x07,
    Eight = 0x08,
    Nine = 0x09,
    Ten = 0x0A,
    Jack = 0x0B,
    Queen = 0x0C,
    King = 0x0D,
    Joker0 = 0x0E,
    Joker1 = 0x0F,
};

constexpr std::uint8_t to_int(CardRank rank) {
    return static_cast<std::uint8_t>(rank);
}
constexpr CardRank to_rank(std::uint8_t rank)
{
    return static_cast<CardRank>(rank);
}

constexpr std::string_view to_string(CardRank rank) {
    switch (rank) {
        case CardRank::Nothing: return "Nothing";
        case CardRank::Ace: return "Ace";
        case CardRank::Two: return "Two";
        case CardRank::Three: return "Three";
        case CardRank::Four: return "Four";
        case CardRank::Five: return "Five";
        case CardRank::Six: return "Six";
        case CardRank::Seven: return "Seven";
        case CardRank::Eight: return "Eight";
        case CardRank::Nine: return "Nine";
        case CardRank::Ten: return "Ten";
        case CardRank::Jack: return "Jack";
        case CardRank::Queen: return "Queen";
        case CardRank::King: return "King";
        case CardRank::Joker0: return "Joker0";
        case CardRank::Joker1: return "Joker1";
    }
    return "Unknown";
}
constexpr std::string_view prettyString(CardRank rank) {
    switch (rank) {
        case CardRank::Nothing: return "Er";
        case CardRank::Ace: return "A";
        case CardRank::Two: return "2";
        case CardRank::Three: return "3";
        case CardRank::Four: return "4";
        case CardRank::Five: return "5";
        case CardRank::Six: return "6";
        case CardRank::Seven: return "7";
        case CardRank::Eight: return "8";
        case CardRank::Nine: return "9";
        case CardRank::Ten: return "10";
        case CardRank::Jack: return "J";
        case CardRank::Queen: return "Q";
        case CardRank::King: return "K";
        case CardRank::Joker0: return "J";
        case CardRank::Joker1: return "J";
    }
    return "Unknown";
}

enum class CardSuit : std::uint8_t
{
    Clubs = 0x00,
    Diamonds = 0x10,
    Hearts = 0x20,
    Spades = 0x30,
};

constexpr std::uint8_t to_int(CardSuit suit) {
    return (static_cast<std::uint8_t>(suit) >> 4);
}
constexpr CardSuit to_suit(std::uint8_t suit) {
    assert((0 <= suit && suit < 4) && "Not suitable number");
    return (static_cast<CardSuit>(suit << 4));
}

constexpr std::string_view to_string(CardSuit suit) {
    switch (suit) {
        case CardSuit::Clubs: return "Clubs";
        case CardSuit::Diamonds: return "Diamonds";
        case CardSuit::Hearts: return "Hearts";
        case CardSuit::Spades: return "Spades";
    }
    return "Unknown";
}
constexpr std::string_view prettyString(CardSuit suit) {
    switch (suit) {
        case CardSuit::Clubs: return "󰣎";
        case CardSuit::Diamonds: return "󰣏";
        case CardSuit::Hearts: return "󰣐";
        case CardSuit::Spades: return "󰣑";
    }
    return "Unknown";
}

enum class CardDirection : std::uint8_t
{
    Down = 0x00,
    Up = 0x40,
};

constexpr bool to_bool(CardDirection direction)
{
    return static_cast<bool>(direction) ? true : false;
}

constexpr std::string_view to_string(CardDirection direction)
{
    switch (direction) {
        case CardDirection::Down: return "Face Down";
        case CardDirection::Up: return "Face Up";
    }
    return "Unknown";
}

class PlayingCard
{
private:
    std::uint8_t card;
    constexpr static std::uint8_t rankMask = 0x0F;
    constexpr static std::uint8_t suitMask = 0x30;
    constexpr static std::uint8_t directionMask = 0x40;
    const static std::string BRAND;
    constexpr static std::string_view CARD_TEMPLATE =
R"(╭───────╮
│{0:<2}     │
│       │
│   {1}   │
│       │
│     {0:>2}│
╰───────╯)";

public:
//constructors
    PlayingCard();
    PlayingCard(CardRank rank, CardSuit suit, CardDirection direction);
    //getters
    CardRank getRank() const;
    CardSuit getSuit() const;
    CardDirection getDirection() const;
    //setters 
    void setRank(CardRank);
    void setSuit(CardSuit);
    void setDirection(CardDirection);
    //getters
    // Returns true if red, false if black
    bool getRed() const;
    //get face method
    bool getFace() const;
    // returns true if card is face up
    bool isUp() const;
    //stringify returns string description of state of object 
    std::string stringify() const;
    std::string printCard() const;

    static void printRow(const std::vector<PlayingCard>&);

    //Static method
    static std::string getBrand();

    bool operator < (const PlayingCard&) const;
    bool operator <= (const PlayingCard&) const;
    bool operator > (const PlayingCard&) const;
    bool operator >= (const PlayingCard&) const;
    bool operator == (const PlayingCard&) const;
    bool operator != (const PlayingCard&) const;

};
