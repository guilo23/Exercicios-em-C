#include <unistd.h>

void ft_putchar1(char G){
    write(1, &G, 1);
}
void ft_putn(int j){ 
    if(j == -2147483648){
        write(1,"-2147483648",11);
        return;
    }
    if(j<0){
        ft_putchar1('-');
        j *= -1;
    }
    if(j < 10){
        ft_putchar1(j+48);
    }
    else{
        ft_putn(j/10);
        ft_putn(j%10);
    }
}
