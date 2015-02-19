#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;

class Usuario
{
    public:
        Usuario();
        virtual string getMensaje();
        virtual bool soyAdministrador()=0;
        virtual ~Usuario();
        string nombre;
        string pass;
    protected:
    private:
};

#endif // USUARIO_H
