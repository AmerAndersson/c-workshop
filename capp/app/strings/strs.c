#include <stdio.h>

int main()
{
    // Strings
    char greetings[] = "Hello World!";
    printf("String: %s\n", greetings);

    // Access Strings
    printf("Single character: %c\n", greetings[0]);

    // Modify Strings
    greetings[0] = 'J';
    printf("%s\n", greetings);
    printf("----------------------\n");

    // Loop Through a String
    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);

    for (int i = 0; i < length; ++i)
    {
        if (carName[i] != '\0')
        {
            printf("%c\n", carName[i]);
        }
    }
    printf("----------------------\n");
    
    char greeting[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greeting);
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings));  // Outputs 13
    printf("%lu\n", sizeof(greetings2)); // Outputs 13

    // welcome message
    char message[] = "Good to see you,";
    char fname[] = "John";

    printf("%s %s!\n", message, fname);
    return 0;
}