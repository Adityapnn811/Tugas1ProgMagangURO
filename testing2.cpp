#include <iostream>
#include <string>
#include "peta.h"
using namespace std;

int main(){
    //BuatPeta(6);
    char** peta; 
    peta = BuatPeta(6);
    PrintPeta(peta, 6);
    PrintViewKanan(peta, 6);
    PrintViewKiri(peta, 6);
}