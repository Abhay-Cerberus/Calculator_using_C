#include<stdio.h>
#include<conio.h>
int add(float a,float b,int ty);
int sub(float a,float b,int ty);
int mul(float a,float b,int ty);
int div(float a,float b,int ty);
int main()
{
    int ch=0,ty=0,ti=0,nc=1;                 //
    char op;                                //     intialization
    float a,b;                             //

    printf("\t\t!!! CALCULATOR !!!\n\n");
    do                 //    it will run at least one time when we use do while loop
    {
        if(nc==1)
        {
            printf("\tEnter the First Number : ");                  //
            scanf("%f",&a);                                        //   taking input 
            printf("\tEnter the Second Number : ");               //          from the user
            scanf("%f",&b);                                      //
        }

	    printf("\nEnter Your Arithmatic Operation (i.e. +, -, *, /) : ");                 //  Taking the type of operation
	    scanf("%s",&op);                                                                 //          which the user want to perform

        do
        {
            printf("\nEnter the type of value you have Entered \n");
            printf("1 for INTEGER TYPE\n2 for DECIMAL TYPE\n => ");
            scanf("%d",&ty);
            if(ty!=1 && ty!=2)
            {
                printf("\tERROR!!  TRY AGAIN!!\n");
            }
        }while(ty!=1 && ty!=2);

	    switch(op)
	    {
			case ('+'):
                add(a,b,ty);
			break;
			case ('-'):
                sub(a,b,ty);
			break;
			case ('*'):
                mul(a,b,ty);
			break;
			case ('/'):
                div(a,b,ty);
			break;
		    default:
			    printf("\nYou have not made a valid choice");
			break;
	    }
        printf("\nDo you want to continue To Calculate?");
        printf("\nIF SO, then Enter 1\n => ");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("\nIF you Want to change the Change the values then Enter 1\n => ");
            scanf("%d",&nc);
        }
    }while(ch==1);
    printf("\n\t\t!!PRESS ANY KEY TO EXIT!!");
    getch();
    return 0;
}
int add(float a,float b,int ty)
{
    float ans;
    ans=a+b;
	if(ty==1)
	{
        printf("%.0f + %.0f = %.0f",a,b,ans);
	}
	else
	{
        printf("%.2f + %.2f = %.2f",a,b,ans);
	}
	return 0;
}
int sub(float a,float b,int ty)
{
    float ans;
    ans=a-b;
	if(ty==1)
	{
        printf("%.0f - %.0f = %.0f",a,b,ans);
	}
	else
	{
        printf("%.2f - %.2f = %.2f",a,b,ans);
	}
	return 0;
}
int div(float a,float b,int ty)
{
    float ans;
    ans=a*b;
	if(ty==1)
	{
        printf("%.0f * %.0f = %.0f",a,b,ans);
	}
	else
	{
        printf("%.2f * %.2f = %.2f",a,b,ans);
	}
	return 0;
}
int mul(float a,float b,int ty)
{
    float ans;
    ans=a/b;
	if(ty==1)
	{
        printf("%.0f / %.0f = %.0f",a,b,ans);
	}
	else
	{
        printf("%.2f / %.2f = %.2f",a,b,ans);
	}
	return 0;
}