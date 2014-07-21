#include <stdio.h>
 
 int main()
 {
    FILE *fp1;
    char nome[10],telefone[8];
    fp1 = fopen ("cadastro.txt", "w");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    while(1) 
    {
    	printf("Digite nome: "); 
    	scanf("%s", &nome); 
    	printf("Digite telefone: "); 
    	scanf("%s", &telefone); 
        if ((strcmp(telefone, "0")==0))
        {
		    fclose (fp1);
		    fp1 = fopen ("cadastro.txt", "r");    
		    while(fscanf(fp1,"%s %s",&nome,&telefone)!=EOF)
            {
               printf("%s ",nome);
               printf("%s\n",telefone);               
        	} 
			break;           	
        } 	
		else	
		{
		 	fprintf(fp1,"%s ",nome); 
     	 	fprintf(fp1,"%s\n",telefone); 		  	
		}		
    }
    fclose (fp1);
    return 0;
 }
 
