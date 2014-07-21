#include <stdio.h>
 
 int main()
 {
    FILE *fp;
    int i=0;
    char c;
    fp = fopen ("arq.txt", "w");
    if (fp == NULL) {
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    printf ("Arquivo ARQ aberto com sucesso.\n");
    printf("Entre com caracteres a serem gravados no arquivo (0 encerra):\n");
    do
    {
       	c=getchar();
       	if (c!='0')
			fputc(c,fp);  	
    }
    while (c!='0');    
    fclose (fp);
    fp = fopen ("arq.txt", "r");    
    while((c=fgetc(fp))!=EOF) 
    {
        putchar(c);
		if (c=='\n') 
		   i++;         	
    }
    printf("\nExistem %d linhas no arquivo",i);
    fclose (fp);
    return 0;
 }
 
