/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS31202]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Nhập a: ");
    scanf("%f", &a);

    printf("Nhập b: ");
    scanf("%f", &b);

    printf("Nhập c: ");
    scanf("%f", &c);

    // Trường hợp a = 0 → phương trình bậc 1
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phương trình có vô số nghiệm.");
            } else {
                printf("Phương trình vô nghiệm.");
            }
        } else {
            float x = -c / b;
            printf("Phương trình có nghiệm x = %.2f", x);
        }
    }
    // Trường hợp a ≠ 0 → phương trình bậc 2
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phương trình vô nghiệm");
        }
        else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phương trình có nghiệm kép x = %.2f", x);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có 2 nghiệm:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f", x2);
        }
    }

    return 0;
}