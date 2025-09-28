#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// função que mostra a documentação / os comandos utilizados no sistema
void mostrar_documentacao();
// função que mostra as mensagens de acordo com o código indicado
void mostrar_bomdia(const char *comando);
void mostrar_dica();
void mostrar_error();
void mostrar_error2();

int main(int argc , char const *argv[]) {

    if(argc == 2){
        mostrar_bomdia(argv[1]);
    }

    else if(argc == 1){
        mostrar_error();
    }

    else{
        mostrar_error2();
    }
    return 0;
}

void mostrar_documentacao(){

     printf("\n\nLISTA DE COMANDOS:\n\n");

    printf("--help ou -h(documentação do software)\n");

    printf("--version ou -v(versão do software)\n");

    printf("--pt ou -1 (idioma português)\n");

    printf("--en ou -2 (idioma inglês)\n");

    printf("--es ou -3 (idioma espanhol)\n");

    printf("--fr ou -4 (idioma francês)\n");

    printf("--it ou -5 (idioma italiano)\n");

    printf("--co ou -6 (idioma coreano)\n");

    printf("--ja ou -7 (idioma japonês)\n");

    printf("--ru ou -8 (idioma russo)\n");
}

void mostrar_dica(){
    printf("Utilize o comando bomdia -h ou bomdia --help para acessar o menu de ajuda!\n\n");
}


void mostrar_bomdia(const char *comando){
    if(strcmp(comando , "--pt") == 0 || strcmp(comando , "-1") == 0){
        printf("\n\nBom Dia!\n");
    }

    else if(strcmp(comando , "--en") == 0 || strcmp (comando , "-2") == 0){
        printf("\n\nGood Morning!\n");
    }

    else if(strcmp(comando , "--es") == 0 || strcmp (comando , "-3") == 0){
        printf("\n\nBuenos días!\n");
    }

    else if(strcmp(comando , "--fr") == 0 || strcmp (comando , "-4") == 0){
        printf("\n\nBonjour !\n");
    }

    else if(strcmp(comando , "--it") == 0 || strcmp (comando , "-5") == 0){
        printf("\n\nBuongiorno!\n");
    }

    else if(strcmp(comando , "--co") == 0 || strcmp (comando , "-6") == 0){
        printf("\n\n좋은 아침이에요!\n");
    }

    else if(strcmp(comando , "--ja") == 0 || strcmp (comando , "-7") == 0){
        printf("\n\nおはよう!\n");
    }

    else if(strcmp(comando , "--ru") == 0 || strcmp (comando , "-8") == 0){
        printf("\n\nДоброе утро!\n");
    }

    else if(strcmp(comando , "--version") == 0 || strcmp (comando , "-v") == 0){
        printf("\n\nbomdia 3.0\n");
        printf("Autor: Tallyson Aguiar – Ciências da Computação, CCET-UVA\n");
        printf("Este software é de uso livre para fins acadêmicos.\n");
    }

    else if(strcmp(comando , "--help") == 0 || strcmp (comando , "-h") == 0){
        mostrar_documentacao();
    }

    else{
        printf("\n\n|%s não é um comando válido|\n\n" , comando);
        mostrar_dica();
    }

}

//função que retorna uma mensagem de erro, onde mostra que nenhuma opção foi infomada
void mostrar_error(){
    printf("\n\n  / Erro: Nenhuma opção informada! /\n\n");
    mostrar_dica();

}

void mostrar_error2(){
    printf("\n\n  / Erro: Mais de uma opção informada! /\n\n");
    mostrar_dica();
}