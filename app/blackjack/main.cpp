#include <iostream>

#include "Blackjack.cpp"

int main() {
    Deck deck;

    deck.shuffledeck();

    Player player;
    Player dealer;

    player.addCard(deck.drawCard());
    player.addCard(deck.drawCard());

    dealer.addCard(deck.drawCard());
    dealer.addCard(deck.drawCard());

    std::cout << "Player Hand value " << player.getHandValue() << std::endl;
    std::cout << "Dealer Hand value " << dealer.getHandValue() << std::endl;
    return 0;
}