// A and B are playing a guessing game where B first thinks up an integer X (positive, negative or
// zero, and could be of arbitrarily large magnitude) and A tries to guess it. In response to A’s guess, B gives exactly one of the following three replies:
// a) Try a bigger number
// b) Try a smaller number or
// c) You got it. Write a program by designing an efficient algorithm to minimize the number of guesses A has to
// make. An example (not necessarily an efficient one) below:
// Assume B thinks up the number 35. A’s guess B’s response. 10 Try a bigger number
// 20 Try a bigger number
// 30 Try a bigger number
// 40 Try a smaller number
// 35 You got it

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    x=rand();
   printf("B thinks number: %d\n", x);
    while (1){
        int guess;
        printf("A guesses: ");
        scanf("%d", &guess);
        if (guess == x){
            printf("You got it\n");
            break;
        }
        else if (guess < x){
            printf("Try a bigger number\n");
        }
        else{
            printf("Try a smaller number\n");
        }
    }
    return 0;
}

