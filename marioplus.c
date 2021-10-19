#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int h;
    do
    {
        h = get_int("Height: "); 
    }
    while(h<=0||h>8);
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(i+j<h-1)
                printf(" ");
            else
            {
                printf("#");
            }
        } 
        printf("  ");
        for(int k=0; k<=i ; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
