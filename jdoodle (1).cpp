#include <iostream>
using namespace std;

int toplamHesapla(int dizi[], int boyut) {
    int toplam = 0;
    for (int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }
    return toplam;
}

int main() {
    // Örnek bir dizi
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]); 
    int sonuc = toplamHesapla(dizi, boyut);
    cout << "Dizinin elemanlarının toplamı: " << sonuc << endl;

    return 0;
}