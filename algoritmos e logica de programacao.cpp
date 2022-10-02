#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)
{
	printf("Me chamo Sabrina Barreto de Aguiar.\nSou aluna do Curso Analise e desenvolvimento de sistemas da Universidade LaSalle,\n Matricula 202220655.\n");
	printf("O codigo em questao, foi adaptado de um video de um curso de linguagem C, no Youtube\n");
	//printf: Serve para imprimir uma string formatada em alguma saida do sistema.
	int A, B, Soma, Subtracao, Multiplicacao, ope;
	//int:numeros inteiros.
	float Raiz, Divisao, Potencia;
	//float:numeros decimais.
		printf("Digite a opcao desejada:\n");
		printf("Digite 1 para Raiz\n");
		printf("Digite 2 para Soma, Subtracao, Divisao, Multiplicacao, Potencia\n");
	scanf("%d",&ope);
	//scanf:Define o formato das variaveis, onde os dados lidos serão armazenados.
		printf("Digite o numero 1 \n");
	scanf("%d", &A);
		printf("Digite o numero 2 \n");
	scanf("%d", &B);
	
	
	Soma=A+B;
	Subtracao=A-B;
	Multiplicacao=A*B;
	Divisao=A/B;	
	Potencia= pow(A,B);
	Raiz= sqrt (A);
	Raiz= sqrt (B);

	
	if (ope==1){
		//if:É um recurso que indica quais instrucoes o sistema deve processar.
		printf(" A Raiz e: %.2f\n",Raiz);
}
				
	else (ope==2);
	//else:É uma instrução que permite a execução de um comando.
	{		
		printf(" A Soma e: %d\n", Soma);		
		printf(" A Subtracao e: %d\n", Subtracao);	
		printf(" A Multiplicacao e: %d\n", Multiplicacao);
		printf(" A Divisao e: %.2f\n", Divisao);
		printf(" A Potencia e: %.2f\n", Potencia);
		
	}

}
