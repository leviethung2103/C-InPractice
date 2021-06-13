#include <iostream>
#include <string>

using namespace std;

// kieu du lieu con nguoi , gom kieu du lieu con ben trong
struct ConNguoi  {
    std::string ho_ten = "Vu";
    std::string nghe_nghiep  = "Coder";
    int tuoi = 18;
    float chieu_cao; 
    float can_nang;
    char nhom_mau = 'A';
    bool con_zin = true;
    int so_do_3_vong[3] = {60,90,60}; 
};

// kieu du lieu - ten cua thong so 
// khong tra du lieu gi ca
string chi_so_BMI(ConNguoi nguoi)
{
    string ket_qua;

    std::cout << nguoi.can_nang << std::endl;
    float bmi =  nguoi.can_nang / (nguoi.chieu_cao * nguoi.chieu_cao);
    cout << "Ket qua BMI: " << bmi << endl;
    if (bmi < 18.5) {
        ket_qua = "gay vl";
    
    }
    else if (bmi > 25) {
        ket_qua = "bung to";
    }
    else {
        ket_qua = "binh thuong";
    }
    return ket_qua;
}


void dong_thoi_gian(ConNguoi nguoi, int nam_troi_qua) {
    for (int i = 0; i < nam_troi_qua ; i ++) {
        nguoi.can_nang = nguoi.can_nang + 2;
    }
    cout << "Can nang New" << nguoi.can_nang << endl;
    string ket_qua = chi_so_BMI(nguoi);
    cout << "Ban " << nguoi.ho_ten << nam_troi_qua << " nam troi qua se " << ket_qua << endl;
}


int main() {
    ConNguoi nguoi; 
    
    std::cout << nguoi.ho_ten << std::endl; 

    nguoi.can_nang = 60;
    nguoi.chieu_cao = 1.65;

    std::cout << nguoi.can_nang << std::endl; 

    chi_so_BMI(nguoi);

    dong_thoi_gian(nguoi, 10);

    cout << &nguoi << endl;

    ConNguoi* pointer = &nguoi;

    cout << pointer << endl;

    // lap trinh huong doi tuong 

    return 0;

}