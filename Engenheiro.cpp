#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salarioHora, int _projetos){
  setNome(_nome);
  setSalarioHora(_salarioHora);
  setProjetos(_projetos);
}

int Engenheiro::getProjetos(){
  return _projetos;
}

void Engenheiro::setProjetos(int projetos){
  _projetos = projetos;
}

void Engenheiro::imprimir(double horas){
  std::cout << "Nome: " << getNome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << getProjetos() << std::endl;
  std::cout << std::endl;
}
