# ARAÇ GÜVENLİK KONTROL SİSTEMİ(START-UP CHECK)

## Proje Hakkında

Bu proje elektromobil aracının yarış öncesi güvenlik protokollerini denetler. Motor çalıştırılmadan önce batarya yüzdesini, şarj yüzdesini, kapı durumunu ve fren durumunu kontrol eder.Hata olup olmama durumuna göre sürüşü onaylar veya engeller. C programı ile yazılmıştır.


## Kurulum ve Çalıştırma

 Bu projenin çalıştırılabilmesi için bilgisayarınızda bir C derleyicisinin (GCC gibi) kurulu olması gerekmektedir.

### Kodun Derlenmesi
 Terminali (komut istemcisini) açın ve projenin bulunduğu dizinde aşağıdaki komutu çalıştırın:
```
gcc main.c -o check

```
### Programın Çalıştırılması
Derleme bittikten sonra programı başlatmak için:
- Windows: `check.exe`
- Linux/Mac: `./check`

## Örnek Kullanım(Terminal Çıktısı)

### Senaryo 1: Başarılı Başlatma
```
--- ELEKTROMOBIL GUVENLIK KONTROLU---
Batarya Sicakligini Girin : 35.5
Sarj Yuzdesini Girin (0-100) : 80
Kapi Durumunu Girin (A: Acik , K: Kapali) : K
Fren Pedali Durumunu Girin (1: Basili , 0 : Degil) : 1
BASARILI: SISTEM HAZIR. MOTOR BASLATILIYOR...
```

### Senaryo 2: Yüksek Sıcaklık

```
--- ELEKTROMOBIL GUVENLIK KONTROLU---
Batarya Sicakligini Girin : 65.0
Sarj Yuzdesini Girin (0-100) : 50
Kapi Durumunu Girin (A: Acik , K: Kapali) : K
Fren Pedali Durumunu Girin (1: Basili , 0 : Degil) : 1
KRITIK HATA : Motor Asiri Isindi! Surus Engellendi.
```

### Senaryo 3: Hatalı Sensör Verisi(Geçersiz Sarj)
```
--- ELEKTROMOBIL GUVENLIK KONTROLU---
Batarya Sicakligini Girin : 25.0
Sarj Yuzdesini Girin (0-100) : 150
Hatali Sensor Verisi: Sarj %0'dan kucuk veya %100'den buyuk olamaz!
```











