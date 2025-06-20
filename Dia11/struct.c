#include <stdio.h>
#define tamanhoNome 50

typedef struct
{
    char nome[tamanhoNome];
    int matricula;
    int idade;
    float notas[3];
    float media;
} Aluno;

void calcularMedia(Aluno *a)
{
    float soma = 0;
    float media = 0;
    for (int i = 0; i < 3; i++)
    {
        soma += a->notas[i];
    }
    a->media = soma / 3;
}

Aluno CriarAluno()
{
    Aluno a;
    printf("digite o nome do aluno: ");
    fgets(a.nome, 50, stdin);
    printf("digite a matricula: ");
    scanf("%d", &a.matricula);
    printf("digite a idade: ");
    scanf("%d", &a.idade);

    printf("digite a notas: ");
    for (int i = 0; i < 3; i++)
    {
        printf("digite a nota %d: ", i + 1);
        scanf("%f", &a.notas[i]);
    }
    calcularMedia(&a);
    // limpar buffer para evitar problemas futuros (ex: fgets)
    while (getchar() != '\n')
        ;

    return a;
}

void exibirAluno(Aluno *a)
{
    printf("nome: %s\nmatricula: %d\nidade: %d\n", a->nome, a->matricula, a->idade);
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", a->notas[i]);
    }
    printf("%f\n", a->media);
}

void buscarAluno(Aluno turma[], int tamanho, int mat)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (turma[i].matricula == mat)
        {
            exibirAluno(&turma[i]);
        }
    }
}

int main(void)
{
    Aluno a = CriarAluno();
    Aluno b = CriarAluno();
    Aluno c = CriarAluno();

    Aluno turma[3] = {a, b, c};

    int matricula = 0;
    exibirAluno(&c);
    printf("digite a matricula alvo: ");
    scanf("%d", &matricula);
    while (getchar() != '\n')
        ;
    buscarAluno(turma, 3, matricula);
}
