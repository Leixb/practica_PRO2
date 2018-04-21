#ifndef SALA_H
#define SALA_H

#include "estanteria.h"

class Sala {
    friend class Magatzem;
    unsigned int id;

    Estanteria estant;
    Sala *dreta, *esquerra;

    public:

    Sala(const unsigned int& id=0);

    unsigned int consulta_id();

    Sala* fill_dre();
    Sala* fill_esq();

    unsigned int poner_items(Producte* prod, const unsigned int& cantidad);
    unsigned int quitar_items(Producte* prod, const unsigned int& cantidad);

    void compactar();
    void reorganizar();
    void redimensionar(const unsigned int& f, const unsigned int& c);

    void escribir();

    Producte* consultar_pos(const unsigned int& f, const unsigned int& c) const;
};

#endif // ifndef SALA_H

