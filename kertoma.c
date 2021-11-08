#include <stdio.h>
#include <inttypes.h>

int64_t laske_kertoma(int8_t n);

int main(void){
    int64_t kertoma = 0;
    int8_t luku = 0;
    printf("Syota luku, jonka kertoma lasketaan\n");
    scanf("%d", &luku);
    kertoma = laske_kertoma(luku);
    printf("%lld\n", kertoma);
    return 0;
}

int64_t laske_kertoma(int8_t n){
    int kertoma = 0;
    if(n > 20){
        return -1;
    }
    else{
        int kertoma = n;
        for(int i = 1; i <= n; i++){
            printf("%d kertaa %d on %d\n", kertoma, i, kertoma * i);
            kertoma *= i;
        }
        return kertoma;
    }
}