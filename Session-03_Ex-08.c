#include <stdio.h>

int main() {
    int number, num1, num2, num3, num4, reversedNumber;
    printf("Nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &number);
    num1 = number % 10;
    num2 = (number / 10) % 10;
    num3 = (number / 100) % 10;
    num4 = number / 1000;
    reversedNumber = num1 * 1000 + num2 * 100 + num3 * 10 + num4;
    printf("Số nghịch đảo là: %d\n", reversedNumber);
    return 0;
}
