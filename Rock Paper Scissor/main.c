#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void showChoice(int choice)
{
    if(choice == 1)
    {
         printf("    _______\n");
        printf("---'   ____)\n");
        printf("      (_____)\n");
        printf("      (_____)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
        printf("Rock");
    }
    else if(choice == 2)
    {
        printf("     _______\n");
        printf("---'    ____)____\n");
        printf("           ______)\n");
        printf("          _______)\n");
        printf("         _______)\n");
        printf("---.__________)\n");
        printf("Paper");
    }
    else
    {
      printf("    _______\n");
        printf("---'   ____)____\n");
        printf("          ______)\n");
        printf("       __________)\n");
        printf("      (____)\n");
        printf("---.__(___)\n");
        printf("Scissors");
    }
}

int findWinner(int player, int computer)
{
    if(player == computer)
        return 0;

    if((player == 1 && computer == 3) ||
       (player == 2 && computer == 1) ||
       (player == 3 && computer == 2))
        return 1;

    return -1;
}

int main()
{
    int player, computer;
    int playerScore = 0;
    int computerScore = 0;
    int rounds;
    int winTarget;

    srand(time(0));

    printf("\n====================================\n");
    printf("     ROCK PAPER SCISSORS GAME\n");
    printf("====================================\n");

    printf("\nChoose game mode:\n");
    printf("1. Best of 3\n");
    printf("2. Best of 5\n");

    printf("Enter choice: ");
    scanf("%d", &rounds);

    if(rounds == 1)
        rounds = 3;
    else if(rounds == 2)
        rounds = 5;
    else
    {
        printf("Invalid choice. Defaulting to Best of 3.\n");
        rounds = 3;
    }

    winTarget = rounds/2 + 1;

    printf("\nFirst to %d wins!\n", winTarget);
    printf("====================================\n");

    for(int round = 1; round <= rounds; round++)
    {
        printf("\n------------- ROUND %d -------------\n", round);

        printf("\nChoose:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        printf("\nEnter your choice: ");
        scanf("%d", &player);

        if(player < 1 || player > 3)
        {
            printf("Invalid choice! Try again.\n");
            round--;
            continue;
        }

        computer = rand() % 3 + 1;

        printf("\nYou chose:\n");
        showChoice(player);

        printf("\n\nComputer is thinking");
        fflush(stdout);

        sleep(1);
        printf(".");
        fflush(stdout);

        sleep(1);
        printf(".");
        fflush(stdout);

        sleep(1);
        printf(".\n\n");

        printf("Computer chose:\n");
        showChoice(computer);
        printf("\n");

        int result = findWinner(player, computer);

        printf("\n------------------------------------\n");

        if(result == 0)
        {
            printf("Result: It's a Draw!\n");
        }
        else if(result == 1)
        {
            printf("Result: You Win This Round!\n");
            playerScore++;
        }
        else
        {
            printf("Result: Computer Wins This Round!\n");
            computerScore++;
        }

        printf("------------------------------------\n");

        printf("\nScoreboard\n");
        printf("Player   : %d\n", playerScore);
        printf("Computer : %d\n", computerScore);

        if(playerScore == winTarget || computerScore == winTarget)
            break;
    }

    printf("\n====================================\n");
    printf("            FINAL RESULT\n");
    printf("====================================\n");

    printf("Player   : %d\n", playerScore);
    printf("Computer : %d\n", computerScore);

    if(playerScore > computerScore)
        printf("\n Congratulations! You Win the Game!\n");
    else if(computerScore > playerScore)
        printf("\nComputer Wins the Game!\n");
    else
        printf("\nThe Game Ends in a Draw!\n");

    printf("\nThanks for playing!\n");

    return 0;
}