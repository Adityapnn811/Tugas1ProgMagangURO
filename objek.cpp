#include "objek.h"

void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru){
    korban_baru->name = nama; //Karena dideklarasiin sebagai pointer, cara aksesnya pake panah, bukan titik
    korban_baru->x = x;
    korban_baru->y = y;
    korban_baru->simbol = nama[0];

    peta[x][y] = korban_baru->simbol;
}

void TambahLilin(char** peta, int x, int y, lilin* lilin_baru){
    lilin_baru->status_lilin = on;
    lilin_baru->x = x;
    lilin_baru->y = y;
    peta[x][y] = 'L';
}