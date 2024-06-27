g++ -g -Werror -Wall --pedantic -o main main.cpp && time valgrind ./main
g++ -fsanitize=address -g -Werror -Wall --pedantic -o main main.cpp && time ./main

blackjack: blackjack.cpp
	clang -o blackjack -cstd