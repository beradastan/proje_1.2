#include <stdio.h>
#include <unistd.h>// usleep, sleep fonksiyonunun çalışmasını sağlar
#include <stdlib.h>// system fonksiyonunun çalışmasını sağlıyor
#include "soru_cevap.c"//soru_cevap.c dosyasını bu dosyaya bağlıyor
#define max_satir 100
#define max_sutun 50

void main(){

    FILE *sorular;
    char karakter[max_satir][max_sutun];
    int i, satir = 0;

    //sorular değişkeni sorular.txt dosyasını okuma olarak açıyor

    sorular = fopen("sorular.txt","r");

    //sorular.txt dosyasında bulunan verileri satır satır karakter dizisine aktarıyor

    while(!feof(sorular) && !ferror(sorular)){

        if(fgets(karakter[satir], max_sutun, sorular) != NULL){

            satir++;

        }

    }

    //ekrandaki yazıları sildiren fonksiyon

    system("cls");

    //ekrandaki yazıların rengini değiştiren fonksiyon

    system("color 4");

    //çizgilerin yanıp sönmesini sağlayan kısım

    for(i = 0; i < 5; i++){

        printf("-------------------------------------------\n");
        printf("Olum yasini tahmin eden teste hosgeldiniz!!\n");
        printf("-------------------------------------------\n");

        //çalışmakta olan dosyayı durdurma fonksiyonu
        //girilen değer mikrosaniye olarak alınmakta
        //mikrosaniye = saniye*10^-6

        usleep(500000);

        system("cls");

        printf("\n");
        printf("Olum yasini tahmin eden teste hosgeldiniz!!\n\n");

        usleep(500000);

        system("cls");

    }

    //soru_cevap fonksiyonuna karakter dizisini gönderiyor

    soru_cevap(karakter);

    //açık olan dosyayı kapatan fonksiyon

    fclose(sorular);

}