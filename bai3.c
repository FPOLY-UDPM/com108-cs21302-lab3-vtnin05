/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS31202]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng

// Số điện tiêu thụ	    Đơn giá (VNĐ/kWh)
// 0 – 50 kWh	            1.678
// 51 – 100 kWh	            1.734
// 101 – 200 kWh	        2.014
// 201 – 300 kWh	        2.536
// 301 - 400 kWh	        2.834
// > 400 kWh                2.927
 
#include <stdio.h>


int main() {
    int soDien;
    float tienDien = 0;

    printf("Nhập số điện tiêu thụ (kWh): ");
    scanf("%d", &soDien);

    if (soDien < 0) {
        printf("Không được nhập số âm.\n");
    }
    else if (soDien >= 0 && soDien <= 50) {
        tienDien = soDien * 1678;
    }
    else if (soDien >= 51 && soDien <= 100) {
        tienDien = 50 * 1678 
                    + (soDien - 50) * 1734;
    }
    else if (soDien >= 101 && soDien <= 200) {
        tienDien = 50 * 1678 
                    + 50 * 1734 
                    + (soDien - 100) * 2014;
    }
    else if (soDien >= 201 && soDien <= 300) {
        tienDien = 50 * 1678 
                    + 50 * 1734
                    + 100 * 2014
                    + (soDien - 200) * 2536;
    }
    else if (soDien >= 301 && soDien <= 400) {
        tienDien = 50 * 1678 
                    + 50 * 1734
                    + 100 * 2014
                    + 100 * 2536;
                    + (soDien - 300) * 2834;
    }
    else {
        tienDien = 50 * 1678 
                    + 50 * 1734 
                    + 100 * 2014
                    + 100 * 2536
                    + 100 * 2834;
                    + (soDien - 400) * 2927;
    }

    printf("Số tiền điện phải trả: %.0f VNĐ", tienDien);

    return 0;
}