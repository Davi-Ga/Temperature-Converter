//Project CR Calculator
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
        
    setlocale(LC_ALL, "Portuguese");
    int disciplinas,i,j;
    float total=0, div;
    float cd[10],notas[10];

    printf("Digite quantas disciplinas voce possui: ");
    scanf("%d",&disciplinas);

        for(i=0;i<disciplinas;i++){
            printf("Digite o CD da disciplina %d: ",i+1);
            scanf("%f",&cd[i]);

                for(j=0;j<1;j++){
                    printf("Digite a NOTA da disciplina %d: ",i+1);
                    scanf("%f",&notas[j]);
                    total+=(cd[i]*notas[j]); 
                    div+=cd[i];
                }
               
        }
    total=total/div;   
    printf("Seu CR e de aproximadamente %f",total);


    system("pause");

    return 0;
}