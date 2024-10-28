#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeladder(int pos)
{
    //Ladder
    if(pos==1)
        return 38;
    else if(pos==4)
        return 14;
    else if(pos==8)
        return 30;
    else if(pos==21)
        return 42;
    else if(pos==28)
        return 76;
    else if(pos==50)
        return 67;
    else if(pos==71)
        return 92;
    else if(pos==80)
        return 99;
    else if(pos==97)
        return 78;
    else if(pos==95)
        return 56;
    else if(pos==88)
        return 24;
    else if(pos==62)
        return 18;
    else if(pos==48)
        return 26;
    else if(pos==36)
        return 6;
    else if(pos==32)
        return 10;
    else
        return pos;
}
int rowindex(int pos)
{
    int row;
    switch(pos)
    {
        case 100 ... 91: row=0; break;
        case 81 ... 90: row=1; break;
        case 80 ... 71: row=2; break;
        case 61 ... 70: row=3; break;
        case 60 ... 51: row=4; break;
        case 41 ... 50: row=5; break;
        case 40 ... 31: row=6; break;
        case 21 ... 30: row=7; break;
        case 20 ... 11: row=8; break;
        case 1 ... 10: row=9; break;
    }
    return row;
}
int colindex(int row, int pos)
{
    if(row%2==0)
    {
        if(pos%10==0)
            return 0;
        else if(pos%9==0)
            return 1;
        else if(pos%8==0)
            return 2;
        else if(pos%7==0)
            return 3;
        else if(pos%6==0)
            return 4;
        else if(pos%5==0)
            return 5;
        else if(pos%4==0)
            return 6;
        else if(pos%3==0)
            return 7;
        else if(pos%2==0)
            return 8;
        else if(pos%1==0)
            return 9;
        else
            return 10;
    }
    else
    {
        if(pos%1==0)
            return 9;
        else if(pos%2==0)
            return 8;
        else if(pos%3==0)
            return 7;
        else if(pos%4==0)
            return 6;
        else if(pos%5==0)
            return 5;
        else if(pos%6==0)
            return 4;
        else if(pos%7==0)
            return 3;
        else if(pos%8==0)
            return 2;
        else if(pos%9==0)
            return 1;
        else if(pos%10==0)
            return 0;
    }
}
void PlayGame()
{
    int p1=0,p2=0;
    int count=100;
    int mat[10][10];
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<10;j++)
            {
                mat[i][j]=count--;
            }
            count=count-9;
        }
        else
        {
            for(int j=0;j<10;j++)
            {
                mat[i][j]=count++;
            }
            count=count-11;
        }
    }
    printf("This is the board postion\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf(" %3d",mat[i][j])            ;
        }
        printf("\n");
    }

    int flag=1;
    while(p1<100 && p2<100)
    {
        int dice = ((int)(rand()%6))+1;
        if(flag==1)
        {
            printf("Player 1's Turn\n");
            printf("Rolled the dice with %d\n",dice);
            if(p1+dice<=100)
            {

                p1=p1+dice;
            }
            p1=snakeladder(p1);
            int i=rowindex(p1);
            int j=colindex(i,p1);
            mat[i][j]=-1;
            printf("player 1 moved to new position %d\n",p1);
            flag=2;
        }
        else
        {
            printf("Player 2's Turn\n");
            printf("Rolled the dice with %d\n",dice);
            if(p2+dice<=100)
            {

                p2=p2+dice;
            }
            p2=snakeladder(p2);
            int i=rowindex(p2);
            int j=colindex(i,p2);
            mat[i][j]=-2;
            printf("player 2 moved to new position %d\n",p2);
            flag=1;
        }
    }
    if(p1==100)
        printf("Player 1 WINS!");
    else
        printf("Player 2 WINS!");
}



int main()
{
    printf("The game is starting");
    PlayGame();
    return 0;
}
