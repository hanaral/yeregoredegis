#include <stdio.h>

int riVE (int p, int q){
    int conjstatvalue = 0;
    if (p == 1) {
        if (q == 0) {
            return 0;
        } else if (q == 1) {
            return 1;
        }
    } else if (p == 0) {
            return 0;
    }
    return conjstatvalue;
}