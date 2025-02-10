
#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini tutan struct
struct DateTime {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};

// Epoch zamanı için union
union EpochTime {
    time_t epoch;
};

// Kullanıcıdan tarih ve saat bilgisini alan fonksiyon
void getDateTime(struct DateTime *dt) {
    printf("Yil, ay, gun, saat, dakika, saniye giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &dt->year, &dt->month, &dt->day, &dt->hour, &dt->minute, &dt->second);
}

// Struct'tan time_t (epoch) değerine dönüştüren fonksiyon
time_t convertToEpoch(struct DateTime dt) {
    struct tm t;
    t.tm_year = dt.year - 1900; // tm_year, 1900'dan itibaren başlar
    t.tm_mon = dt.month - 1; // tm_mon, 0'dan başlar (Ocak = 0)
    t.tm_mday = dt.day;
    t.tm_hour = dt.hour;
    t.tm_min = dt.minute;
    t.tm_sec = dt.second;
    t.tm_isdst = -1; // Gün ışığından yararlanma bilinmiyor

    return mktime(&t); // time_t olarak döndürür
}

int main() {
    struct DateTime dt1, dt2;
    union EpochTime e1, e2;

    // Kullanıcıdan iki tarih al
    printf("Ilk tarihi giriniz:\n");
    getDateTime(&dt1);
    printf("Ikinci tarihi giriniz:\n");
    getDateTime(&dt2);

    // Epoch zamanlarını hesapla
    e1.epoch = convertToEpoch(dt1);
    e2.epoch = convertToEpoch(dt2);

    // Zaman farkını hesapla
    double diff = difftime(e2.epoch, e1.epoch);

    // Sonuçları ekrana yazdır
    printf("Ilk tarih epoch zamani: %ld\n", e1.epoch);
    printf("Ikinci tarih epoch zamani: %ld\n", e2.epoch);
    printf("Iki tarih arasindaki fark: %.0f saniye\n", diff);

    return 0;
}
