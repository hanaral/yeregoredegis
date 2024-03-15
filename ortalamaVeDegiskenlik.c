#include <stdio.h>

float ortalamaHesap(float verilerKumesi[], int elemanSayısı) {
    float toplam = 0.0;
    for (int dizim = 0; dizim < elemanSayısı; dizim++) {
        toplam += verilerKumesi[dizim];
    }
    return toplam / elemanSayısı;
}

void değişkenlikHesap(float verilerKumesi[], int elemanSayısı) {
    float ortalama = ortalamaDeger(verilerKumesi, elemanSayısı);
    float sqrFarkToplami = 0.0;

    for (int dizim = 0; dizim < elemanSayısı; dizim++) {
        float fark = verilerKumesi[dizim] - ortalama;
        sqrFarkToplami += fark * fark;
    }

    float degiskenlik = sqrFarkToplami / elemanSayısı;

    for (int dizim = 0; dizim < elemanSayısı; dizim++) {
        float fark = verilerKumesi[dizim] - ortalama;
        printf("veriler kumesi[%d]:\n elemanSayısı variance: %f\n elemanSayısı", dizim, fark * fark);
    }
}