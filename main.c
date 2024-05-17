#include <stdio.h>
#define limpar printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

int menuNav, i;

typedef struct{

    char nome[50];
    float nota;
    int matricula;

}Alunos;

int aprovados,reprovados;

float media = 0;
int quantiaTotal = 0;
int alunos = 1;
Alunos aluno[100];


// ___  ___                  ______       _____           _           _             
// |  \/  |                  |  _  \     /  __ \         | |         | |            
// | .  . | ___ _ __  _   _  | | | |___  | /  \/ __ _  __| | __ _ ___| |_ _ __ ___  
// | |\/| |/ _ \ '_ \| | | | | | | / _ \ | |    / _` |/ _` |/ _` / __| __| '__/ _ \ 
// | |  | |  __/ | | | |_| | | |/ /  __/ | \__/\ (_| | (_| | (_| \__ \ |_| | | (_) |
// \_|  |_/\___|_| |_|\__,_| |___/ \___|  \____/\__,_|\__,_|\__,_|___/\__|_|  \___/ 
                                                                                 
                                                                                 

void cadastrar(){
    limpar
	printf("\n\n\n - - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("    Digite o nome do aluno             \n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - -  \n");
    scanf(" %[^\n]", aluno[quantiaTotal].nome);


	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("   Digite a matricula                \n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    scanf("%d", &aluno[quantiaTotal].matricula);


	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
	printf("   Digite a nota na materia            \n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - \n");
    scanf("%f", &aluno[quantiaTotal].nota);
    if (aluno[quantiaTotal].nota >= 7){
        aprovados++;
    } else {
        reprovados++;
    }
    media = media + aluno[quantiaTotal].nota;
    quantiaTotal ++;
    alunos++;

    printf("\n\nDigite 1 para cadastrar um novo aluno, ou qualquer outro valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    if(menuNav == 1){

        cadastrar();

    } else {
        main();
    }
}

//  _     _     _              _         ___  _                       
// | |   (_)   | |            | |       / _ \| |                      
// | |    _ ___| |_ __ _    __| | ___  / /_\ \ |_   _ _ __   ___  ___ 
// | |   | / __| __/ _` |  / _` |/ _ \ |  _  | | | | | '_ \ / _ \/ __|
// | |___| \__ \ || (_| | | (_| |  __/ | | | | | |_| | | | | (_) \__ \
// \_____/_|___/\__\__,_|  \__,_|\___| \_| |_/_|\__,_|_| |_|\___/|___/
                                                                                                                  

void listar(){
        limpar
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                  LISTA DE ALUNOS                |\n");
        printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");

    for(i=0;i<alunos;i++){
        printf("\t\t\t                      Aluno %d                   \n", i);
        printf("\t\t\t   Nome: %s                                     \n", aluno[i].nome);
        printf("\t\t\t  - - - - - - - - - - - - - - - - - - - - - - - - \n");

    }
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t _________________________________________________\n");
    printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    main();



}

// ______                             ___  _                   
// | ___ \                           / _ \| |                  
// | |_/ /_   _ ___  ___ __ _ _ __  / /_\ \ |_   _ _ __   ___  
// | ___ \ | | / __|/ __/ _` | '__| |  _  | | | | | '_ \ / _ \ 
// | |_/ / |_| \__ \ (_| (_| | |    | | | | | |_| | | | | (_) |
// \____/ \__,_|___/\___\__,_|_|    \_| |_/_|\__,_|_| |_|\___/ 
                                                                                                                  

void pesquisar(){
    int pesquisarAluno;
    limpar
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("   Digite o numero do aluno que deseja pesquisar                \n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    scanf("%d", &pesquisarAluno);
    
    if(aluno[0].matricula == 0){
        limpar
        printf("\nNenhum aluno esta registrado no sistema\n\n");
        printf("Digite qualquer valor para retornar ao menu\n\n");
        scanf("%d", &menuNav);
        main();
    } else {
        if(aluno[pesquisarAluno].matricula == 0){
            limpar
            printf("Nao existe nenhum aluno com este numero\n\n");
            printf("Digite qualquer valor para retornar ao menu\n\n");
            scanf("%d", &menuNav);
            main();
        } else {
            limpar;
            printf("\t\t\t                      Aluno %d                   \n", pesquisarAluno);
            printf("\t\t\t   Nome: %s                                     \n", aluno[pesquisarAluno].nome);
            printf("\t\t\t   Matricula: %d                                     \n", aluno[pesquisarAluno].matricula);
            printf("\t\t\t   Nota: %.1f                                     \n", aluno[pesquisarAluno].nota);
            if(aluno[pesquisarAluno].nota >= 7){
                printf("\t\t\t   Status: Aprovado                                     \n");
            } else {
                printf("\t\t\t   Status: Reprovado                                     \n");
            }
            printf("\t\t\t  - - - - - - - - - - - - - - - - - - - - - - - - \n");
            printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
            scanf("%d", &menuNav);
            main();
        }
    }
}


// ______     _       _             _         _____     _        _ 
// | ___ \   | |     | |           (_)       |_   _|   | |      | |
// | |_/ /___| | __ _| |_ ___  _ __ _  ___     | | ___ | |_ __ _| |
// |    // _ \ |/ _` | __/ _ \| '__| |/ _ \    | |/ _ \| __/ _` | |
// | |\ \  __/ | (_| | || (_) | |  | | (_) |   | | (_) | || (_| | |
// \_| \_\___|_|\__,_|\__\___/|_|  |_|\___/    \_/\___/ \__\__,_|_|
                                                                
                                                                

void relatorio(){
    int relatorio = alunos - 1;
    limpar;
	printf("\t\t\t _________________________________________________\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|                     RELATORIO                   |\n");
	printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("\t\t\t                                                 \n");
	printf("\t\t\t    Total de alunos: %d                          \n", relatorio);
	printf("\t\t\t    Total de aprovados: %d                          \n", aprovados);
	printf("\t\t\t    Total de reprovados: %d                          \n", reprovados);
	printf("\t\t\t    Media das notas: %.1f                          \n", media/relatorio);
	printf("\t\t\t|_________________________________________________|\n");
    printf("\n\nDigite qualquer valor para retornar ao menu\n\n");
    scanf("%d", &menuNav);
    main();



}

// ___  ___                  ______     _            _             _ 
// |  \/  |                  | ___ \   (_)          (_)           | |
// | .  . | ___ _ __  _   _  | |_/ / __ _ _ __   ___ _ _ __   __ _| |
// | |\/| |/ _ \ '_ \| | | | |  __/ '__| | '_ \ / __| | '_ \ / _` | | 
// | |  | |  __/ | | | |_| | | |  | |  | | | | | (__| | |_) | (_| | |
// \_|  |_/\___|_| |_|\__,_| \_|  |_|  |_|_| |_|\___|_| .__/ \__,_|_|
//                                                    | |            
//                                                    |_|            


int main(void){
    limpar
	printf("\t\t\t _________________________________________________\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|                     CADASTRO                    |\n");
	printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|    1 -  Cadastrar um novo aluno                 |\n");
	printf("\t\t\t|    2  -  Listar alunos                          |\n");
	printf("\t\t\t|    3  -  Pesquisar aluno                        |\n");
	printf("\t\t\t|    4  -  Relatorio total                        |\n");
	printf("\t\t\t|_________________________________________________|\n");

    scanf("%d", &menuNav);
    switch (menuNav)
    {
    case 1:
        cadastrar();
        break;
    case 2:
        listar();
        break;
    case 3:
        pesquisar();
        break;
    case 4:
        relatorio();
    default:
        break;
    }

}
