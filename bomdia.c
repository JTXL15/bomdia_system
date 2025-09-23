#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// função que mostra a documentação / os comandos utilizados no sistema

void mostrar_documentacao(){

     printf("LISTA DE COMANDOS:\n\n");

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
    printf("Utilize o comando bomdia --h ou bomdia -help para acessar o menu de ajuda!\n\n");
}

// função que mostra as mensagens de acordo com o código indicado
void mostrar_message(const char *comando){
    if(strcmp(comando , "--pt") == 0 || strcmp(comando , "-1") == 0){
        printf("Bom Dia!\n");
    }

    else if(strcmp(comando , "--en") == 0 || strcmp (comando , "-2") == 0){
        printf("Good Morning!\n");
    }

    else if(strcmp(comando , "--es") == 0 || strcmp (comando , "-3") == 0){
        printf("Buenos dias!\n");
    }

    else if(strcmp(comando , "--fr") == 0 || strcmp (comando , "-4") == 0){
        printf("Bonjour!\n");
    }

    else if(strcmp(comando , "--it") == 0 || strcmp (comando , "-5") == 0){
        printf("Buongiorno!\n");
    }

    else if(strcmp(comando , "--co") == 0 || strcmp (comando , "-6") == 0){
        printf("좋은 아침이에요!\n");
    }

    else if(strcmp(comando , "--ja") == 0 || strcmp (comando , "-7") == 0){
        printf("おはよう!\n");
    }

    else if(strcmp(comando , "--ru") == 0 || strcmp (comando , "-8") == 0){
        printf("Доброе утро!\n");
    }

    else if(strcmp(comando , "--version") == 0 || strcmp (comando , "-v") == 0){
        printf("\n| Versao : bomdia 1.0|\n\nBy: Tallyson Aguiar\n");
    }

    else if(strcmp(comando , "--help") == 0 || strcmp (comando , "-h") == 0){
        mostrar_documentacao();
    }

    else{
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


int main(int argc , char const *argv[]) {

    if(argc == 2){
        mostrar_message(argv[1]);
    }

    if(argc == 1){
        mostrar_error();
    }

    if(argc > 2){
        mostrar_error2();
    }
    return 0;
}