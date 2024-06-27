# Four Type-casting

* In order to control these types of conversions between classes,
* we have four specific casting operators:  dynamic_cast, reinterpret_cast,
* static_cast and const_cast. Their format is to follow the new type enclosed between angle-brackets (<>)
* and immediately after, the expression to be converted between parentheses.
* dynamic_cast <new_type> (expression)
* reinterpret_cast <new_type> (expression)
* static_cast <new_type> (expression)
* const_cast <new_type> (expression)
* The traditional type-casting equivalents to these expressions would be:
* (new_type) expression
* new_type (expression)
* but each one with its own special characteristics:
