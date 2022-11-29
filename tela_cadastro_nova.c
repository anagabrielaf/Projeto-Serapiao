#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <string.h>


void telacadastro()
{
    char email [32], confirmeEmail [32], senha [32], confirmSenha [32], cpf [15], nome [32];
    int c1, c2; 


    setlocale(LC_ALL, "Portuguese");
    printf("|+_____________________________________________________________________+|\n");
	printf("|                                CADASTRO                               |\n");                                                                                                                  
	printf("|                                                                       |\n");  
	printf("|+_____________________________________________________________________+|\n");
	
    printf("Nome: ");
    fflush(stdin);
    gets(nome);
    printf("\nCPF: ");
    scanf(" %s", &cpf); 
    printf("\nEmail: ");
    scanf(" %s", &email); 
    printf("\nSenha: ");
    fflush(stdin);
    gets(senha);

    system("CLS");

    printf("Confirme o email: ");
    scanf(" %s", &confirmeEmail);
    printf("Confirme a senha: ");
    scanf(" %s", &confirmSenha);
    
    c1 = strcmp(email, confirmeEmail);
    c2 = strcmp(senha, confirmSenha);

   if ( c1 != 0 )
   {
        printf("\nEmails não coincidem.");
   }
    if ( c1 == 0 && c2 == 0 ) 
   {
        printf("\nCadastro concluído!");
   }
    if ( c2 != 0 )
   {
        printf("\nSenhas não coincidem.");
   }

}
    
