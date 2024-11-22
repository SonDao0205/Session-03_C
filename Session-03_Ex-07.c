#include<stdio.h>
int main(){
    int number, num1, num2, num3, num4, sum;
    printf("Nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &number);
    num1 = number % 10;
    num2 = (number / 10) % 10;
    num3 = (number / 100) % 10;
    num4 = number / 1000;
    sum = num1 + num2 + num3 + num4;
    printf("Tong cua 4 so nguyen = %d", sum);
    return 0;
}
