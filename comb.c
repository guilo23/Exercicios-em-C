#include <stdio.h>

void ft_comb(void){
    for(int i = 0; i <= 9; i++){
        for(int J = 0; J <= 9; J++){
            for(int M = 0; M <= 9; M++){
                if(i != J && J != M && M != i ){
                    printf("%d %d %d\n",i , J, M);
                }
            }
        }
    } 
}
int main(){
    ft_comb();
}