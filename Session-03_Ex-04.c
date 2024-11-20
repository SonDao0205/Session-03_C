#include<stdio.h>
#include<math.h>
int main(){
    float toan, van, anh, diemTB;
    printf("Nhap diem toan : ");
    scanf("%f", &toan);
    printf("Nhap diem van : ");
    scanf("%f", &van);
    printf("Nhap diem anh : ");
    scanf("%f", &anh);
    diemTB = (toan + van + anh)/3;
    printf("Diem trung binh 3 mon = %.2f\n", diemTB);
    return 0;

}