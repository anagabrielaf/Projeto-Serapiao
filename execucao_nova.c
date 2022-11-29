#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tela_cadastro_nova.c"
#include <conio.h>


int main()
{
    int opc;

    setlocale(LC_ALL, "Portuguese");
    do{
    system("CLS");	
    printf("|+_____________________________________________________________________+|\n");
	printf("|                      Sistema de apadrinhamento                        |\n"); 
    printf("|  PARA CADASTRO ---------------------------------------- DIGITE 1      |\n");                                                                                                                  
	printf("|  PARA SAIR -------------------------------------------- DIGITE 0      |\n");  
	printf("|+_____________________________________________________________________+|\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 0:
    	system("CLS");
    	printf("|+_____________________________________________________________________+|\n");
		printf("|                       OBRIGADO POR FAZER                              |\n");
		printf("|                           O CADASTRO!                                 |\n");
		printf("|+_____________________________________________________________________+|\n");
		break;	
    case 1:
        system("CLS");
        telacadastro();
        break;

    default:
        printf("Opção inválida.");
        break;
    }
}
   while(opc!= 0);
   system("PAUSE");
    return 0;
}
