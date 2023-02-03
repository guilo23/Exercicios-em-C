#include <unistd.h>

void ft_putchar (char str){
    write(1,&str,1);
}
void ft_putstr(char *tab,int size){ 
    for(int i = size;i > -1;i--){
        ft_putchar(tab[i]);

    }
}
int main(){
char *num1 = "123467";
    int num = 6;
    ft_putstr(num1,num);
    ft_putchar('\n');
}