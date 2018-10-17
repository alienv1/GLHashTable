#include <iostream>
#include <string>
#include "hash.h"

using namespace std;


int hash1::HASH(string key){
    int index;
    int hashage = 0;
    index = key.length();

    for (int i = 0; i<key.length(); i++){
        hashage = hashage + (int)key[i];
    }
      index = hashage % tailleTableau;

//    cout << "index [0]" << (int)key[0] << endl;
//    cout << "index [1]" << (int)key[1] << endl;
//    cout << "index [2]" << (int)key[2] << endl;
//    cout << "------------" << endl;
    cout << "index = " << index << endl;

    return index;
}
