#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Welcome to my Number Guessing Game! \n");
    int max_num;
    printf("Enter a number: ");
    scanf("%d", &max_num);
    srand(time(NULL));

    int random_num = rand() % max_num;
    int count = 0;
    int attempt = 0;
    int blah = 0;
    printf("--You'll have a maximum number of 3 guesses in total-- \n");

    while (1) { //using 1 as a condition since "true" doesn't work in C
        count+= 1;
        attempt += 1;
        printf("Make a guess between 0 to %d (Attempt: %d): ", max_num, attempt);
        int guess;
        scanf("%d", &guess);

        if (guess == random_num){
            printf("You've got it correct in %d guesses! ", count);
            break;

        } else if (count >= 3){
            printf("Game Over! ");
            break;

        } else if (guess > max_num){
            printf("*Enter a number below than %d* \n", max_num);
            count = 0;
            attempt = 0;

        } else {
            printf("You've got it incorrect:/ \n");
        }
    }
}