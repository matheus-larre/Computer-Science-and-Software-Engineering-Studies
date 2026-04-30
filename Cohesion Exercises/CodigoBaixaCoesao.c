#include <stdio.h>

// BAIXA COESÃO: Esta função agora tem 4 responsabilidades:
// 1. Entrada de dados (I/O)
// 2. Cálculo da média
// 3. Formatação/Exibição do relatório (I/O)
// 4. Regra de Negócio (Status)
void gerenciarTudo() {
    float n1, n2;
    
    // 1. Entrada de dados misturada com lógica
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    // 2. Cálculo
    float media = (n1 + n2) / 2;
    
    // 3. Exibição e 4. Regra de Negócio misturadas
    printf("\n--- RELATÓRIO ---\n");
    printf("Média Final: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("Status: APROVADO\n");
    } else {
        printf("Status: REPROVADO\n");
    }
}

int main() {
    // A main não sabe o que acontece lá dentro, a função é uma "caixa preta" 
    // que faz coisas demais (baixa coesão).
    gerenciarTudo();
    
    return 0;
}
