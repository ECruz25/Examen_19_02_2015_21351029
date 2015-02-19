#include "UsuarioAdministrador.h"

UsuarioAdministrador::UsuarioAdministrador(string nombre, string pass)
{
    this->nombre = nombre;
    this->pass = pass;
}

UsuarioAdministrador::UsuarioAdministrador()
{
    //ctor
}

UsuarioAdministrador::~UsuarioAdministrador()
{
    //dtor
}

bool UsuarioAdministrador::soyAdministrador()
{
    return true;
}
