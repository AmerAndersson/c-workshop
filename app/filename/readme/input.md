# Standard Library Stream Types

```shell

istream:            input stream          reference istream& binds to any other kind of std:: input stream
ostream:            output stream         reference ostream& binds to any other kind of std:: output stream
ifstrea:            input file stream     extracted data is read from a file
ofstrea:            output file stream    inserted data is stored in a file
ostringstream:      output string stream  inserted data is stored in a string buffer
istringstream:      input string stream   extracted data is read from a string buffer
```

## Read Lines With getline

```c++
std::getline (istream&, string&, stopat='\n')
- reads until the next stopat character (default = until end of line)

string s;
getline(cin, s);
getline(cin, s, '\t');
getline(cin, s, 'a');
 
- read entire line
- read until next tab
- read until next 'a'

##Skip Forward With ignore
std::istream::ignore(n, c)
- forwards stream by n characters
- until stop character c

// skip next 8 characters
cin.ignore(8);
// skip by max. 10 characters or until after '='
cin.ignore(10, '=');
// skip until after next newline character
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')

##Formatting Manipulators

#include <iomanip>
double d = 12.345678;   // 
double e = 2011;
double f = 1e-10;

std::cout << d            
<< e << '\n'
<< f << '\n'
<< std::setprecision(4) 
<< d << '\n'
<< e << '\n'
<< f << '\n'
<< std::fixed
<< d << '\n'
<< e << '\n'
<< f << '\n'
<< std::scientific
<< d << '\n'
<< e << '\n'
<< f << '\n'
<< true <<' '<< false
<< std::boolalpha
<< true <<' '<< false;

##Ouput

12.345678   
2011        
1e-010
---
# of digits
12.35       
2011        
1e-010
---
fixed # of decimals
12.3457     
2011.0000   
1.0000e-010
---
scientific notation
1.2346e+001 
2.0110e+003 
1.0000e-010
1 0
---
booleans as string
true false
```
