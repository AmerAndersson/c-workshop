#include <algorithm>  // for "shuffle"
#include <ctime>
#include <memory>
#include <random>
#include <vector>

/// The class declaration of Blackjack
#ifndef Blackjack_H
#define Blackjack_H

enum Rank {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};
enum Suit {
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES
};

class Card {
   public:
    Card(Rank rank, Suit suit);             // constructor declaration
    Rank getRank() const { return rank_; }  // getRank function declaration
    Suit getSuit() const { return suit_; }  // getSuit function declaration

   private:
    Rank rank_;
    Suit suit_;
};
class Deck {
   public:
    Deck();
    void shuffledeck();
    std::unique_ptr<Card> drawCard();

   private:
    std::vector<std::unique_ptr<Card>> cards_;
};
class Player {
   public:
    void addCard(std::unique_ptr<Card> card);

    int getHandValue() const {
        int value = 0;
        int aces = 0;
        for (const auto& card : hand_) {
            int cardValue = card->getRank();
            if (cardValue >= 10) {
                cardValue = 10;
            } else if (cardValue == ACE) {
                aces++;
                cardValue = 11;
            }
            value += cardValue;
        }
        while (value > 21 && aces > 0) {
            value -= 10;
            aces--;
        }
        return value;
    }

   private:
    std::vector<std::unique_ptr<Card>> hand_;
};
#endif