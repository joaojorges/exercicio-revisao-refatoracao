#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include "Empregado.hpp"
#include <string>

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 35, 3);
  eng1.imprimir(9.5);
  
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30, 1);
  eng2.imprimir(8);
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 2); 
  eng3.imprimir(8);
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000);
  vend1.imprimir(6);
  
  Vendedor vend2 = Vendedor("Jose Mormont", 25, 3000);
  vend2.imprimir(8);
	
  Vendedor vend3 = Vendedor("Sonia Stark", 30, 4000);
  vend3.imprimir(8);

  return 0;	
}
