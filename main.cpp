#include <iostream>
using namespace std;
class Sach{
private:
    string id;
    string tenSach;
    string tenTacGia;
    bool coTheMuon;
public:
    //Hàm khởi tạo, constructor
    Sach(string id, string tenSach, string tenTacGia){
        this->id = id;
        this->tenSach = tenSach;
        this->tenTacGia = tenTacGia;
    }
    void setId(string id){
        this->id = id;
    }
    void setTenSach(string tenSach){
        this->tenSach = tenSach;
    }

    void setTrangThai(bool coTheMuon){
        this->coTheMuon = coTheMuon;
    }
    string getId(){
        return this->id;
    }

    string getTenSach(){
        return this->tenSach;
    }

    bool getTrangThai(){
        return this->coTheMuon;
    }

    void hienThiThongTin(){
        cout << "ID:" << this->id << endl;
        cout << "Ten sach:" << this->tenSach << endl;

    }
};



