#include <iostream>
#include "HinhVuong.h"
#include "HinhChuNhat.h"
using namespace std;

int main() {
    HinhVuong hinhVuong = HinhVuong(5.0, 5.0);
    hinhVuong.toString();
    
    HinhChuNhat hinhChuNhat = HinhChuNhat(4.0, 3.0);
    hinhChuNhat.toString();
    
    return 0;
}
