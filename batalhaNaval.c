#include <stdio.h>

int main(){
    int j=0;
    int navio1[3]={3,3,3}, navio2[3]={3,3,3}, navio3[4]={3,3,3}, navio4[3]={3,3,3};//Criação das variaveis dos navios
    int campo[10][10];
    //Criação das variaveis do campo

    for(int i=0;i<10;i++){
        for(int k=0;k<10;k++){
            campo[i][k]=0;
        }
    }//Atribuindo valores ao campo
    

    for(int v=0; v<3; v++){
        campo[3][6+v]=navio1[v];
    }//Aplicando Navio1 ao campo

    for(int h=0; h<3; h++){
        campo[6+h][3]=navio2[h];
    }//Aplicando Navio2 ao campo

    for(int i=0; i<3; i++){
        campo[1+i][1+i]=navio3[i];
    }//Aplicando Navio3 ao campo

    for(int i=0; i<3; i++){
        campo[0+i][6+i]=navio4[i];
    }//Aplicando Navio4 ao campo

    printf("    A  B  C  D  E  F  G  H  I  J\n");
    for(int i=0; i<10; i++){
        printf("%d   ", i);
            while(j<10){
                printf("%d  ", campo[i][j]);
                j++;
        }
        j=0;
        printf("\n");
    }//Representação no terminal do campo

}