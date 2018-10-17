#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

void hash1::afficherItem(){
    for (int i = 0; i<tailleTableau; i++){
        cout << "--------------" << endl;
        cout << "index = " << i << endl;
        cout << "HashTable[i]->nom"<< HashTable[i]->nom << endl;
        cout << "HashTable[i]->tel"<< HashTable[i]->tel << endl;
         cout << "--------------" << endl;
    }
}

 void hash1::ajouterItem(string nom, string tel){
    int index;
    index = HASH(nom);

    if (HashTable[index]->nom == "vide"){
        //place est vide insertion item
        HashTable[index]->nom = nom;
        HashTable[index]->tel = tel;
        HashTable[index]->next = NULL;
    } else {
        item* ptr = HashTable[index];
        item* nouv = new item;
        nouv->nom = nom;
        nouv->tel = tel;
        nouv->next = NULL;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = nouv;
    }
 }

hash1::hash1(){
     for (int i = 0; i<tailleTableau; i++){
        HashTable[i] = new item;
        HashTable[i]->nom = "vide";
        HashTable[i]->tel = "vide";
        HashTable[i]->next = NULL;
     }
}

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
