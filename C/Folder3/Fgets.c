#include<stdio.h>
#include<math.h>

int main()
{
//scanf will only take input until the next space. if you want to separate words with a " " , use fgets function

char name [20] ;
printf("\nPlease Enter your full name: ");
fgets(name , sizeof(name), stdin);
//scanf("%s",  name);
printf("Your name is %s" , name);
float log_  = log(10);
printf("Log of 10 is %f" , log_);
while (0)
/* this loop will be used to execute a code when the condition is false instead of true; so it will be able to eliminate errors */
{
    printf("This will not be printed\n");
}
 if (isStudent){
printf("you are a student\n");
else 
{
    printf("you are not a student\n");
}
 }


return 0;
}

/* output ---- d:\CS\C\Folder2>cd "d:\CS\C\Folder3\" && gcc Fgets.c -o Fgets && "d:\CS\C\Folder3\"Fgets
Please Enter your full name: Ajitesh Sophat
Your name is Ajitesh
d:\CS\C\Folder3>*/
// gets for one fgets for more
