
/**
 * This file defines the SalesItem class used in chapter 1.
 * The code used in this file will be explained in
 * Chapter 7 (Classes) and Chapter 14 (Overloaded Operators)
 * Readers shouldn't try to understand the code in this file
 * until they have read those chapters.
 */

#ifndef SALESITEMS_H
// we're here only if SALESITEM_H has not yet been defined
#define SALESITEMS_H

// Definition of SalesItem class and related functions goes here
#include <iostream>
#include <string>

class SalesItems {
  // these declarations are explained section 7.2.1, p. 270
  // and in chapter 14, pages 557, 558, 561
  friend std::istream& operator>>(std::istream&, SalesItems&);
  friend std::ostream& operator<<(std::ostream&, const SalesItems&);
  friend bool operator<(const SalesItems&, const SalesItems&);
  friend bool
  operator==(const SalesItems&, const SalesItems&);

 public:
  // constructors are explained in section 7.1.4, pages 262 - 265
  // default constructor needed to initialize members of built-in type
  SalesItems() = default;
  SalesItems(const std::string& book) : bookNo(book) {}
  SalesItems(std::istream& is) { is >> *this; }

 public:
  // operations on SalesItems objects
  // member binary operator: left-hand operand bound to implicit this pointer
  SalesItems& operator+=(const SalesItems&);

  // operations on SalesItems objects
  std::string isbn() const { return bookNo; }
  double avg_price() const;
  // private members as before
 private:
  std::string bookNo;       // implicitly initialized to the empty string
  unsigned units_sold = 0;  // explicitly initialized
  double revenue = 0.0;
};

// used in chapter 10
inline bool compareIsbn(const SalesItems& lhs, const SalesItems& rhs) { return lhs.isbn() == rhs.isbn(); }

// nonmember binary operator: must declare a parameter for each operand
SalesItems operator+(const SalesItems&, const SalesItems&);

inline bool
operator==(const SalesItems& lhs, const SalesItems& rhs) {
  // must be made a friend of SalesItems
  return lhs.units_sold == rhs.units_sold &&
         lhs.revenue == rhs.revenue &&
         lhs.isbn() == rhs.isbn();
}

inline bool
operator!=(const SalesItems& lhs, const SalesItems& rhs) {
  return !(lhs == rhs);  // != defined in terms of operator==
}

// assumes that both objects refer to the same ISBN
SalesItems& SalesItems::operator+=(const SalesItems& rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

// assumes that both objects refer to the same ISBN
SalesItems
operator+(const SalesItems& lhs, const SalesItems& rhs) {
  SalesItems ret(lhs);  // copy (|lhs|) into a local object that we'll return
  ret += rhs;           // add in the contents of (|rhs|)
  return ret;           // return (|ret|) by value
}

std::istream&
operator>>(std::istream& in, SalesItems& s) {
  double price;
  in >> s.bookNo >> s.units_sold >> price;
  // check that the inputs succeeded
  if (in)
    s.revenue = s.units_sold * price;
  else
    s = SalesItems();  // input failed: reset object to default state
  return in;
}

std::ostream&
operator<<(std::ostream& out, const SalesItems& s) {
  out << s.isbn() << " " << s.units_sold << " "
      << s.revenue << " " << s.avg_price();
  return out;
}

double SalesItems::avg_price() const {
  if (units_sold)
    return revenue / units_sold;
  else
    return 0;
}
#endif
