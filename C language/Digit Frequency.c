#include <stdio.h> 
int main() 
{ 
    char str[1001]; 
 
    scanf("%s", str); 
    int freq[10] = {0}; 
    int i; 
    for (i = 0; str[i] != '\0'; i++) 
    { 
        if (str[i] >= '0' && str[i] <= '9') 
            freq[str[i] - '0']++; 
    } 

    for (i = 0; i < 10; i++) 
    { 
        printf("%d ", freq[i]); 
    } 
    return 0; 
} 
