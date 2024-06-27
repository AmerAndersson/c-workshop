# Book-item1

Input to this program is:
0-201-70353-X 4 24.99

Output to this program is:
0-201-70353-X 4 99.96 24.99

## Book-item2

Input to this program is:
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00

Output to this program is:
0-201-78345-X 5 110 22

USING FILE REDIRECTION
It can be tedious to repeatedly type these transactions as input to the programs you
are testing. Most operating systems support file redirection, which lets us associate a
named file with the standard input and the standard output:
$ addItems <infile >outfile
Assuming $ is the system prompt and our addition program has been compiled into
an executable file named addItems.exe (or addItems on UNIX systems), this command will read transactions from a file named infile and write its output to a file
named outfile in the current directory.

```cpp
// Prints the result of two items.
void addItems() {
  // Create two an empty SalesItems objects.
  SalesItems item1, item2;

  // Read ISBN, number of copies sold,
  // and sales price.
  std::cout << "Enter all ISBN: ";
  // Read a pair of transactions.
  std::cin >> item1 >> item2;

  // Write ISBN, number of copies sold,
  // total revenue, and average price
  // and prints their sum.
  // first check that item1 and item2 represent the same book
  if (item1.isbn() == item2.isbn()) {
    std::cout << (item1 + item2) << newline;
  } else {
    // indicate failure
    std::cerr << "Data must refer to same ISBN" << newline;
  }
}
```
