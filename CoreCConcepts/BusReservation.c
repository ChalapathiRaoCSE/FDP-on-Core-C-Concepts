#include<stdio.h>
struct users
{
    char uname[18];
    char upsw[18];
};
struct buses
{
    int busnumber;
    char source[18];
    char destination[18];
    int seats;
    int avseats;
    float amount;
};
void bookticket()
{
    printf("Bus Ticket Booked");
}

void cancelticket()
{
    printf("Bus Ticket Canceled");
}
void checkstatus()
{
    printf("Welcomr to Bus Reservation System");
}
int main()
{
    int choice,bchoice;
    printf("Enter No. of User to Register : ");
    int n;
    scanf("%d",&n);
    struct users u[n];
    for(int i=0;i<n;i++)
    {
        printf("\n Enter user name of the user %d: ",i);
        scanf("%s",u[i].uname);
        printf("\n Enter password of the user %d:",i);
        scanf("%s",u[i].upsw);
    }
    printf("Enter No. of Buses to Register : ");
    int m;
    scanf("%d",&m);
    struct buses b[m];
    for(int i=0;i<m;i++)
    {
        int busnumber;
        printf("\n Enter Bus No. %d details : ",i);
        printf("\n Enter bus number : ");
        scanf("%d",&b[i].busnumber);
        printf("\n Enter source : ");
        scanf("%s",b[i].source);
        printf("\n Enter destination : ");
        scanf("%s",b[i].destination);
        printf("\n Enter Total seats : ");
        scanf("%d",&b[i].seats);
        printf("\n Enter Available seats : ");
        scanf("%d",&b[i].avseats);
        printf("\n Enter Tick fair : ");
        scanf("%f",&b[i].amount);
    }
    printf("\n Given User Details : \n");
    for(int i=0;i<n;i++)
    {
        printf("\nUser Name: %s",u[i].uname);
    }
    printf("\n Given Buses Details : \n");
    for(int i=0;i<n;i++)
    {
        printf("\n Bus Number: %d",b[i].busnumber);
        printf("\n Bus Source: %s",b[i].source);
        printf("\n Bus Destination: %s",b[i].destination);
        printf("\n Bus Seats: %d",b[i].seats);
        printf("\n Bus Available Seats: %d",b[i].avseats);
        printf("\n Bus Fair Cost : %d",b[i].amount);
    }
    do{
        printf("\nEnter your Choice:");
        printf("\nLogin->1");
        printf("\nExit-->0");
        printf("\n---------->");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("\nEnter Login Details : ");
                printf("\nUser Name : ");
                char name[18];
                scanf("%s",name);
                printf("\nPassword  : ");
                char pas[18];
                scanf("%s",pas);
                int flag=0;
                for(int i=0;i<n;i++)
                {
                    if(name==u[i].uname && pas==u[i].upsw && flag==0)
                        flag=1;
                }
                if(flag)
                {
                    printf("\nUser %s logged in ",u[i].uname)
                do{
                    printf("\nEnter your Choice:");
                    printf("\nBook a Ticket---->1");
                    printf("\nCancel a Ticket-->2");
                    printf("\nCheck Bus Status->3");
                    printf("\nLogout----------->4");
                    printf("------------------->");
                    scanf("%d",&bchoice);
                    switch(bchoice)
                    {
                        case 1:
                            bookticket();
                            break;
                        case 2:
                            cancelticket();
                            break;
                        case 3:
                            checkstatus();
                            break;
                        case 4:
                            exit(0);
                        }
                }while(choice!=0);
            }
            else{
                printf("\n User %s details mismatch",name);
            }
            }
            break;
            case 0:
            exit(0);
        }
    }while(choice!=0);
}
