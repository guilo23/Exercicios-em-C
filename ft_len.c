#include <unistd.h>

void ft_putn(int j);

void ft_putchar (char str){
    write(1,&str,1);
}
void ft_putstr(char *H){ 
    int i = 0;
    while(H[i]){
        ft_putchar(H[i]);
        i++;
    }
        ft_putchar('\n');
        ft_putn(i);

        
}
int main(){
    ft_putstr("jdjjjifiaejjijkpakopkopfjkojpoiaejpoifjpej");
    ft_putchar('\n');
}