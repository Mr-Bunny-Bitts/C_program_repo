/**********************************************************************

Name and ID: Shivam Vishwakarma(144188)

Date: 09/06/2021

Program Topic: Conditional Statements

Program Details: Even or Odd
**************************************************************************/


#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number you want to check Even or Odd:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is Even",num);
    else
        printf("%d is Odd",num);
    return 0;
}
