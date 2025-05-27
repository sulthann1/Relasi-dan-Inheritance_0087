#include <iostream>
#include <vector>
using namespace std;
//re commit

#include "anak.h"
#include "ibu.h"

int main (){ //agregasi
ibu* varIbu = new ibu ("dini");
ibu* varIbu2 = new ibu ("novi");
anak* varAnak1 = new anak ("tono");
anak* varAnak2 = new anak("rini");
anak* varAnak3 = new anak ("dewi");

varIbu -> tambahAnak (varAnak1);
varIbu -> tambahAnak (varAnak2);
varIbu -> tambahAnak (varAnak3);
varIbu -> tambahAnak (varAnak1);

varIbu -> cetakAnak();
varIbu -> cetakAnak();

delete varIbu;
delete varIbu2;
delete varAnak1;
delete varAnak2;
delete varAnak3;

system ("pause");

return 0;

}