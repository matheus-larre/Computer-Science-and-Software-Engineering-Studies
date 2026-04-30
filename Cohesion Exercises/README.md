# Software Design: Cohesion Studies

This module explores the core principles of **Cohesion**, as discussed in Chapter 5 of Marco Tulio Valente's book, *Modern Software Engineering*.

## Concepts

Cohesion refers to the degree to which the elements inside a module belong together. A highly cohesive module performs one specific task, adhering to the **Single Responsibility Principle (SRP)**.

### Practical Examples in C

I have implemented two versions of a grading system to demonstrate the impact of cohesion on code quality:

#### 1. Low Cohesion (`CodigoBaixaCoesao.c`)
In this example, the function `gerenciarTudo()` lacks cohesion because it handles multiple responsibilities:
*   **Input/Output**: Reading grades from the terminal.
*   **Logic**: Calculating the average.
*   **Business Rules**: Determining the student's status.
*   **Formatting**: Displaying the report.

#### 2. High Cohesion (`CodigoAltaCoesao.c`)
In this improved version, responsibilities are clearly separated:
*   `obterNotas()`: Dedicated to user input.
*   `calcularMedia()`: Focused purely on mathematical calculation.
*   `exibirRelatorio()`: Responsible only for presentation.

### Benefits of High Cohesion
*   **Maintainability**: Easier to update specific logic without breaking the entire system.
*   **Testability**: Individual functions can be unit-tested.
*   **Readability**: The code intent is clear and organized.

*This repository is continuously updated as I progress through my studies.*