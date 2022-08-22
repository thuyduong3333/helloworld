#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>  

int main() 
{ 
    char s[]="STACKOVERFLOW";
    char s1[200];
    printf("Enter the string to be checked\n");//enter the input string
    scanf("%s",s1);
    if(strcmp(s,s1)==0)//compare both the strings  
    {
        printf("Both the Strings match\n"); 
    } 
    else
    {
        printf("Entered String does not match\n");  
    } 
    system("pause");  
} 
