#ifndef QuanLyCanBo_h
#define QuanLyCanBo_h
#include "CanBo.h"
#include "GiangVien.h"
#include "NhanVienHanhChinh.h"
#include <fstream>
#include <vector>
#include <typeinfo>

class QuanLyCanBo
{
  private:
    vector<CanBo*> dsCanBo;

  public:
    QuanLyCanBo();
    void nhapDanhSach();
    void inDanhSach(ostream& os);
    unsigned int tinhTongLuong();
    void timGiangVienLuongCaoNhat();
};
#endif
