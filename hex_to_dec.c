#include<stdio.h>

void hex_to_dec();
void dec_to_hex();

int main()
{
int ch;
    printf("1.Decimal to Hexadecimal\n2.Hexadecimal to Decimal\n");
    for(;;)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: hex_to_dec();
            break;
            case 2: dec_to_hex();
            break;
            default: break;
        }
    }

}
//Binary to Decimal:
void hex_to_dec()
{
    int base=1,hex,dec=0,rem,num;
    printf("Enter the no.\n");
    scanf("%d",&num);
    hex=num;
    while(num>0)
    {
        rem=num%10;
       /* if(rem!=0&&rem!=1)
        {
            printf("Not a Binary number.\n");
            exit(0);
        }   */
        dec=dec+rem*base;
        num=num/10;
        base=base*16;
    }
    printf("Binary No:\t%d\n",hex);
    printf("Hexadecimal Equivalent No:\t%d\n",dec);

}
//Decimal to Binary:
void dec_to_hex()
{

    int base=1,hex=0,dec,rem,num;
    printf("Enter the no.\n");
    scanf("%d",&num);
    dec=num;
    while(num>0)
    {
        rem=num%16;
        hex=hex+rem*base;
        num=num/16;
        base=base*10;
    }
    printf("Decimal  No:\t%d\n",dec);
    printf("Hexadecimal Equivalent No:\t%d\n",hex);

}

