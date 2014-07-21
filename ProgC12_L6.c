#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>
#include <conio.h> 
#include <math.h>

int main()
{
    FILE *fp1;	
	char *aluno, str1[256], final[4];
	float *nota,x;
	int i,qte;
	printf("Digite nome do arquivo de entrada: "); 
	scanf("%s", &str1); 
	strcat(str1,".txt");
    fp1 = fopen (str1, "w");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
	printf("Digite numero de alunos: "); 
	scanf("%d", &qte); 
	aluno=(char *)malloc(qte*sizeof(char));
	nota=(float *)malloc(qte*sizeof(float));	
	char total[qte][2];
    for (i=0;i<qte;i++) 
    {
    	printf("Digite nome do aluno: "); 
    	scanf("%s", &aluno[i]); 
    	printf("Digite nota do aluno: ");     	
    	scanf("%f", &nota[i]);
/*		total[i][0]=aluno[i];*/
        x=nota[i];
		sprintf(final,"%f",x);
		total[i][1]=final; 
		    	printf("Nome do aluno: %s",aluno[i]); 
    	printf("Nota do aluno: %.2f",nota[i]); 
    }
    for (i=0;i<qte;i++) 
    {
    	printf("Nome do aluno: %s",total[i][0]); 
    	printf("Nota do aluno: %.2f",total[i][1]); 
    }    
    free(nota);
    free(aluno);
}

