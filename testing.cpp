#include <iostream>
#include <string>
#include "peta.h"
using namespace std;

int main(){
    char** isipeta = new char*[5];
    for (int i = 0; i < 5; i++){
        isipeta[i] = new char[5];
    }
    for(int i= 0; i<5 ;i++){
        //**isipeta = 'l';  //kalo lgsg double pinter, yang berubah cuma baris 0 kolom 0
        //*isipeta[i] = 'l'; //kalo gini, yang berubah baris ke-i tapi kolom 0
        for(int j = 0 ; j<5 ; j++){
            isipeta[i][j] = 'k';  //Ini berarti ngisi data dari alamat isipeta[i][j]
            //cout << isipeta[i][j] << endl;  // ini buat ngerpint masing masing elemen
        }   
        cout << isipeta[i] << endl;  //ini buat ngeprint array
    }

    //cout << *isipeta << endl;

}