# Fundamental Types are the basic building blocks for all complex types:

- Data structures like:

1. lists,
2. hash maps,
3. trees,
4. graphs,
5. array,
6. verctor,
7. deque,
8. forwar_list,
9. set`

# Debug command

g++ -g -Werror -Wall --pedantic -o main main.cpp && time valgrind ./main

g++ -fsanitize=address -g -Werror -Wall --pedantic -o main main.cpp && time ./main
