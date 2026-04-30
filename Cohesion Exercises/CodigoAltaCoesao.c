#include <stdio.h>

// ALTA COESÃO: Função focada apenas em cálculo
float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

// ALTA COESÃO: Função focada apenas em exibir o resultado
void exibirRelatorio(float media) {
    printf("Média Final: %.2f\n", media);
    printf("Status: %s\n", (media >= 7.0) ? "APROVADO" : "REPROVADO");
}

// ALTA COESÃO: Função focada apenas em obter as notas do usuário
void obterNotas(float *n1, float *n2) {
    printf("Digite a primeira nota: ");
    scanf("%f", n1);
    printf("Digite a segunda nota: ");
    scanf("%f", n2);
}

// SEM ISSO RODA NÃO, PAI:
int main() {
    float nota1, nota2; // Declarar variáveis para armazenar as notas

    obterNotas(&nota1, &nota2); // Chamar a nova função para preencher as notas
    
    float resultado = calcularMedia(nota1, nota2);
    exibirRelatorio(resultado);
    
    return 0;
}
