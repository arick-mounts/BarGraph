#include <stdio.h>

/*
 * This program takes five inputs from the user and produces a bar graph out of '#'
 * C @ TCC
 * Arick Mounts 
 */

void bargraph (int array[], int array_size);

int main(void){
    int num[5];
    printf("Please enter 5 inputs between 0 and 20 for my bar graph\n");
    scanf("%d %d %d %d %d",&num[0], &num[1], &num[2], &num[3], &num[4]);
    bargraph(num,5);
}

void bargraph(int array[], int array_size){
    for (int count = 20; count>0; count--){
        for (int count2 = 0; count2<array_size; count2++)
        if (array[count2]>=count){
            printf("## ");
        }
        else
            printf("   ");
        
        putchar('\n');
    }
    
    
}