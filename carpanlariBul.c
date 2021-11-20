#include <stdio.h>
#include <stdlib.h>

void carpanlariBul(int b, int a);
int main()
{
    int b;
    printf("Sayiyi giriniz: \n");
    scanf("%d", &b);
    carpanlariBul(b, 2);
}
void carpanlariBul(int b, int a) {


    if(b % a == 0) {
        printf("%d ", a);
        carpanlariBul((b / a), a);
    }
    else
        carpanlariBul(b, a+1);


}
