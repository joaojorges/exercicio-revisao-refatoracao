#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double _salarioHora;
    double _quotaMensalVendas;
    std::string _nome;

  public:

    double getSalarioHora();
    double getQuotaMensalVendas();
    std::string getNome();
    void setSalarioHora(double salario);
    void setQuotaMensalVendas(double quota);
    void setNome(std::string nome);
    
    double pagamentoMes(double horasTrabalhadas); 

};

#endif
