#include<stdio.h>
#include<math.h>
int main(){
    int r;
    float pi = 3.14;
    float c;
    float s;
    printf("Nhap ban kinh r : ");
    scanf("%d", &r);
    c = 2 * r * pi;
    s = r * r * pi;
    printf("Chu vi hinh tron = %.2f\nDien tich hinh tron = %.2f\n", c,s);
    return 0;

}