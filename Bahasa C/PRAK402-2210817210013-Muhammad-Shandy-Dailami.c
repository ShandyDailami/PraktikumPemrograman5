#include <stdio.h>

int main() {
    int x = 0;
    do{
        int angka, i;
        scanf("%d", &angka);

        for(i = 1; i <= angka; i++){
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
        for(i = angka; i >= 1; i--){
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    x++;
    }while(x<=2);
    return 0;
}