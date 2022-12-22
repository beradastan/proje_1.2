#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "yas_hesaplama.c"
#define max_satir 100
#define max_sutun 50

void soru_cevap(char karakter[max_satir][max_sutun]){

    FILE *yonlendirme;
    char cevap[15], karakter0[max_satir][max_sutun];
    int sonuc = 0, i, satir = 0, yas;

    yonlendirme = fopen("yonlendirme.txt","r");

    while(!feof(yonlendirme) && !ferror(yonlendirme)){

        if(fgets(karakter0[satir], max_sutun, yonlendirme) != NULL){

            satir++;

        }

    }

    system("color 1");

    do{

        //satır satır alınan yazıları yazdırma

        for(i = 0; i < 1; i++){

            printf("%s", karakter[i]);

        }
        
        scanf("%d", &yas);

        if(yas < 1 || yas > 150){

            printf("Yanlis deger girdiniz!!\n");

            //çalışmakta olan dosyayı durdurma fonksiyonu
            //girilen değer saniye olarak alınmakta
            
            sleep(1);

            system("cls");

            //yonlendiriliyorsunuz yazısını kaydıran kısım

            for(i = 0; i < 48; i++){

                printf("%s", karakter0[i]);
                usleep(40000);
                system("cls");

            }

        }

    }
    while(yas < 1 || yas > 150);

    system("cls");

    system("color 2");

    do{

        for(i = 1; i < 6; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[0]);

        switch(cevap[0]){

            case 1:
                sonuc += 50;
                break;
            case 2:
                sonuc += 40;
                break;
            case 3:
                sonuc += 30;
                break;
            case 4: 
                sonuc += 20;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");

                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;
            
        }

        system("cls");

    }
    while(cevap[0] < 1 || cevap[0] > 4);
    
    system("color 3");

    do{

        for(i = 6; i < 12; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[1]);

        switch(cevap[1]){

            case 1:
                sonuc += 60;
                break;
            case 2:
                sonuc += 80;
                break;
            case 3:
                sonuc += 20;
                break;
            case 4:
                sonuc += 40;
                break;
            case 5:
                sonuc += 100;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;
        
        }

        system("cls");

    }
    while(cevap[1] < 1 || cevap[1] > 5);

    system("color 4");

    do{

        for(i = 12; i < 15; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[2]);

        if(cevap[2] == 1){

            system("cls");

            do{

                printf("Ne siklikla sigara icersin?\n");
                printf("1-) Haftada 1 paketten az\n");
                printf("2-) Haftada 2-4 paket\n");
                printf("3-) Haftada 5-7 paket\n");
                printf("4-) Haftada 7 paketten fazla\n");
                scanf("%d", &cevap[3]);

                switch(cevap[3]){

                    case 1:
                        sonuc += 40;
                        break;
                    case 2:
                        sonuc += 60;
                        break;
                    case 3:
                        sonuc += 120;
                        break;
                    case 4:
                        sonuc += 200;
                        break;
                    default:
                        printf("Yanlis deger girdiniz!!\n");
                        sleep(1);

                        system("cls");

                        for(i = 0; i < 48; i++){

                            printf("%s", karakter0[i]);
                            usleep(40000);
                            system("cls");

                        }
                        break;

                }

                system("cls");
                
            }
            while(cevap[3] < 1 || cevap[3] > 4);

        }
        else if(cevap[2] == 2){

            do{

                system("cls");

                printf("Sigara icilen ortamlarda bulunur musun?\n");
                printf("1-) Evet\n");
                printf("2-) Hayir\n");
                scanf("%d", &cevap[4]);

                if(cevap[4] == 1){

                    sonuc += 20;

                }
                else if(cevap[4] == 2);
                else{

                    printf("Yanlis deger girdiniz!!\n");
                    sleep(1);

                    system("cls");

                    for(i = 0; i < 48; i++){

                        printf("%s", karakter0[i]);
                        usleep(40000);
                        system("cls");

                    }

                }

            }
            while(cevap[4] < 1 || cevap[4] > 2);

        }
        else{

            printf("Yanlis deger girdiniz!!\n");
            sleep(1);

            system("cls");

            for(i = 0; i < 48; i++){

                printf("%s", karakter0[i]);
                usleep(40000);
                system("cls");

            }

        }

        system("cls");
        
    }
    while(cevap[2] < 1 || cevap[2] > 2);

    system("color 5");

    do{

        for(i = 15; i < 18; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[5]);

        if(cevap[5] == 1){

            do{

                system("cls");

                printf("Ne siklikla alkol tuketirsin?\n");
                printf("1-) Ayda 1-2 defa\n");
                printf("2-) Haftada 1-2 defa\n");
                printf("3-) Her gun\n");
                scanf("%d", &cevap[6]);
                
                switch(cevap[6]){

                    case 1:
                        sonuc += 40;
                    case 2:
                        sonuc += 80;
                    case 3:
                        sonuc += 150;
                        break;
                    default:
                        printf("Yanlis deger girdiniz!!\n");
                        sleep(1);

                        system("cls");

                        for(i = 0; i < 48; i++){

                            printf("%s", karakter0[i]);
                            usleep(40000);
                            system("cls");

                        }
                        break;

                }

            }
            while(cevap[6] < 1 || cevap[6] > 3);

            system("cls");

        }
        else if(cevap[5] == 2);
        else{

            printf("Yanlis deger girdiniz!!\n");
            sleep(1);

            system("cls");

            for(i = 0; i < 48; i++){

                printf("%s", karakter0[i]);
                usleep(40000);
                system("cls");

            }

        }

        system("cls");

    }
    while(cevap[5] < 1 || cevap[5] > 2);
    
    system("color 6");
    
    do{

        for(i = 18; i < 23; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[7]);

        switch(cevap[7]){

            case 1:
                sonuc += 80;
                break;
            case 2:
                sonuc += 50;
                break;
            case 3:
                sonuc += 30;
                break;
            case 4:
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;

        }

        system("cls");

    }
    while(cevap[7] < 1 || cevap[7] > 4);

    system("color 1");

    do{

        for(i = 23; i < 27; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[8]);

        switch(cevap[8]){

            case 1:
                sonuc += 80;
                break;
            case 2:
                sonuc += 50;
                break;
            case 3:
                sonuc += 10;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;
        
        }

        system("cls");

    }
    while(cevap[8] < 1 || cevap[8] > 3);

    system("color 2");
    
    do{

        for(i = 27; i < 31; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[9]);

        switch(cevap[9]){

            case 1:
                sonuc += 300;
                break;
            case 2:
                break;
            case 3:
                sonuc += 30;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;

        }

        system("cls");

    }
    while(cevap[9] < 1 || cevap[9] > 3);

    system("color 3");

    do{

        for(i = 31; i < 35; i++){

            printf("%s", karakter[i]);

        }
       
        scanf("%d", &cevap[10]);

        switch(cevap[10]){

            case 1:
                sonuc += 120;
                break;
            case 2:
                sonuc += 50;
                break;
            case 3:
                sonuc += 20;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;

        }

        system("cls");

    }
    while(cevap[10] < 1 || cevap[10] > 3);

    system("color 4");

    do{

        for(i = 35; i < 40; i++){

            printf("%s", karakter[i]);

        }

        scanf("%d", &cevap[11]);

        switch(cevap[11]){

            case 1:
                sonuc += 20;
                break;
            case 2:
                sonuc += 40;
                break;
            case 3:
                sonuc += 60;
                break;
            case 4:
                sonuc += 100;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;

        }

        system("cls");

    }
    while(cevap[11] < 1 || cevap[11] > 4);

    system("color 5");

    do{

        for(i = 40; i < 45; i++){

            printf("%s", karakter[i]);

        }
        
        printf("\n");

        scanf("%d", &cevap[12]);

        switch(cevap[12]){

            case 1:
                sonuc += 100;
                break;
            case 2:
                break;
            case 3:
                sonuc += 70;
                break;
            case 4:
                sonuc += 130;
                break;
            default:
                printf("Yanlis deger girdiniz!!\n");
                sleep(1);

                system("cls");

                for(i = 0; i < 48; i++){

                    printf("%s", karakter0[i]);
                    usleep(40000);
                    system("cls");

                }
                break;

        }

        system("cls");

    }
    while(cevap[12] < 1 || cevap[12] > 4);

    yas_hesaplama(sonuc, yas);

    fclose(yonlendirme);

}