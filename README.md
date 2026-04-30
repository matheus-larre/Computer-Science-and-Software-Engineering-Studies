# Computer Science & Software Engineering Journey

This repository serves as a personal record of my academic and professional growth in Computer Science and Software Engineering, tracking my learning progress at **CESAR School** and **UFPE** (Federal University of Pernambuco).

## Software Design: Cohesion

Following the concepts discussed in Marco Tulio Valente's book, *Modern Software Engineering*, cohesion is a fundamental principle in software design. It refers to the degree to which the elements inside a module (such as a class or function) belong together.

A highly cohesive module performs one specific task and does it well, which makes the code easier to maintain, test, and reuse.

### Practical Examples in C

In this repository, I have implemented two versions of a simple grading system to demonstrate the difference between High and Low Cohesion.

#### 1. Low Cohesion ([`CodigoBaixaCoesao.c`](./CodigoBaixaCoesao.c))
In this example, the function `gerenciarTudo()` (Manage Everything) lacks cohesion because it handles multiple responsibilities:
- Input/Output (reading grades)
- Logic (calculating the average)
- Business rules (determining status)
- Formatting results

This makes the code harder to change. If we wanted to change how grades are input (e.g., reading from a file instead of the terminal), we would have to modify a function that also contains calculation logic.

#### 2. High Cohesion ([`CodigoAltaCoesao.c`](./CodigoAltaCoesao.c))
In this improved version, responsibilities are clearly separated into specific functions:
- `obterNotas()`: Dedicated to user input.
- `calcularMedia()`: Focused purely on the mathematical calculation.
- `exibirRelatorio()`: Responsible only for presenting information.

Each function does one thing. This separation of concerns allows for easier unit testing and better code readability.

---

*This repository is continuously updated as I progress through my studies.*
