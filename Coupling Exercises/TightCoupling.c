//Bad Practice: Tight Coupling
#include <stdio.h>
#include <string.h>

// Variáveis globais aumentam o acoplamento (Bad Practice)
float tax_rate = 0.05;

struct Product {
    char name[50];
    float price;
    int category; // 1 para Eletrônicos, 2 para Alimentos
};

// ACOPLAMENTO FORTE: Esta função conhece a estrutura interna de 'Product'
// e depende da variável global 'tax_rate'. 
// Se o struct mudar ou a global sumir, esta função quebra.
void processSaleBad(struct Product p) {
    float final_price;
    
    if (p.category == 1) {
        final_price = p.price + (p.price * tax_rate) - (p.price * 0.10); // Desconto fixo de 10%
    } else {
        final_price = p.price + (p.price * tax_rate);
    }

    printf("Product: %s | Final Price: %.2f\n", p.name, final_price);
}

int main() {
    struct Product myProd = {"Gaming Mouse", 250.00, 1};
    processSaleBad(myProd);
    return 0;
}