/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS31202]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main() {
    float a, b;

//  Phương trình có dạng ax + b = 0 

    printf("Nhập a: ");
    scanf("%f", &a);

    printf("Nhập b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phương trình có vô số nghiệm.");
        } else {
            printf("Phương trình vô nghiệm.");
        }
    } else {
        float x = -b / a;
        printf("Phương trình có nghiệm x = %.2f", x);
    }

    return 0;
}
