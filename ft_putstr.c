#include <unistd.h>
void ft_putchar (char str){
    write(1,&str,1);
}
void ft_putstr(char *H){ 
    for(int i = 0;H[i] != '\0'; i++){
        ft_putchar(H[i]);
    }
}
int main(){
    ft_putstr("rain");
    ft_putchar('\n');
}