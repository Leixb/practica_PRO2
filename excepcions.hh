#include<exception>

class ExpectedError : public std::exception  {};

class ProducteNoExistent : public ExpectedError {
    virtual const char* what() const throw() {
        return "No exteix un producte amb l'identificador especificat";
    }
};

class ProducteJaExistent : public ExpectedError {
    virtual const char* what() const throw() {
        return "No es pot afegir un producte, l'id ja existeix";
    }
};

class UnitatsInsuficients : public ExpectedError {
    virtual const char* what() const throw() {
        return "No es poden eliminar mes unitats";
    }
};

class DimensionsInsuficients : public ExpectedError {
    virtual const char* what() const throw() {
        return "Les dimentsions donades no son sufificents per a contenir els productes";
    }
};