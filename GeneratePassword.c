#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

//generating a change
//database kk
//

int checkIfSentence( char line[], int index);
char *reverse(char edited[],char line[], int index);
void generatePassword(char line[], int index, char password[]);

int main()
{
    char sentence[100];
    int check;
    char password[100]=" ";
    char reverseL[100]=" ";


    do
    {
        printf("Enter a sentence: ");
        gets(sentence);

        check = checkIfSentence(sentence,0);
    }while (check==0);

    int length = strlen(sentence)-1;

    reverse(reverseL, sentence,length );
    printf("Password generated : ");
    generatePassword(reverseL,1, password);
    return 0 ;
}



int checkIfSentence(char line[], int index)
{
    if (line[index])
    {
        if (isspace(line[index]))
        {
            return 1;
        }
        checkIfSentence(line,index+1);
    }
    else
    {
        return 0;
    }
}


char *reverse(char edited[], char line[], int index)
{
    char c;
    while(index>=0)
    {
        c = line[index];
       if (isalpha(c))
       {
           strncat(edited,&c,1);
       }
       index--;
    }
}


void generatePassword(char line[], int index, char password[])
{
    char c = line[index];
    if (line[index])
    {
            strncat(password,&c,1);
            generatePassword(line,index+3, password);
    }
    else
    {
        srand(time(0));
        int random =(rand())%8;
        char Schar[8] = "@#$%&*~";
        puts(strncat(password,&Schar[random],1));
    }
}
