
#include <stdio.h>

int main() {
    /*
     * "Old enough to vote!" if myAge is greater than or equal to 18.
     *  Otherwise output "Not old enough to vote.":
     */
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.\n");
    }
    printf("---------------\n");

    // The if Statement
    if (20 > 18) {
        printf("20 is greater than 18\n");
    }
    printf("---------------\n");

    int x = 20;
    int y = 18;
    if (x > y) {
        printf("x is greater than y\n");
    }
    printf("---------------\n");

    // The if-else Statement
    int time = 20;
    if (time < 18) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }
    printf("---------------\n");

    // The else if Statement
    int times = 22;
    if (times < 10) {
        printf("Good morning.\n");
    } else if (times < 20) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }
    printf("---------------\n");

    // Short Hand If Else
    int mytime = 20;
    (mytime < 18) ? printf("Good day.\n") : printf("Good evening.\n");
    printf("---------------\n");

    int doorCode = 1337;

    if (doorCode == 1337) {
        printf("Correct code.\nThe door is now open.\n");
    } else {
        printf("Wrong code.\nThe door remains closed.\n");
    }
    printf("---------------\n");

    // Is this a positive or negative number?
    int myNum = 10;

    if (myNum > 0) {
        printf("The value is a positive number.\n");
    } else if (myNum < 0) {
        printf("The value is a negative number.\n");
    } else {
        printf("The value is 0.\n");
    }

    int myNums = 5;

    if (myNums % 2 == 0) {
        printf("%d is even.\n", myNums);
    } else {
        printf("%d is odd.\n", myNums);
    }
    printf("---------------\n");
    return 0;
}