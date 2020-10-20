#include "Empregado.hpp"
#define HORAS_TRABALHADAS 8

double Empregado::getSalarioHora(){
  return _salarioHora;
}

double Empregado::getQuotaMensalVendas(){
  return _quotaMensalVendas;
}

std::string Empregado::getNome(){
  return _nome;
}

void Empregado::setSalarioHora(double salario){
  _salarioHora = salario;
}

void Empregado::setQuotaMensalVendas(double quota){
  _quotaMensalVendas = quota;
}

void Empregado::setNome(std::string nome){
  _nome = nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas){
  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  double t = horasTrabalhadas;
  
  if (horasTrabalhadas > HORAS_TRABALHADAS) {
    double x = horasTrabalhadas - HORAS_TRABALHADAS;
    t += x / 2;
  }
	
  return t * getSalarioHora();
}
