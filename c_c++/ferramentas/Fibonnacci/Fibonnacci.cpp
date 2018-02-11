#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int n_serie;                   //Essa vari�vel armazena o n�mero da ordem da s�rie de Fibonnacci que o usu�rio deseja ver
    int a;                         //Vari�vel que vai servir de base para o "for"

    setlocale(LC_ALL, "Portuguese");

    cout<<"Digite o n�mero da s�rie de Fibobonnacci que voc� deseja ver\n";
    cin>>n_serie;

    int fibonnacci[n_serie];     //Esse vetor armazena a s�rie de fibonnacci at� a posi��o que o usu�rio que ver
    fibonnacci[0]=0;
    fibonnacci[1]=1;             //Aqui introduzo os dois primeiros n�meros da s�rie (0 e 1), que n�o fazem parte do padr�o da s�rie

    for(a=2; a<n_serie; a++){
        fibonnacci[a]=fibonnacci[a-1] + fibonnacci[a-2];
    }

    cout<<"O "<<n_serie<<"� n�mero da s�rie de fibonnacci � "<<fibonnacci[n_serie-1]<<"\n";

    system("PAUSE");

    return 0;
}
