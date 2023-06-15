#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 100
int main() 
{
   char str[max],f='a';
   int i;
   printf("enter the string to be checked: ");
   scanf("%s",str);
   int lenght = strlen(str);
   if(str[0] == 'a' && str[lenght-1] == 'a')
   {
      printf("Accepted");
   }
    else
	{
      printf("Rejected");
    return 0;
    }
}