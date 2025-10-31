#include <stdio.h>

//cod. para abrir arquivo e escrever dentro dele 

int main() {
    FILE *arquivo;

    arquivo = fopen("teste.txt", "w");

if(arquivo == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
}

    fprintf(arquivo, "Olá, arquivo!!!\n");

    fclose(arquivo); //fechamento do arquivo

    return 0;
}