
/// The implementation of Blackjack in the CPP file:
#include "Blackjack.h"

// constructor definition
Card::Card(Rank rank, Suit suit) : rank_(rank), suit_(suit) {}

Deck::Deck() {
    for (int suit = HEARTS; suit <= SPADES; ++suit) {
        for (int rank = ACE; rank < KING; ++rank) {
            cards_.push_back(std::make_unique<Card>(static_cast<Rank>(rank), static_cast<Suit>(suit)));
        }
    }
}
void Deck::shuffledeck() {
    std::random_device rd;
    std::mt19937 g(rd());
    shuffle(cards_.begin(), cards_.end(), g);
}

std::unique_ptr<Card> Deck::drawCard() {
    if (cards_.empty()) {
        return nullptr;
    }
    std::unique_ptr<Card> card = std::move(cards_.back());
    cards_.pop_back();
    return card;
}

void Player::addCard(std::unique_ptr<Card> card) {
    hand_.push_back(std::move(card));
}
