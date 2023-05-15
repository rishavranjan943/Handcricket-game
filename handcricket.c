#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
int cricket()
{
    int sum=0;
    while(1)
    {
        int num,comp;
        printf("Enter the run you want to score in this ball : ");
        scanf("%d",&num);
        if(num > 0 &&  num < 7)
        {
            srand(time(0));
            comp=rand() % 1000;
            if(comp==num)
                return sum;
            sum=sum+num;
            if(sum>=50)
                return sum;
        }
        else
            return -1;
    }
}
int main()
{
    printf("Welcome to hand cricket, it's you vs computer\n");
    printf("You can score any number between 1 to 6 and if number entered by you and computer matches you will be declared out\n");
    printf("You have only 1 wicket\n");
    printf("For winning match target is 50\n");
    char ch;
    do
    {
        int sum=cricket();
        if(sum >= 50)
            printf("You win");
        else
        {
            if(sum==-1)
                printf("You entered something unexpected\n");
            else
                printf("Better luck next time you are out\n");
        }
        printf("If you want to try one more time press y or Y : ");
        scanf(" %c",&ch);
    } while(ch=='y' || ch=='Y');
}