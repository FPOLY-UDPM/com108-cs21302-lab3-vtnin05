/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS31202]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    float diem;
    printf("Nhập điểm của bạn: ");
    scanf("%f", &diem);

        if (diem < 0 || diem > 10) {
            printf("Điểm không hợp lệ.");
        } 
        else if (diem >= 9) {
            printf("Học lực: Xuất sắc");
        } 
        else if (diem < 9 && diem >= 8) {
            printf("Học lực: Giỏi");
        } 
        else if (diem < 8 && diem >= 6.5) {
            printf("Học lực: Khá");
        } 
        else if (diem < 6.5 && diem >= 5) {
            printf("Học lực: Trung bình");
        } 
        else if (diem < 5 && diem >= 3.5) {
            printf("Học lực: Yếu");
        } 
        else {
            printf("Học lực: Kém");
        }

    return 0;
}