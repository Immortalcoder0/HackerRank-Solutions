#include <stdio.h> 
int main()  
{ 
    char str[1001]; 
  
    scanf("%[^\n]s", str); 
   
    for (int i = 0; str[i] != '\0'; i++) 
    { 
        if (str[i] == ' ') printf("\n"); 
        else printf("%c", str[i]); 
    } 
} 
