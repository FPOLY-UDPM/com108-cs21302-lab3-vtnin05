/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS31202]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    printf("===== MENU CHƯƠNG TRÌNH =====\n");
    printf("1. Tính học lực sinh viên\n");
    printf("2. Giải phương trình bậc 1\n");
    printf("3. Giải phương trình bậc 2\n");
    printf("4. Tính tiền điện\n");
    printf("Chọn bài (1-4): ");
    scanf("%d", &choice);

    switch (choice) {

        // ===== BÀI 1: TÍNH HỌC LỰC =====
        case 1: {
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

                break;
            }

        // ===== BÀI 2: GIẢI PHƯƠNG TRÌNH BẬC 1 =====
        case 2: {
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
                break;
            }


        // ===== BÀI 3: GIẢI PHƯƠNG TRÌNH BẬC 2 =====
        case 3: {
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

                break;
            }
        // ===== BÀI 4: TÍNH TIỀN ĐIỆN =====
        case 4: {
                int soDien;
                float tienDien = 0;
                printf("Nhập số điện tiêu thụ (kWh): ");
                scanf("%d", &soDien);
                if (soDien >= 0 && soDien <= 50) {
                    tienDien = soDien * 1678;
                }
                else if (soDien >= 51 && soDien <= 100) {
                    tienDien = 50 * 1678 + (soDien - 50) * 1734;
                }
                else if (soDien >= 101 && soDien <= 200) {
                    tienDien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
                }
                else if (soDien >= 201 && soDien <= 300) {
                    tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014
                            + (soDien - 200) * 2536;
                }
                else {
                    tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014
                            + 100 * 2536 + (soDien - 300) * 2834;
                }
                printf("Số tiền điện phải trả: %.0f VNĐ", tienDien);
                break;
            }

        // ===== CHỌN SAI =====
        default:
            printf("Lựa chọn không hợp lệ!");
    }

    return 0;
}