#include<stdio.h>
#include<math.h>
int main(){
    float canh,h;
    float s;
    printf("Nhap canh day cua tam giac : ");
    scanf("%f", &canh);
    printf("Nhap chieu cao cua tam giac : ");
    scanf("%f", &h);
    s = (canh/2) * h;
    printf("Dien tich tam giac = %.2f", s);
    return 0;
}