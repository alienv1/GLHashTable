#include <iostream>
#include <string>
#include "hash.h"

using namespace std;


int hash1::HASH(string key){
    int index;
    index = key.length();
    cout << "index [0]" << (int)key[0] << endl;
    cout << "index [1]" << (int)key[1] << endl;
    cout << "index [2]" << (int)key[2] << endl;
    cout << "------------" << endl;
    cout << "index de moi = " << index << endl;

    return index;
}
