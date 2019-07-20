#include <stdio.h>

void add ();
void sub ();
void mul ();
void div ();
void sqr ();
void prime_factorization ();
void factorial ();
void sel_func (int);

int main (void)
{
        int s;
    
        Input:
           printf("Input a number [ +(1), -(2), *(3), /(4), ^(5), !(6) ] : ");
           scanf("%d",&s);
         
           if (s > 6 | s < 1){
                  printf("Please input again\n");
                  goto Input;
           }
           sel_func (s);
    
           goto Input;
}

void sel_func (int s)
{
        void (*fptr)(void);
        switch (s){
        case 1:
                fptr = add;
                break;
        case 2:
                fptr = sub;
                break;
        case 3:
                fptr = mul;
                break;
        case 4:
                fptr = div;
                break;
        case 5:
                fptr = sqr;
                break;
        case 6:
                fptr = factorial;
                break;        
        }
    
        fptr();
}

void add ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

void mul ()
{
        int a, b;
      
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a * b);
}

void div ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a / b);
}

void sqr (){
        int exp, base, i;
        int result = 1;
    
        printf("Input base : ");
        scanf("%d",&base);
        printf("Input exp : ");
        scanf("%d",&exp);
    
        for (i = 0; i < exp; ++i)
                result *= base;
            
        printf("%d^%d = %d\n",
                    base,exp,result);
}

void factorial ()
{
        int a, b;
        int sum = 1;
    
        printf("Input a number : ");
        scanf("%d", &b);
    
        for (a = 1; a <= b; ++a)
                    sum *= a;
        
        printf("%d!=%d\n",b,sum);
}
