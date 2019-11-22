#include<stdio.h>
#include<math.h>

void display(float s)//function to display result Ans
{
printf("Ans: %.2f \n",s);
}

float add(int x,int y)//function to add two numbers
{
    return x+y;
}

float subtract(int x, int y)//function to subtract two numbers
{
    return x-y;
}

float multiply(int x,int y)//function to multiply two numbers
{
    return x*y;
}

float divide(int x,int y)//function to divide one  number by other
{
    if(y!=0) return (float)x/y;
    else return 0.0;
}

float power(int x,int y)//function to find power
{
    return pow(x,y);
}

float squareroot(int x)//function to find square of two numbers
{
    return sqrt(x);
}

int main()
{
    int a,b;
    float ans;
    unsigned char c;
    while(1)
    {
        printf("\nEnter the two numbers : ");//input two numbers
        scanf("%d %d", &a,&b);
        printf("Enter the operation (+,-,*,/,^,s) \t\tPress e to exit\n: ");//input operation
        scanf(" %c",&c);
        switch(c)//switch to entered operation
            {
                case '+': ans=add(a,b);
                                break;
                case '-': ans=subtract(a,b);
                                break;
                case '*': ans=multiply(a,b);
                                break;
                case '/': ans=divide(a,b);
                                break;
                case '^': ans=power(a,b);
                                break;
                case 's': ans=squareroot(a);
                                break;
                case 'e': exit(0);
                default: printf("Invalid Operation\n");
            }
    display(ans);
    }
  return 0;
}
