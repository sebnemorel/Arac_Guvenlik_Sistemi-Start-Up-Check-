 #include <stdio.h>

 int main(){
   
    float batarya_sicakligi;
    int sarj_yuzdesi;
    char kapi_durumu;
    int fren_pedali;

    printf("--- ELEKTROMOBIL GUVENLIK KONTROLU---\n");

    printf("Batarya Sicakligini Girin : ");
    scanf("%f",&batarya_sicakligi);

    printf("Sarj Yuzdesini Girin (0-100) : ");
    scanf("%d", &sarj_yuzdesi);

    printf("Kapi Durumunu Girin (A: Acik , K: Kapali) : ");
    scanf(" %c", &kapi_durumu);

    printf("Fren Pedali Durumunu Girin (1: Basili , 0 : Degil) : ");
    scanf("%d", &fren_pedali);

    if(batarya_sicakligi < -100 || batarya_sicakligi > 200){
        printf("Batarya sicakligi -100'den kucuk veya 200'den buyuk olamaz.\n");
    }
    else if(sarj_yuzdesi< 0 || sarj_yuzdesi > 100){
        printf("Hatali Sensor Verisi: Sarj %%0'dan kucuk veya %%100'den buyuk olamaz!\n");
    }
    else if(kapi_durumu != 'A'&& kapi_durumu != 'K'){
        printf("Hatali Kapi Durumu Verisi: Kapi durumu acik (A) veya kapali (K) olabilir.\n");
    }

    else if(batarya_sicakligi > 60){
        printf("KRITIK HATA : Motor Asiri Isindi! Surus Engellendi.\n");

    }
    else if(sarj_yuzdesi < 10){
        printf("UYARI: Batarya Kritik Seviyede! Surus Baslatilamaz.\n");
    }
    else if(kapi_durumu == 'A'){
        printf("HATA: Kapilar Acik! Lutfen Kapatiniz.\n ");
    }
    else if(fren_pedali == 0){
        printf("BILGI: Guvenlik icin frene tekrar basarak deneyin.\n");
    }
    else {
        printf("BASARILI: SISTEM HAZIR. MOTOR BASLATILIYOR...\n");
    }




    return 0;
 }