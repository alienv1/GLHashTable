#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int main(){

    hash1 hashObj;

    hashObj.HASH("Sara");

    hashObj.ajouterItem("Noureddine", "7697598698");
    hashObj.ajouterItem("Noura", "7697598698");
    hashObj.ajouterItem("Sara", "7697598698");

    // affichage des elements du taleau
    hashObj.afficherItem();

    return 0;
}
