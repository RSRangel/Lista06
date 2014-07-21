#include <stdio.h> 
#include <string.h> 

int main()
{
    FILE *fp1, *fp2;	
	char str1[256], str2[256], cidade[40];
	int n=0,qte;
	printf("Digite nome do arquivo de entrada: "); 
	scanf("%s", &str1); 
	strcat(str1,".txt");
    fp1 = fopen (str1, "r");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    while(fscanf(fp1,"%s %d",&cidade,&qte)!=EOF)
    {
       if (qte>=n)
	   {      
		 n=qte;   	
	   }	       
   	}     
	printf("Digite nome do arquivo de saida: "); 
	scanf("%s", &str2); 
	strcat(str2,".txt");
    fp2 = fopen (str2, "w");
    if (fp2 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    fclose (fp1);
    fp1 = fopen (str1, "r"); 				
    while(fscanf(fp1,"%s %d",&cidade,&qte)!=EOF)
    {
       if (qte==n)
	   {
         fprintf(fp2,"%s ",cidade);
         fprintf(fp2,"%d\n",qte);  
		 printf("Cidade mais populosa e qte habitantes: %s %d",cidade,qte);		    	
	   }	       
   	} 
	fclose (fp1);
	fclose (fp2);
}
