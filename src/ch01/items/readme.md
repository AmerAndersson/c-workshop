# SalesItem class

```cpp
The purpose of the SalesItem  class is to represent the total revenue, number
of copies sold, and average sales price for a book. How these data are stored or
computed is not our concern. To use a class, we need not care about how it is
implemented. Instead, what we need to know is what operations objects of that
type can perform.

Every class defines a type. The type name is the same as the name of the class.
Hence, our SalesItem  class defines a type named SalesItem . As with the
built-in types, we can define a variable of a class type. When we write
SalesItem  item;

we are saying that item is an object of type SalesItem . We often contract the
phrase “an object of type SalesItem ” to “a SalesItem  object” or even more
simply to “a SalesItem .”

In addition to being able to define variables of type SalesItem, we can:
• Call a function named isbn to fetch the ISBN from a SalesItem  object.
• Use the input (>>) and output (<<) operators to read and write objects of
type SalesItem .

• Use the assignment operator (=) to assign one SalesItem  object to another.
• Use the addition operator (+) to add two SalesItem  objects. The two objects must refer to the same ISBN. The result is a new SalesItem object
whose ISBN is that of its operands and whose number sold and revenue are
the sum of the corresponding values in its operands.
• Use the compound assignment operator (+=) to add one SalesItem  object
into another.

KEY CONCEPT: CLASSES DEFINE BEHAVIOR
The important thing to keep in mind when you read these programs is that the author
of the Sales_item class defines all the actions that can be performed by objects of
this class. That is, the Sales_item class defines what happens when a Sales_item
object is created and what happens when the assignment, addition, or the input and
output operators are applied to Sales_items.
In general, the class author determines all the operations that can be used on objects of the class type. For now, the only operations we know we can perform on
Sales_item objects are the ones listed in this section.
```
