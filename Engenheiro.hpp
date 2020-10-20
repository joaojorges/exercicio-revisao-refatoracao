#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int _projetos;

  public:
    int getProjetos();
    void setProjetos(int projetos);
    void imprimir(double horas);
    Engenheiro(std::string _nome, double _salarioHora, int _projetos);
    
};

#endif
