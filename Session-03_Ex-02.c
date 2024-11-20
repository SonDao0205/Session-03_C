#include<stdio.h>
int main(){
    float c;
    float f;
    printf("Nhap do Celsius : ");
    scanf("%f", &c);
    f =(c * 1.8) + 32 ;
    printf("Do F tuong ung la : %.1f",f);
    return 0;
}