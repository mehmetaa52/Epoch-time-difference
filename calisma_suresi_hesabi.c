#include <stdio.h>
#include <stdlib.h>
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
void getDateTime(struct DateTime *dt, const char *message) {
    printf("%s (YYYY MM DD HH MM SS): ", message);
    
    if (scanf("%d %d %d %d %d %d", &dt->year, &dt->month, &dt->day, 
              &dt->hour, &dt->minute, &dt->second) != 6) {
        printf("Hatali giris! Lutfen tekrar deneyin.\n");
        exit(1);
    }
}

// Struct'tan time_t (epoch) değerine dönüştüren fonksiyon
time_t convertToEpoch(struct DateTime dt) {
    struct tm t;
    t.tm_year = dt.year - 1900;
    t.tm_mon = dt.month - 1;
    t.tm_mday = dt.day;
    t.tm_hour = dt.hour;
    t.tm_min = dt.minute;
    t.tm_sec = dt.second;
    t.tm_isdst = -1;

    return mktime(&t);
}

int main() {
    struct DateTime startTime, endTime;
    union EpochTime eStart, eEnd;

    // Kullanıcıdan giriş ve çıkış saatini al
    getDateTime(&startTime, "Ise giris tarih ve saatini giriniz");
    getDateTime(&endTime, "Isten cikis tarih ve saatini giriniz");

    // Epoch zamanlarını hesapla
    eStart.epoch = convertToEpoch(startTime);
    eEnd.epoch = convertToEpoch(endTime);

    // Zaman farkını hesapla
    double diff = difftime(eEnd.epoch, eStart.epoch);

    // Farkı saat, dakika, saniye olarak göster
    int hours = (int)(diff / 3600);
    int minutes = (int)((diff - (hours * 3600)) / 60);
    int seconds = (int)(diff - (hours * 3600) - (minutes * 60));

    // Sonuçları ekrana yazdır
    printf("\nCalisma suresi:\n");
    printf("Toplam: %.0f saniye\n", diff);
    printf("Saat: %d, Dakika: %d, Saniye: %d\n", hours, minutes, seconds);

    return 0;
}
