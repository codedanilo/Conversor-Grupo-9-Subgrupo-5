// Conversor de Temperatura

#include <stdio.h>
#include <locale.h>  

// Funções para conversão de unidades de temperatura
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float fahrenheitParaKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinParaFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");  // Configura o ambiente para suporte a acentuação

    int escolhaEntrada, escolhaSaida;
    float temperaturaEntrada, temperaturaSaida;

    // Exibe o menu de opções para o usuário
    printf("Conversor de Temperaturas\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Digite sua escolha (1, 2, ou 3): ");
    scanf("%d", &escolhaEntrada);

    // Verificação para garantir que a entrada do usuário é válida
    if (escolhaEntrada < 1 || escolhaEntrada > 3) {
        printf("Escolha inválida para a unidade de entrada.\n");
        return 1; // Encerra o programa se a entrada for inválida
    }

    // Solicita a temperatura de entrada
    printf("Digite a temperatura na unidade escolhida: ");
    scanf("%f", &temperaturaEntrada);

    // Exibe o menu de opções para a unidade de saída
    printf("Escolha a unidade de saída:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Digite sua escolha (1, 2, ou 3): ");
    scanf("%d", &escolhaSaida);

    // Verificação para garantir que a escolha de saída é válida
    if (escolhaSaida < 1 || escolhaSaida > 3) {
        printf("Escolha inválida para a unidade de saída.\n");
        return 1; // Encerra o programa se a entrada for inválida
    }

    // Converte a temperatura conforme as escolhas do usuário
    if (escolhaEntrada == 1) {  // Entrada em Celsius
        if (escolhaSaida == 1) {
            temperaturaSaida = temperaturaEntrada;  // Celsius para Celsius
        } else if (escolhaSaida == 2) {
            temperaturaSaida = celsiusParaFahrenheit(temperaturaEntrada);  // Celsius para Fahrenheit
        } else if (escolhaSaida == 3) {
            temperaturaSaida = celsiusParaKelvin(temperaturaEntrada);  // Celsius para Kelvin
        }
    } else if (escolhaEntrada == 2) {  // Entrada em Fahrenheit
        if (escolhaSaida == 1) {
            temperaturaSaida = fahrenheitParaCelsius(temperaturaEntrada);  // Fahrenheit para Celsius
        } else if (escolhaSaida == 2) {
            temperaturaSaida = temperaturaEntrada;  // Fahrenheit para Fahrenheit
        } else if (escolhaSaida == 3) {
            temperaturaSaida = fahrenheitParaKelvin(temperaturaEntrada);  // Fahrenheit para Kelvin
        }
    } else if (escolhaEntrada == 3) {  // Entrada em Kelvin
        if (escolhaSaida == 1) {
            temperaturaSaida = kelvinParaCelsius(temperaturaEntrada);  // Kelvin para Celsius
        } else if (escolhaSaida == 2) {
            temperaturaSaida = kelvinParaFahrenheit(temperaturaEntrada);  // Kelvin para Fahrenheit
        } else if (escolhaSaida == 3) {
            temperaturaSaida = temperaturaEntrada;  // Kelvin para Kelvin
        }
    }

    // Exibe o resultado da conversão
    printf("Temperatura convertida: %.2f\n", temperaturaSaida);

    // Espera o usuário pressionar ENTER antes de fechar
    printf("Pressione ENTER para sair...");
    getchar();  // Captura o Enter para "segurar" o programa
    getchar();  // Aguarda o Enter do usuário

    return 0;
}
