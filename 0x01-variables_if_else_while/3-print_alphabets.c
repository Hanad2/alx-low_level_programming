#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{       
        
        char alp[52]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;
        for(i=0;i<52;i++){
                puthcar(alp[i]);
        }
        putcher('\n')
        return (0);
}
