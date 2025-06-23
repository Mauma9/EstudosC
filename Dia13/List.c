// listas são espaços aleatorios na memoria que são ordenados por ponteiros

#include <stdio.h>
#include <stdlib.h>

// Deiiçao do nó
typedef struct No
{
    int dado;
    struct No *proximo;
} No;

// defnição da lista com nome cabeça
typedef struct Lista
{
    No *cabeca;
    int tamanho;
} Lista;

// array dificil de inserir, mas facil de achar
// lista facil de inserir  dificil de achar

Lista *criarLista()
{
    Lista *lista = (Lista *)malloc(sizeof(lista));
    if (lista == NULL)
    {
        printf("erro");
        return NULL;
    }

    lista->cabeca = (No *)malloc(sizeof(No));
    if (lista->cabeca == NULL)
    {
        printf("erro");
        return NULL;
    }

    lista->cabeca->dado = 0;
    lista->cabeca->proximo = NULL;
    lista->tamanho = 0;
    return lista;
}

void inserirInicio(Lista *lista, int valor)
{
    if (lista == NULL)
    {
        printf("erro");
        return;
    }

    No *novoNo = (No *)malloc(sizeof(No));
    if (novoNo == NULL)
    {
        printf("erro");
        return;
    }
    // adici
    novoNo->dado = valor;
    novoNo->proximo = lista->cabeca->proximo;
    lista->cabeca->proximo = novoNo;
    lista->tamanho++;
}

void inserirFinal(Lista *lista, int valor)
{
    if (lista == NULL)
    {
        printf("erro");
        return;
    }

    No *novoNo = (No *)malloc(sizeof(No));
    if (novoNo == NULL)
    {
        printf("erro");
        return;
    }
    // adici
    novoNo->dado = valor;
    novoNo->proximo = NULL;
    // percorrer até o fim do nó
    No *atual = lista->cabeca;
    while (atual->proximo != NULL)
    {
        atual = atual->proximo;
    }
    atual->proximo = novoNo;
    lista->tamanho++;
}

No *buscar(Lista *lista, int valor)
{
    if (lista == NULL)
    {
        printf("erro");
        return NULL;
    }
    No *atual = lista->cabeca->proximo;
    while (atual != NULL)
    {
        if (atual->dado == valor)
        {
            return atual;
        }
        return NULL;
    }
}

int remover(Lista *lista, int valor)
{
    if (lista == NULL)
    {
        printf("erro");
        return 1;
    }

    // começar da cabeça para encontrar o nó anterior ao que sera removido
    No *anterior = lista->cabeca;
    No *atual = anterior->proximo;

    while (atual != NULL)
    {
        if (atual->dado == valor)
        {
            // conectar o nó anterior para o proximo nó pulando o atual
            anterior->proximo = atual->proximo;
            free(atual);
            lista->tamanho--;
            return 1; // sucesso
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return 0; // não encontrado
}

void liberarLista(Lista *lista)
{
    if (lista == NULL)
    {
        printf("erro");
        return;
    }

    No *atual = lista->cabeca;
    while (atual != NULL)
    {
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    free(lista);
}