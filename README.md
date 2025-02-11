# Epoch-time-difference
Bu proje, kullanıcının girdiği iki farklı tarih arasındaki zaman farkını epoch zamanı üzerinden hesaplayan bir C programıdır.
Ek olarak, programın günlük hayattaki bir kullanım senaryosu olan “çalışma süresi hesaplama” versiyonu da eklenmiştir.
# Epoch nedir?
Epoch bilgisayarlarda zaman ölçmek için kullanılan bir referans noktasıdır.Başlangıcı 1 Ocak 1970, 00:00:00 UTC tarihidir.Bilgisayarlar ve birçok programlama dili, zamanı bu tarihten itibaren geçen saniye cinsinden ölçer. Bu sayıya epoch time veya Unix timestamp denir.
# Özellikler
Kullanıcının girdiği iki tarih arasındaki epoch zaman farkını hesaplar
Günlük hayatta çalışma süresi hesaplama için kullanılabilecek bir versiyon içerir
Struct ve union kullanımı örneklenmiştir

# Kullanım

1.Kodları derle ve çalıştır


2.İlk tarih ve saat bilgisini gir:

(Yıl ay gün saat dakika saniye şeklinde girilmelidir.)

YYYY MM DD HH MM SS

3.İkinci tarihi gir veya sistem saatini kullan:

YYYY MM DD HH MM SS

4.Çıktıyı gör! 

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
