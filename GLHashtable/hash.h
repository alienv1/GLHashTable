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
};


#endif // HASH_H_INCLUDED
