#include<stdio.h>
#define N 5 //number of customers

//structure to maintain accounts of customers
struct account{
    long int accno;
    char name[20];
    char type;
    float bal;
}custmer[N]={{101,"Vaibhav",'S',10000},
            {102,"Mahesh",'S',12000},
            {103,"Omkar",'S',14000},
            {104,"Shrihari",'C',9000},
            {105,"Shubham",'C',2000}
};
int accin;//to keep track of account index
float amount;


void deposit()//function to deposit amount
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal+amount;//add amount to balance
    balance();
}

void withdraw()//function to withdraw balance
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    //Check for balance availability
    if(amount<=custmer[accin].bal)
    {
        custmer[accin].bal-=amount;//Withdraw Amount
        balance();
    }
    else
    {
        printf("Insufficient Balance in your account\n");
        balance();
        return;
    }
}

void balance()//display balance
{
    printf("Balance = %f\n",custmer[accin].bal);
}

int main()
{
    int accnum,i,ch,f=0;
    printf("*************BANK APPLICATION**************");
start:
    printf("\nEnter the Account number= ");//input account number
    scanf("%d",&accnum);

    for(i=0;i<N;i++)//check for existance of the account
    {
        if(accnum==custmer[i].accno)
        {
            accin=i;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("\nInvalid Account number  \n");
        goto start;
    }

    //DISPLAY ACCOUNT INFO
    printf("Account number= %d\nName : %s\nAccount type=  %c\nBalance = %f\n",custmer[accin].accno,custmer[accin].name,custmer[accin].type,custmer[accin].bal);
    while(1)
    {
        //DISPLAY MENU
        printf("\nEnter your choice\n1 : Balance Inquiry\n2 : Deposit Amount \n3 : Withdraw Amount\n4 : Exit\n");
        scanf("%d",&ch);//input choice
        switch(ch)
        {
            case 1:balance();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:exit(0);
            default:printf("Enter the correct choice");break;
        }
   }
   return 0;
}


