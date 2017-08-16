#include<stdio.h>
void bin_to_dec();
void dec_to_bin();

int main()
{
    int ch;
    printf("1.Binary to Decimal\n2.Decimal to Binary\n");
    for(;;)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: bin_to_dec();
            break;
            case 2: dec_to_bin();
            break;
            default: break;
        }
    }

}
//Binary to Decimal:
void bin_to_dec()
{
    int base=1,bin,dec=0,rem,num;
    printf("Enter the no.\n");
    scanf("%d",&num);
    bin=num;
    while(num>0)
    {
        rem=num%10;
        if(rem!=0&&rem!=1)
        {
            printf("Not a Binary number.\n");
            exit(0);
        }
        dec=dec+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("Binary No:\t%d\n",bin);
    printf("Decimal Equivalent No:\t%d\n",dec);

}
//Decimal to Binary:
void dec_to_bin()
{

    int base=1,bin=0,dec,rem,num;
    printf("Enter the no.\n");
    scanf("%d",&num);
    dec=num;
    while(num>0)
    {
        rem=num%2;
        bin=bin+rem*base;
        num=num/2;
        base=base*10;
    }
    printf("Decimal  No:\t%d\n",dec);
    printf("Binary Equivalent No:\t%d\n",bin);

}
