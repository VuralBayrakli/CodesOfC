#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool asalMi(int a, int b) {
        if(a == b)
            return true;

        if(a % b != 0) {
            asalMi(a, b + 1);
            }
        else
            return false;


    }



int main()
{
    int a;
    printf("Sayiyi giriniz: \n");
    scanf("%d", &a);
    printf("%d", asalMi(a,2));
}

