#include <iostream>
using namespace std;

class guru{
    public:
    string mapel, kelas, jenis;
    
    void masukkanData(){
        cout<<"Masukkan Mata Pelajaran = ";cin>>mapel;
        cout<<"Masukkan Kelas Ajar (X, XI, XII) = ";cin>>kelas;
        cout<<"Masukkan Jenis Kelas Ajar (IPA, IPS) = ";cin>>jenis;



    } 
    void printData(){
        cout<<"Mata Pelajaran = "<<mapel<<endl;
        cout<<"Mengajar Kelas = "<<kelas<<endl;
        cout<<"Jenis Kelas = "<<jenis<<endl;
    };
};

class siswa{
    public:
    int nisn;
    float nilai;

void masukkanData(){
    cout<<"Masukkan NISN = ";cin>>nisn;
    cout<<"Masukkan Nilai = ";cin>>nilai;
}
void printData(){
    cout<<"NISN = "<<nisn<<endl;
    cout<<"Nilai = "<<nilai<<endl;
    }
};

int main(int argc, char const*argv[])
{
    string nama;
    int angka;
  cout<< "Masukkan Nama= ";cin>>nama;
  cout<< "Pilih angka (1 = guru, 2 = siswa) = ";cin>>angka;

if (angka == 1){
    guru sien;
    sien.masukkanData();
    cout<<endl;
    cout<<"Nama = "<<nama<<endl;
    sien.printData();
    }

else if (angka== 2){
    siswa x;
    x.masukkanData();
    cout<<endl;
    cout<<"Nama = "<<nama<<endl;
    x.printData();

}
    return 0;
    }
