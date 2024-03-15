#include <stdio.h>
#include <VE.c>

struct yer {
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira1;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira2;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira3;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira4;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira5;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira6;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira7;
    struct {
       int x1;
       int x2;
       int x3;
       int x4;
       int x5;
       int x6;
       int x7;
       int x8;
    } sira8;
};

int main() {
    int p = 0;
    int q = 0;

    printf("input value of p (1/0)\n");
    scanf("%d", &p);
    printf("input value of q (1/0)\n");
    scanf("%d", &q);
    
    int result = riSE(p, q);
    printf("operator cikti = %d", result);
}