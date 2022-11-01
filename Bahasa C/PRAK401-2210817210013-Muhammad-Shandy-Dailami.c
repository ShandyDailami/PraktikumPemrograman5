#include <stdio.h>

int main(){
    int x = 0;
    do{
        int angka, i;
        char simbol;
        scanf("%d %c", &angka, &simbol);

        for(i = 1; i < 51; i++){
            i % angka == 0 ? printf("%c ", simbol) : printf("%d ", i);
        }
    x++;
    }while(x<=2);
        return 0;
}