#include <stdio.h>
    int riSE (int p, int q){
        int causstatvalue = 0;
        if (p == 1) { //== operatörü eşitlik kontrolü için kullanılır
            if (q == 0) {
                return 0;
            } else if (q == 1) {
                return 1;
            }
        } else if (p == 0) {
                return 1;
        }
    return causstatvalue;
}

int main() {
    int p = 0;
    int q = 0;

    printf("input value of p (1/0)\n");
    scanf("%d", &p);
    printf("input value of q (1/0)\n");
    scanf("%d", &q);
    
    int result = riSE(p, q);
    printf("p → q AKA ¬q → ¬p = %d", result);
}