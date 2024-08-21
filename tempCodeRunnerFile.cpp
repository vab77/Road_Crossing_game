#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],str2[100];
    int i= 0;
	
       
       fgets(str, 100, stdin);
       fgets(str2,100,stdin);
       
    while(str[i]!='\0')
    {
        i++;
    }
    printf( "%d\n", i-1);
    
    while(str2[i]!='\0')
    {
        i++;
    }
    printf( "%d\n", i-1);
    
    return 0;
    
    
    
}