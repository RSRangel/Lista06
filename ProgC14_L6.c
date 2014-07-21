#include <stdio.h>
#include <math.h>

int eliminar()
{
	FILE *fp1;
    char nome[10],n[10];
    fp1 = fopen ("agenda.txt", "w+");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    while(1) 
    {
    	printf("Digite nome para excluir (0 para encerrar): "); 
    	scanf("%s", &n); 
  		while(fscanf(fp1,"%s",&nome)!=EOF)    	
        if ((strcmp(nome, n)==0))
        {
		 	fprintf(fp1,"%s ",""); 
		 	fprintf(fp1,"%s ",""); 
		 	fprintf(fp1,"%s ",""); 			 		 	
 	  	 	fprintf(fp1,"%s\n","");
		    return 1;
        } 	    	
		  			
    }
    fclose (fp1);    
    return 0;
}

int inserir()
{
	FILE *fp1;
    char nome[10],telefone[8], dia[2], mes[2];
    fp1 = fopen ("agenda.txt", "a");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    while(1) 
    {
    	printf("Digite nome (0 para encerrar): "); 
    	scanf("%s", &nome); 
        if ((strcmp(nome, "0")==0))
        {
		    fclose (fp1);
		    return 1;
        } 	    	
    	printf("Digite telefone: "); 
    	scanf("%s", &telefone); 
    	printf("Digite mes aniversario: "); 
    	scanf("%s", &mes);  
    	printf("Digite dia aniversario: "); 
    	scanf("%s", &dia);  		   	
	 	fprintf(fp1,"%s ",nome); 
	 	fprintf(fp1,"%s ",telefone); 
	 	fprintf(fp1,"%s ",mes); 			 		 	
   	 	fprintf(fp1,"%s\n",dia); 		  			
    }
    return 0;
}

int main ()
{
	int c;
	printf("Agenda: \n");
	printf("1 - Inserir contato\n");
	printf("2 - Eliminar contato\n");
	printf("3 - Pesquisar contato por nome\n");	
	printf("4 - Listar todos os contatos\n");	
	printf("5 - Listar os contatos que iniciam por letra a ser fornecida\n");	
	printf("6 - Listar todos os aniversariantes do mes\n");				
	scanf("%d", &c);
	switch (c)
	{
		case 1:
			inserir();
			break;
		case 2:
			eliminar();
			break;
		case 3:

			break;
		default:
			return 0;
			break;			
	}
	return 1;
}

