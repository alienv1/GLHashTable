#include <iostream>
#include <string>

using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;
        struct item{
            string nom;
            string tel;
            item* next;
        };
        item* HashTable[tailleTableau];

    public:
        int HASH(string key);
        hash1();
        void ajouterItem(string nom, string tel);
        void afficherItem();

        //devoir : implementer les quatre fonctions suivantes


        //int  nombreItems(int index);
        //void afficherItemsDansIndex(int index); // les items qui ont le même resultat de hashage et qui sont empilés
        //void chercherItem(string nom);
        //void supprimerItem(string nom);
};


#endif // HASH_H_INCLUDED
