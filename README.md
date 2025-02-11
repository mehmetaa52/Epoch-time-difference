# Epoch-time-difference
Bu proje, kullanıcının girdiği iki farklı tarih arasındaki zaman farkını epoch zamanı üzerinden hesaplayan bir C programıdır.
Ek olarak, programın günlük hayattaki bir kullanım senaryosu olan “çalışma süresi hesaplama” versiyonu da eklenmiştir.

 Özellikler
Kullanıcının girdiği iki tarih arasındaki epoch zaman farkını hesaplar
Günlük hayatta çalışma süresi hesaplama için kullanılabilecek bir versiyon içerir
Struct ve union kullanımı örneklenmiştir
 Kurulum & Kullanım

1.Repoyu klonla:

git clone https://github.com/kullanici_adin/epoch-zaman-degisimi.git
cd epoch-zaman-degisimi

2.Kodları derle ve çalıştır:

gcc epoch_fark.c -o epoch_fark
./epoch_fark

3.İlk tarih ve saat bilgisini gir:

YYYY MM DD HH MM SS

4.İkinci tarihi gir veya sistem saatini kullan:

YYYY MM DD HH MM SS

 5.Çıktıyı gör! 

📌 Örnek Çalıştırma Çıktısı

İlk tarihi giriniz:
2010 10 09 14 23 00
İkinci tarihi giriniz:
2024 02 11 10 00 00
İlk tarih epoch zamanı: 1286625780
İkinci tarih epoch zamanı: 1707645600
İki tarih arasındaki fark: 420920820 saniye

Çalışma süresi hesaplama senaryosunda:


İşe giriş saatinizi girin:
08 30 00
Çıkış saatinizi girin:
17 45 00
Toplam çalışma süresi: 9 saat 15 dakika
