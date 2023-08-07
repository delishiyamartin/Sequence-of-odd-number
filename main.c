/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() 
{ 
    int i, n; 

printf("Print odd numbers till: "); 
scanf("%d", &n); 
printf("All odd numbers from 1 to %d are: \n", n); 
for(i=1; i<=n; i++) 
{ 
if(i%2!=0) 
{ 
    printf("%d\n", i);
} 
    } 
    return 0; 
    }