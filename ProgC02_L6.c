#include <stdio.h>
 
 int main()
 {
    FILE *fp1, *fp2,*fp3;
    char c;
    fp1 = fopen ("arq1.txt", "r");
    if (fp1 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }
    fp2 = fopen ("arq2.txt", "r");
    if (fp2 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    } 
    fp3 = fopen ("arq3.txt", "w");
    if (fp3 == NULL) 
	{
       printf ("Erro ao abrir o arquivo.\n");
       return 1;
    }	   
    while((c=fgetc(fp1))!=EOF) 
    {
			fputc(c,fp3); 
    }
    while((c=fgetc(fp2))!=EOF) 
    {
			fputc(c,fp3); 
    }    
    fclose (fp3);
    fp3 = fopen ("arq3.txt", "r");    
    while((c=fgetc(fp3))!=EOF) 
    {
        putchar(c);
   	}    
    fclose (fp1);
    fclose (fp2);
    fclose (fp3);	    
    return 0;
 }
 
