#ifndef IBU_H
#define IBU_H


class ibu {
    public :
     string nama;
     vector <anak*> daftar_anak;

     ibu (string pNama) : nama (pNama){
        cout << "ibu\"" <<nama << "\" ada\n";
     }

     ~ibu(){
        cout << "ibu\""<< nama << "\" ada\n";
     }

     void tambahAnak(anak*);
     void cetakAnak();
};

void ibu :: cetakAnak(){
    cout << "Daftar anak dari ibu\"" <<
    this -> nama << "\":\n";
    for (int i = 0; 1 < daftar_anak.size(); i++){
        cout << daftar_anak[i] -> nama <<endl;
    }
    cout <<endl;
};
#endif