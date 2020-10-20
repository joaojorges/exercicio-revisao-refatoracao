#include "Vendedor.hpp"
#include "Empregado.hpp"
#include <string>
#define MESES 12

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas){
  setNome(_nome);
  setSalarioHora(_salarioHora);
  setQuotaMensalVendas(_quotaMensalVendas);
}

double Vendedor::quotaTotalAnual(){
  return getQuotaMensalVendas() * MESES;
}

void Vendedor::imprimir(double horas){
  std::cout << "Nome: " << getNome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;  
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}
