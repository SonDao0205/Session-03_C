#include<stdio.h>
int main(){
    int number, temp, sum = 0;
    printf("Nhap so nguyen co 4 chu so : ");
    scanf("%d", &number);
    temp = number;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Tong cua 4 so nguyen = %d", sum);
    return 0;
}