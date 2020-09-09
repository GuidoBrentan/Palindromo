#include <iostream>
#include <string.h>
using namespace std;

char txtOriginal[30], txtFormatado[30];// primeiro vetor capta a frase original, e o segundo a frase sem espaços
int ehPalindromo; //especie de valor booleano, ja que não exitsem em C

int main()
{
    cout << "Bem vindo ao programa Palindromo!" << "\n\n";
    cout << "Digite a baixo uma frase, de no maximo 30 chars, e veja se ela é palindromo:";

    cin >> txtOriginal;

    //pequeno método para remover os espaços da minha frase
    {
        int ondeAdd = 0, indice; //uma variavel que percorre o vetor original 
                                //e outra que indica onde adiocionar no segundo vetor

        for(indice = 0; indice < strlen(txtOriginal); indice++) //percorro o vetor original
        {
            if(!isspace(txtOriginal[indice])) //se não for um espaço vazio, adiciono no meu vetor secundario
            {
                txtFormatado[ondeAdd] = txtOriginal[indice];
                ondeAdd++; //somo 1 ao indice do vetor secundario
            }
        }
    }

    //método para indentificar se é palindromo ou nao
    {
        int inicio = 0, fim = strlen(txtFormatado) - 1; //inicio uma variavel no inicio da frase e outra no fim

        for(/*variaveis iniciadas acima*/;inicio < fim; inicio++, fim--) //enquanto o inicio nao ultrapassar o fim
        {
            if(txtFormatado[inicio] != txtFormatado[fim]) //se alguma letra inicial for difernte da final
                ehPalindromo = -1; //coloco "false"
            else
                ehPalindromo = 1;//se não coloco "true"
        }
    }

    if(ehPalindromo > 0) //caso for true
        cout << "A frase eh palindromo" << "\n";

    if(ehPalindromo < 0) //caso seja false
        cout << "A frase nao eh palindromo" << "\n";

    return 0;
}