- @brief Arrays are blocks of static memory whose size must be determined at compile time
- With the only difference that with multidimensional arrays,
- the compiler automatically remembers the depth of each imaginary dimension.
- The following two pieces of code produce the exact same result, but one uses a bidimensional array
- while the other uses a simple array
- @author: Amer Andersson
- @conutry: Sweden
- @date: 2024
- @return 0 when program execution completes successfully.

#### multidimensional array pseudo - multidimensional array

```c++
#define WIDTH 5
#define HEIGHT 3
int jimmy [HEIGHT][WIDTH];
int n,m;
int main ()

{

  for (n=0; n HEIGHT; n++)
    for (m=0; m WIDTH; m++)
    {
      jimmy[n][m]=(n+1)*(m+1);

    }
}
```

#### pseudo-multidimensional array

```c++
#define WIDTH 5
#define HEIGHT 3
int jimmy [HEIGHT * WIDTH];
int n,m;
int main ()
{

  for (n=0; n HEIGHT; n++)
    for (m=0; m WIDTH; m++)
    {
      jimmy[n*WIDTH+m]=(n+1)*(m+1);
    }
}
```

##### None of the two code snippets above produce any output on the screen, but both assign values to the memory block called jimmy in the following way:

![code snippets](/array/dim.png)

##### Note that the code uses defined constants for the width and height, instead of using directly their numerical values. This gives the code a better readability, and allows changes in the code to be made easily in one place.
