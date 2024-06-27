# language built-in array

```c++
#include <iostream>
using namespace std;

int main()
{

  int myarray[3] = {10,20,30};


  for (int i=0; i < 3; ++i)

    ++myarray[i];

  for (int elem : myarray)

    cout<< elem <<'\n';
}
```

#### container library array

```c++
#include <iostream>
#include <array>
using namespace std;
int main()
{

  array<int,3> myarray {10,20,30};


  for (int i=0; i < myarray.size(); ++i)
        ++myarray[i];
   for (int elem : myarray)

    cout<< elem << '\n';

}

```

#elifdef id shorthand for #elif defined(id)
#elifndef id shorthand for #elif !defined(id)
#warning "This a warning message"
