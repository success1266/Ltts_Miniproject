//Simple Quize Game
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include"header.h"
#define SIZE 50

// main function
int main()
{
    int score_tracker, switch_input, incrementer;
    char playername[SIZE];
    float score;
    char choice;

//landingPage label
landingPage:
    show_landing_page();
    // redirecting based on users choice
    choice=toupper(getch());
    if (choice == 'R')
    {
        system("cls");
        reset_score();
        getch();
        goto landingPage;
    }

    else if (choice == 'V')
    {
        system("cls");
        show_record();
        system("cls");
        goto landingPage;
    }

    else if (choice == 'H')
    {
        system("cls");
        help();
        getch();
        system("cls");
        goto landingPage;
    }

    else if (choice == 'Q')
    {
        exit(1);
    }

    else if (choice == 'S')
    {

        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n\n *********** Welcome %s to C Program Quiz Game *****************", playername);
        printf("\n\n ______________________PATTERN OF QUIZ_________________________");
        printf("\n >> You will get next question only IF YOU GIVE CORRECT ANSWER");
        printf("\n\n >> There is no negative marking!");
        printf("\n\n\t######## ALL THE BEST ########");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");

        if (toupper(getch()) == 'Y')
        {
            system("cls");
             goto Quiz;
        }

        else
        {
            system("cls");
            goto landingPage;
        }
    }

// HomePage Label

HomePage:
    system("cls");
    printf("\n\n\n\n\t!Press any key to Start the Game!");
    if (toupper(getch()) == 'p')
    {
        goto Quiz;
    }

//Quiz Label

Quiz:
    score_tracker = 0;
    for (incrementer = 1; incrementer <= 10; incrementer++)
    {
        system("cls");
        switch_input = incrementer;
        switch (switch_input)
        {
        case 1:
            printf("\n\nWhat is the 16-bit compiler allowable range for integer constants in C?");
            printf("\n\nA. -3.4e38 to 3.4e38\nB. -32767 to 32768\nC. -32668 to 32667\nD. -32768 to 32767");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }

            else
            {
                printf("\n\nWrong!!! The correct answer is D. -32768 to 32767");
                getch();
                goto score;
                break;
            }
        case 2:
            printf("\n\n\nWhat is required in each C program?");
            printf("\n\nA. The program must have at least one function. \nB. The program does not require any function.\nC. Input data\nD. Output data");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }

            else
            {
                printf("\n\nWrong!!! The correct answer is A. The program must have at least one function.");
                getch();
                goto score;
                break;
            }

        case 3:
            printf("\n\n\nWhat is a lint?");
            printf("\n\nA. C compiler\nB. Interactive debugger\nC. Analyzing tool\nD. C interpreter");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C. Analyzing tool");
                getch();
                goto score;
                break;
            }

        case 4:
            printf("\n\n\nWhat does this declaration mean? int x : 4;  ");
            printf("\n\nA.X is a four-digit integer.\nB.X cannot be greater than a four-digit integer.\nC.X is a four-bit integer.\nD.None of the these");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }

            else
            {
                printf("\n\nWrong!!! The correct answer is C.X is a four-bit integer.");
                getch();
                goto score;
                break;
            }

        case 5:
            printf("\n\n\nWhy is a macro used in place of a function?");
            printf("\n\nA.It reduces execution time.\nB.It reduces code size.\nC.It increases execution time.\nD.It increases code size.");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.It reduces code size.");
                getch();
                goto score;
                break;
            }

        case 6:
            printf("\n\n\n In the C language, the constant is defined _______.");
            printf("\n\nA.Before main\nB.After main\nC.Anywhere, but starting on a new line.\nD.None of the these.");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Anywhere, but starting on a new line.");
                getch();
                goto score;
                break;
            }

        case 7:
            printf("\n\n\nwhich of he following is a read only memory storage device ");
            printf("\n\nA.Flash drive\nB.Hard disk\nC.Floppy disk\nD.CDROM");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.CDROM");
                getch();
                goto score;
                break;
            }
        case 8:
            printf("\n\n\nA pointer is a memory address. Suppose the pointer variable has p address 1000, and that p is declared to have type int*, and an int is 4 bytes long. What address is represented by expression p + 2?");
            printf("\n\nA.1002\nB.1004 \nC.1006\nD.1008");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.1008");
                getch();
                goto score;
                break;
            }
        case 9:
            printf("\n\n\nDirectives are translated by the");
            printf("\n\nA.Pre-processor\nB.Compiler\nC.Linker\nD.Editor");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Pre-processor");
                getch();
                goto score;
                break;
            }
        case 10:
            printf("\n\n\nHow many bytes does int = D use?");
            printf("\n\nA.0\nB.1\nC.2 or 4\nD.10");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                score_tracker++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.2 or 4");
                getch();
                goto score;
                break;
            }
        }
    }

//Score Label

score:
    system("cls");
     score = (float)score_tracker * 100;
    if (score > 0.00 && score <= 1000)
    {
        printf("\n\t You Scored %.2f out of 100.00", score);
        goto restart;
    }
    else
    {
        printf("\n\n\t******** SORRY YOUR SCORE IS 0 ********");
        printf("\n\t\t TRY AGAIN");
        goto restart;
    }

// restart the game

restart:
    puts("\n\n Press Y if you want to play again game");
    puts(" Press any key if you want to go back to main menu");
    if (toupper(getchar()) == 'Y')
    {
        goto HomePage;
    }
    else
    {
        // edit_score(score, playername);
        goto landingPage;
    }
}