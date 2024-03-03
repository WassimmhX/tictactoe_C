#include <stdio.h>
#include <stdlib.h>
void border(char*t){
    system("cls");
    printf("\n      Player 1: X          Player 2: O\n\n\n");
    printf("         -----------------------------\n");
    printf("        |         |         |         |\n");
    printf("        |    %c    |    %c    |    %c    |\n",t[1],t[2],t[3]);
    printf("        |         |         |         |\n");
    printf("        -----------------------------\n");
    printf("        |         |         |         |\n");
    printf("        |    %c    |    %c    |    %c    |\n",t[4],t[5],t[6]);
    printf("        |         |         |         |\n");
    printf("        -----------------------------\n");
    printf("        |         |         |         |\n");
    printf("        |    %c    |    %c    |    %c    |\n",t[7],t[8],t[9]);
    printf("        |         |         |         |\n");
    printf("         -----------------------------\n");
}
int winloose(char*t){
    if (t[1] == t[2] && t[2] == t[3])
        return 1;

    else if (t[4] == t[5] && t[5] == t[6])
        return 1;

    else if (t[7] == t[8] && t[8] == t[9])
        return 1;

    else if (t[1] == t[4] && t[4] == t[7])
        return 1;

    else if (t[2] == t[5] && t[5] == t[8])
        return 1;

    else if (t[3] == t[6] && t[6] == t[9])
        return 1;

    else if (t[1] == t[5] && t[5] == t[9])
        return 1;

    else if (t[3] == t[5] && t[5] == t[7])
        return 1;

    else if (t[1] != '1' && t[2] != '2' && t[3] != '3' &&
        t[4] != '4' && t[5] != '5' && t[6] != '6' && t[7]
        != '7' && t[8] != '8' && t[9] != '9')

        return 2;
    else
        return  0;
}
void main(){
    int i=0,p=1;
    char m,k;
    char t[10]={'0','1','2','3','4','5','6','7','8','9'};
    do{
        border(t);
        if(p==1)
            m='X';
        else
            m='O';
        fflush(stdin);
        printf("player %d, choose a number : ",p);
        scanf("%c",&k);
        if(k==t[1])
            t[1]=m;
        else if(k==t[2])
            t[2]=m;
        else if(k==t[3])
            t[3]=m;
        else if(k==t[4])
            t[4]=m;
        else if(k==t[5])
            t[5]=m;
        else if(k==t[6])
            t[6]=m;
        else if(k==t[7])
            t[7]=m;
        else if(k==t[8])
            t[8]=m;
        else if(k==t[9])
            t[9]=m;
        else{
            p--;
            printf("you can't choose that, try again\n");
        }
        if(p==2)
            p--;
        else
            p++;
        i=winloose(t);
    }while(i==0);
    if(p==2)
            p--;
        else
            p++;
    border(t);
    if (i==1)
        printf("        *** PLAYER %d WINS***  ",p);
    else
        printf(" we didn't get a winner, it's a tie");
}














