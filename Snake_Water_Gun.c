#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp){
    // returns 1 if you win , -1 if you lose and 0 if draw
    if (you == comp)
    {
        return 0;
    }
    
    else if ((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's'))
    {
        return 1;
    }
    else if ((you == 'w' && comp == 's') || (you == 'g' && comp == 'w') || (you == 's' && comp == 'g'))
    {
        return -1;
    }
    
    
}

int main(){
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100 + 1; // Generates the number btw 1 and 100

    if (number<33)
    {
        comp = 's';
    }
    else if (number >=33 && number<66)
    {
        comp = 'w';
    }
    else if (number >=67)
    {
        comp = 'g';
    }

    printf("Enter 's' for snale, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    
    printf("You chose : %c and the computer chose : %c\n", you, comp);
    if (result == 0)
    {
        printf("Match draw\n");
    }
    else if (result == 1)
    {
        printf("You Win!!!\n");
    }
    else if (result == -1)
    {
        printf("You Lose!!!\n");
    }
    
    
    return 0;
}