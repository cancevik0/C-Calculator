#include <stdio.h>

double toplama(double a, double b) { return a + b; }
double cikarma(double a, double b) { return a - b; }
double carpma(double a, double b) { return a * b; }
double bolme(double a, double b) { return b != 0 ? a / b : 0; } 

int main() {
    char devam;
    
    do {
        int secim;
        double sayi1, sayi2, sonuc;

        printf("\nBir işlem seçin : \n");
        printf("1 : Toplama işlemi (+) \n");
        printf("2 : Çıkarma işlemi (-) \n");    
        printf("3 : Çarpma işlemi (*) \n");
        printf("4 : Bölme işlemi (/) \n");
        
        printf("Seçilen işlem : ");
        scanf("%d", &secim);

        if (secim < 1 || secim > 4) {
            printf("Geçersiz işlem seçildi.\n");
            continue; 
        }

        printf("İlk sayıyı girin : ");
        scanf("%lf", &sayi1);
        printf("İkinci sayıyı girin : ");
        scanf("%lf", &sayi2);

        switch (secim) {
            case 1: sonuc = toplama(sayi1, sayi2); break;
            case 2: sonuc = cikarma(sayi1, sayi2); break;
            case 3: sonuc = carpma(sayi1, sayi2); break;
            case 4: 
                if (sayi2 == 0) {
                    printf("Hata: Sıfıra bölme yapılamaz.\n");
                    continue;
                }
                sonuc = bolme(sayi1, sayi2);
                break;
        }

        printf("Sonuç: %.2lf\n", sonuc);

        printf("Yeni bir işlem yapmak ister misiniz ? (E/H): ");
        scanf(" %c", &devam);

    } while (devam == 'E' || devam == 'e');

    printf("Program sonlandırıldı.\n");
    return 0;
}
