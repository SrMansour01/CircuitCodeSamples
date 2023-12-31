
# Controle de Dois Motores de Passo com ESP8266 e AccelStepper

Este é um exemplo de código que demonstra como controlar dois motores de passo simultaneamente usando um ESP8266 e a biblioteca AccelStepper. O código move os motores para frente e para trás em uma sequência de etapas, mostrando como configurar e usar a biblioteca para controlar os motores de passo.

## Requisitos

- Placa ESP8266 (ou similar)
- Dois motores de passo com controladores/drivers
- Biblioteca AccelStepper

## Instalação

1. Certifique-se de ter instalado a biblioteca AccelStepper. Você pode instalá-la usando o Library Manager no Arduino IDE ou baixando-a manualmente do GitHub.

2. Conecte os motores de passo aos pinos especificados no código (`MOTOR1_STEP_PIN`, `MOTOR1_DIR_PIN`, `MOTOR2_STEP_PIN`, `MOTOR2_DIR_PIN`).

3. Carregue o código no seu ESP8266 usando a Arduino IDE.

## Como Funciona

O código utiliza a biblioteca AccelStepper para controlar os dois motores de passo. Ele configura as velocidades máximas e acelerações para ambos os motores e, em seguida, move-os para a posição 2000 passos e depois de volta para a posição inicial (0 passos).

O loop principal do código faz uso das funções `moveTo()` e `run()` da AccelStepper para controlar os motores de forma sequencial, garantindo que os motores executem seus movimentos conforme necessário.

## Contribuição

Este é apenas um exemplo de código básico para demonstração. Sinta-se à vontade para contribuir com melhorias, otimizações ou exemplos adicionais para ampliar o uso deste código.

## Autor

Esse código foi desenvolvido por [SrMansour01](https://github.com/SrMansour01).
