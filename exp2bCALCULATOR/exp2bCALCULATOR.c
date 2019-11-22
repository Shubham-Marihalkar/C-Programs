#include<stdio.h>

//function declarations
void display(float s);
float add(int x,int y);
float subtract(int x,int y);
float multiply(int x,int y);
float divide(int x,int y);

int main()
{
int a,b;
    float ans;
    unsigned char c;
    while(1)
    {
        printf("\nenter the two numbers:");//Input two numbers
        scanf("%d%d",&a,&b);
        printf("enter the arithmetic operation (+,-,*,/) \t\t and e for exit \n:");//Input operation
        scanf(" %c",&c);
            float (*ptr_op)(int,int);//Declaration of the function pointer for operation
            void (*ptr_disp)(float);//Declaration of the function pointer for display
        ptr_disp=display;

         switch(c)//switch to assign function address to the function pointer
        {
            case '+':ptr_op=add;
                    break;
            case '-':ptr_op=subtract;
                    break;
            case '*':ptr_op=multiply;
                    break;
            case '/':ptr_op=divide;
                    break;
            default:printf("invalid operator");
        }

        ans=(*ptr_op)(a,b);//call function by function pointer to calculate the answer
            (*ptr_disp)(ans);//call function by function pointer to display result answer
    }
    return 0;

}


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



