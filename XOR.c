#include <stdio.h>

int riXOR (int p, int q){
    int xorDeger = 0;
    if (p == 0) {
        if (q == 0) {
            return 0;
        } else if (q == 1) {
            return 1;
        }
    } else if (p == 1) {
        if (q == 0) {
            return 1;
        } else if (q == 1) {
            return 0;
        }
    }
}

int main() {
    int p = 0;
    int q = 0;

    printf("input value of p (1/0)\n");
    scanf("%d", &p);
    printf("input value of q (1/0)\n");
    scanf("%d", &q);
    
    int result = riXOR(p, q);
    printf("p ⊻ q = %d", result);
}