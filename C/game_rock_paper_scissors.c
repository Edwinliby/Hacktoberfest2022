# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

int rockPaperScissors(char you, char comp);
void charToWord(char str[10], char ch);

int main()
{
    int pts, ycount = 0, ccount = 0;
    char you, comp, y[10], c[10];
    int n;

    printf("Number of rounds : ");
    scanf("%d", &pts);
    fflush(stdin);

    printf("\nEnter 'r' for rock, 'p' for paper and 's' for scissors.\n\n");

    for(int i = 0 ; i < pts ; i++){
        srand(time(0));
        n = rand()%3 + 1;

        switch(n)
        {
            case 1:
            comp = 'r';
            break;

            case 2:
            comp = 'p';
            break;

            case 3:
            comp = 's';
            break;
        }

        printf("ROUND %d\n\nYour pick : ", i+1);
        scanf("%c", &you);
        fflush(stdin);

        charToWord(y, you);
        charToWord(c, comp);
        
        printf("You chose : %s\nComputer chose : %s\n", y, c);

        int result = rockPaperScissors(you, comp);

        switch (result)
        {
            case 0:
            printf("Tied!\n\n");
            break;
        
            case 1:
            printf("You won this round!\n\n");
            ycount++;
            break;
        
            case -1:
            printf("You lost this round!\n\n");
            ccount++;
            break;

            default:
            printf("Invalid Input!\n\n");
            break;
        }
    }

    printf("Your score = %d\n", ycount);
    printf("Computer's score = %d\n", ccount);

    if(ycount > ccount){
        printf("Congratulations! You WON!");
    }
    else if(ycount == ccount){
        printf("Match Tied!");
    }
    else{
        printf("Computer WON! Better luck next time.");
    }

    return 0;
}

int rockPaperScissors(char you, char comp){
    if(you == comp){
        return 0;
    }

    if(you == 'r' && comp == 'p'){
        return -1;
    }
    else if(you == 'p' && comp == 'r'){
        return 1;
    }

    if(you == 'p' && comp == 's'){
        return -1;
    }
    else if(you == 's' && comp == 'p'){
        return 1;
    }

    if(you == 's' && comp == 'r'){
        return -1;
    }
    else if(you == 'r' && comp == 's'){
        return 1;
    }
}

void charToWord(char str[10], char ch){
    switch(ch)
    {
        case 'r':
        strcpy(str, "Rock");
        break;

        case 'p':
        strcpy(str, "Paper");
        break;

        case 's':
        strcpy(str, "Scissors");
        break;

        default:
        strcpy(str, "Invalid");
        break;
    }
}