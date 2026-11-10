#include <stdio.h>

void print_stars()
{
    for(int w = 0; w < 30; w++)
        printf("*");

        printf("\n");
} 

void print_stars_V2()
{
    for(int h = 0; h < 30; h++)
        printf("*");

        printf("\n");
}



int main(void)
{
    for(int h=0; h<3; h++){
            for(int w=0; w<5; w++) {
            print_stars()
    }
    }
    return 0;
}