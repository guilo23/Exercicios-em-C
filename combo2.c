#include <stdio.h>

void ft_comb(void){
    for(int i = 0; i <= 99; i++){
        for(int J = 1; J <= 99; J++){
            if(i != J){
                printf("%d %d\n",J , i);
            }
        }
    }
}
int main(){
    ft_comb();
}