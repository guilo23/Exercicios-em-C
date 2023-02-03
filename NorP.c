#include <stdio.h>

void ft_NorP(){
int i;
    scanf("%d", &i);
    if(i == 0){
        printf("that's a trap\n");
    }
    else if(i > 0){
        printf("P\n");
    }
    else {
        printf("N\n");
    }
}

int main (){
    ft_NorP();
}