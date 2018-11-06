#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct {
	char nome[30];
	char marca[30];
	float preco;
}Produto;

typedef struct {
	Produto produto;
	int quantidade;
}ItemProduto;

struct estoque {
    Produto produto;
    int quantidade
}listaProdutos[200];

void realizaCadastro(int* pos);
void listaCadastro(ItemProduto estoque[]);
void exibiCadastro(ItemProduto produto);
void alteraCadastro(ItemProduto* produto);
void salvaCadastro(ItemProduto* estoque);
void excluiCadastro(ItemProduto* estoque);


int main() {
	int pos = 0;
	ItemProduto lista[200];
	int opcao;
	do {
		printf("Selecione uma opção:\n");
		printf("1 - Realizar cadastro\n");
		printf("2 - Exibir cadastro\n");
		printf("3 - Atualizar cadastro\n");
		printf("4 - Salvar cadastro\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);
        getchar();

		if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 0) {
			printf("Opção invalida.");
		}
		if (opcao == 1) {
			ItemProduto item;
			realizaCadastro(&pos);
			printf("%s",listaProdutos[pos].produto.nome);
			printf("%d\n", pos);
		}
	} while (opcao != '0');
}

void realizaCadastro(int* pos) {
	
	float preco;
    int quantidade;
	printf("Digite o nome do produto:\n");
	gets(listaProdutos[*pos].produto.nome);
	printf("Digite o nome da marca :\n");
	gets(listaProdutos[*pos].produto.marca);
	printf("Digite o preço:\n");
	scanf("%f",&preco);
	printf("Digite a quantidade:\n");
	scanf("%d",&quantidade); 
		
	listaProdutos[*pos].produto.preco = preco;
    listaProdutos[*pos].quantidade = 0;
	printf("%s",listaProdutos[*pos].produto.nome);
	*pos = *pos + 1;
    
    getchar();
	

}

void listaCadastro(ItemProduto estoque[]) {
}
void exibiCadastro(ItemProduto produto) {
	printf("Nome: %s, Marca: %s, Preco: %f, Quantidade: %d");

}
void alteraCadastro(ItemProduto* produto){

}
void salvaCadastro(ItemProduto* estoque) {

}
void excluiCadastro(ItemProduto* estoque) {

}
