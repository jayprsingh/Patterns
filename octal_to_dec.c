#include<stdio.h>

void dec_to_oct();
void oct_to_dec();
void main()
{
int ch;
    printf("1.Octal to Decimal\n2.Decimal to Octal\n");
    for(;;)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: oct_to_dec();
            break;
            case 2: dec_to_oct();
            break;
            default: break;
        }
    }

}

void dec_to_oct()
{
    int num,dec,oct=0,rem,base=1;
    printf("Enter the no.:\t");
    scanf("%d",&num);
    dec=num;
    while(num>0)
    {
        rem=num%10;
        oct=oct+rem*base;
        num=num/10;
        base=base*8;
    }
    printf("Decimal No:\t%d\n",dec);
    printf("Octal Equivalent No:\t%d\n",oct);
}

void oct_to_dec()
{
    int num,dec=0,oct,rem,base=1;
    printf("Enter the no.:\t");
    scanf("%d",&num);
    oct=num;
    while(num>0)
    {
        rem=num%8;
        dec=dec+rem*base;
        num=num/8;
        base=base*10;
    }
    printf("Octal No:\t%d\n",oct);
    printf("Decimal Equivalent No:\t%d\n",dec);

}
