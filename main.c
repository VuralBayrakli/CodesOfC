#include <stdio.h>
void palindromMu(char arr[], int kk);
int main() {
    char arr[99];
    printf("kelimeyi girin: ");
    scanf("%s", arr);
    palindromMu(arr, 0);
    return 0;
}

void palindromMu(char arr[], int kk) {
    int a = strlen(arr) - kk - 1; // Girilen metnin ilk indisi ile son indisi, birinci indis ile sondan bir önceki indis olacak şekilde
    // karşılaştırma işlemi a integeri kullanılarak yapılır. İndisler birer birer arttığında a integeri de son indisten itibaren bir azalır.
    if(arr[kk] == arr[a]) { // Sıfırıncı indis ile son indis, birinci indis ile sondan bir önceki indis şeklinde karşılaştırma yapılır.
        if(kk == a || kk + 1 == a) { // Eğer girilen metnin eleman sayısı tek ise kk ile a değişkenleri birbirlerine eşit olurlar.
            // Çift olursa a değişkeni kk değişkeninden bir fazla olur. Bu iki durum sağlanıyorsa metin palindromdur.
        printf("palindrom!!");
        return;
        }
    palindromMu(arr,kk + 1);}// Eğer eşitlik sağlandığında palindromMu rekursif edilerek diğer indisler karşılaştırılır.

    else
        printf("palindrom değil!!");


    }
