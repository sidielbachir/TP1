#include<stdio.h>
int main(void)
{
	char Mat[5][5]={{'1','2','3','4','5'},
	              {'7','a','c','8','d'},
			      {'c','9','4','z','8'},
			      {'5','6','p','n','3'},
			      {'2','9','t','m','k'}};
    char x='0';			      
			printf("\n\t***Ex 01***\n");      
	printf("\n  Q.1_Affichage-Matrice :\n");
	for(int i=0;i<5;i++)
	 {
	 printf("\n");
	 printf(" %d:",i);
	 for(int j=0;j<5;j++)
	 printf("   %c ",Mat[i][j]);
     }
     
    printf("\n\n  Lignes d'indice pair :\n");
    
    for(int i=0;i<5;i=i+2)
	 {
	 printf("\n");
	 printf(" %d:",i);
	 for(int j=0;j<5;j++)
	 printf("   %c ",Mat[i][j]);
     }
     
     printf("\n\n  Lignes d'indice impair :\n");
    
    for(int i=1;i<5;i=i+2)
	 {
	 printf("\n");
	 printf(" %d:",i);
	 for(int j=0;j<5;j++)
	 printf("   %c ",Mat[i][j]);
     }
     
    printf("\n\nQ.2 1e diagonale (gauche a droite) :\n");
	
	for(int i=0;i<5;i++)
	 {
	 if(i==0)printf("\n      %c ",Mat[i][i]);
	 if(i==1)printf("\n           %c ",Mat[i][i]);
	 if(i==2)printf("\n                %c ",Mat[i][i]);
	 if(i==3)printf("\n                     %c ",Mat[i][i]);
	 if(i==4)printf("\n                          %c ",Mat[i][i]); 
     }
     
    printf("\n\nQ.2 2e diagonale (droite a gauche) :\n");
     
     for(int i=0;i<5;i++)
	 
	 for(int j=4;0<=j;j--)
	 {
	 if(i+j==4&& i==4)printf("\n      %c ",Mat[i][j]);
	 if(i+j==4&& i==3)printf("\n           %c ",Mat[i][j]);
	 if(i+j==4&&i==2)printf("\n                %c ",Mat[i][j]);
	 if(i+j==4&&i==1)printf("\n                     %c ",Mat[i][j]);
	 if(i+j==4&&i==0)printf("\n                          %c ",Mat[i][j]); 
     }
     
     printf("\n\t***Ex 02***\n");
     
     for(int i=1;i<5;i++)
     for(int j=0;j<i;j++)
     {
     	x=Mat[i][j];
     	Mat[i][j]=Mat[j][i];
     	Mat[j][i]=x;
	 }
    printf("\nNew Mat :\n"); 
    
    for(int i=0;i<5;i++)
	 {
	 printf("\n");
	 printf(" %d:",i);
	 for(int j=0;j<5;j++)
	 printf("   %c ",Mat[i][j]);
     }
     return 0;
	 		   
}