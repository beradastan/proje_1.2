#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define max_satir 100
#define max_sutun 50

void yas_hesaplama(int sonuc, int yas){

    FILE *hesaplama;
    char karakter[max_satir][max_sutun];
    int i, j, satir = 0;

    hesaplama = fopen("hesaplama.txt","r");

    while(!feof(hesaplama) && !ferror(hesaplama)){

        if(fgets(karakter[satir], max_sutun, hesaplama) != NULL){

            satir++;

        }

    }

    system("color 7");

    //hesaplaniyor yazısını kaydıran kısım

    for(i = 0; i < 61; i++){

        printf("%s", karakter[i]);
        usleep(60000);
        system("cls");

    }

    system("color 7");

    //kurukafanın yanıp sönmesini sağlayan kısım

    for(j = 0; j < 5; j++){

        system("cls");

        if(sonuc > 1180 && sonuc <= 1310){

            if(yas < 50){

                printf("Tahmini olum yasiniz 50'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        }
        else if(sonuc > 1050 && sonuc <= 1180){

            if(yas < 55){

                printf("Tahmini olum yasiniz 55'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        }
        else if(sonuc > 925 && sonuc <= 1050){

            if(yas < 60){

                printf("Tahmini olum yasiniz 60'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        }
        else if(sonuc > 800 && sonuc <= 925){

            if(yas < 65){

                printf("Tahmini olum yasiniz 65'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        } 
        else if(sonuc > 665 && sonuc <= 800){

            if(yas < 70){

                printf("Tahmini olum yasiniz 70'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        } 
        else if(sonuc > 550 && sonuc <= 665){

            if(yas < 75){

                printf("Tahmini olum yasiniz 75'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        } 
        else if(sonuc > 425 && sonuc <= 550){

            if(yas < 80){

                printf("Tahmini olum yasiniz 80'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        } 
        else if(sonuc > 300 && sonuc <= 425){

            if(yas < 85){

                printf("Tahmini olum yasiniz 85'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        }
        else if(sonuc > 175 && sonuc <= 300){

            if(yas < 90){

                printf("Tahmini olum yasiniz 90'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        }
        else if(sonuc >= 90 && sonuc <= 175){

            if(yas < 95){

                printf("Tahmini olum yasiniz 95'dir!!");

            }
            else{

                printf("Tahmini olarak 2 yil icinde vefat edeceksiniz!!");

            }

        }

        printf("\n");

        //tahmini ölüm yaşını yazdıktan sonra 0,1 saniye bekliyor

        usleep(100000);

        //kurukafayı yazdırıyor

        for(i = 61; i < 69; i++){

            printf("%s", karakter[i]);

        }

        printf("\n");

        //kurukafanın yazılı olarak 0,5 saniye bekliyor

        usleep(500000);

        //for döngüsüne gidip ekranı sildiriyor

    }

    fclose(hesaplama);

}