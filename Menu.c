#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ANOATUAL 2025 // fixa o ano com que será feito o cálculo de idade(nesse caso, 2025)

int main(int argc, char *argv[]) {
    char op;
    char menu[60] = "Menu\na)calc idade\nb)vogal\nc)trocar cor\nx)sair do programa";

    while(1){
        system("cls");
        puts(menu);
        op = getche();

        //OPÇÃO A
        if(op == 'a'){
            system("cls");
            int anonasc, idade;

            printf("Digite seu ano de nascimento: ");
            scanf("%d",&anonasc);

            idade = ANOATUAL - anonasc;

            printf("\nVoce tem %d anos\n", idade);

            if(idade >= 18){
                printf("Em %d voce e maior de idade", ANOATUAL);
            }else{
                printf("Em %d voce e menor de idade", ANOATUAL);
            }

            printf("\n\nPressione qualquer tecla para voltar ao menu...");
        }
        //OPÇÃO B
        if(op == 'b'){
            char vogais[10] = "aeiouAEIOU";
            char vogal;
            int i;

            i = rand()%10;
            vogal = vogais[i];

            printf("\nSua vogal: %c", vogal);
        }
        //OPÇÃO C
        else if(op == 'c'){
            if(bool == 0) {
                system("color 70");
                bool = 1;
            }
            else {
                system("color 07");
                bool = 0;
            }
        }
        //OPÇÃO X
        if(op == 'x'){
            return 0;
        }

        system("pause>null");
    }

}
