// lets check some students grades
#include<stdio.h>
int main()
{
    int marks ;
    printf("Please enter your marks:");
    scanf("%d", &marks);
    
    if (marks>100 || marks<0)
    {printf("Please enter valid marks!");
    scanf("%d", &marks);}
    else if (marks >= 90)
    {printf("Grade A+");}
    else if (marks >= 80)
    {printf("Grade A");}
    else if (marks >= 70)
    {printf("Grade B");}
    else if (marks >= 60)
    {printf("Grade C");}
    else if (marks >= 50)
    {printf("Grade D");}
    else if (marks >= 40)
    {printf("Grade E");}
    else 
    {printf("Fail!!!");}
    return 0;
}





