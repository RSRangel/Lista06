#include <stdio.h> 
#include <string.h> 

int main()
{
    FILE *fp1;	
	char str1[256], str2[256], *n;
	int k=0;
	printf("Digite nome do arquivo: "); 
	scanf("%s", &str1); 
	strcat(str1,".txt");
    fp1 = fopen (str1, "r");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }	
	printf("\nDigite palavra a pesquisar: "); 
	scanf("%s", &str2); 
	n=strstr(str1,str2); 
	if (n!=NULL)
		k++;
	printf("%d\n",k); 
} 

