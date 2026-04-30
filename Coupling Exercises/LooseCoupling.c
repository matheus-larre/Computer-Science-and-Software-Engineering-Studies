//Good Practice: Loose Coupling
#include <stdio.h>

// ACOPLAMENTO FRACO: A função é um "puro transformador de dados".
// Ela não depende de variáveis globais nem de structs complexos.
// Recebe apenas o que precisa (Preço, Imposto, Desconto).
float calculateFinalPrice(float basePrice, float tax, float discount) {
    return basePrice + (basePrice * tax) - (basePrice * discount);
}

int main() {
    // Os dados são preparados fora da função lógica
    float productPrice = 250.00;
    float currentTax = 0.05;
    float holidayDiscount = 0.10;

    // A função é chamada passando apenas os valores necessários
    float result = calculateFinalPrice(productPrice, currentTax, holidayDiscount);

    printf("Sale processed successfully.\n");
    printf("Final Price: %.2f\n", result);

    return 0;
}