#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.00;
  float total_de_horas_trabalhadas = 100;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float impostos_renda = salario_bruto * IR;
  float impostos_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - impostos_renda - impostos_previ;

  printf("\x1b[43m---------------------------\n");
  printf("  C O N T R A C H E Q U E  \n");
  printf("---------------------------\n");
  printf("Salario Bruto.....:R$ %8.2f\n", salario_bruto);
  printf("Impostos Renda....:R$ %-8.2f\n", impostos_renda);
  printf("Impostos Previ....:R$ %-8.2f\n", impostos_previ);
  printf("Salario Liquido...:R$ %-8.2f\x1b[0m\n", salario_liquido);



  
  
  return 0;
}