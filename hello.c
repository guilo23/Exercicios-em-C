#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char G){
    write(1, &G, 1);
}
void ft_print_hellworld(){
    char *H;
    //H = malloc(12);
    H = "hello world";
    for(int i = 0; H[i] !='\0'; i++){
        ft_putchar(H[i]);
    }
}
int main()
{
    ft_print_hellworld();
    printf("\n");
}