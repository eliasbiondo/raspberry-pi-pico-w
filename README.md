# Caracterização do Sistema Embarcado Raspberry Pi Pico W

**Autor:** Elias Biondo  
**Instituição:** Instituto de Tecnologia e Liderança  
**E-mail:** elias.biondo@sou.inteli.edu.br

## Resumo

Este relatório apresenta uma análise detalhada do sistema embarcado Raspberry Pi Pico W, um microcontrolador de baixo custo e alto desempenho que oferece uma ampla gama de possibilidades para desenvolvedores e entusiastas de tecnologia. O estudo inclui uma descrição completa do manual de referência do componente, explorando suas especificações técnicas, funcionalidades, vantagens e desvantagens. Além disso, as interfaces de comunicação com o componente são discutidas, proporcionando uma visão abrangente de como interagir com o Raspberry Pi Pico W. Finalmente, uma prova de conceito é fornecida para demonstrar a aplicação prática de uma das interfaces de comunicação com outros sistemas. Este relatório visa servir como um recurso informativo e prático para aqueles que desejam se familiarizar com o Raspberry Pi Pico W e suas capacidades.

**Palavras-chave:** Raspberry Pi Pico W; Sistema Embarcado; Manual de Referência; Interfaces de Comunicação; Prova de Conceito.

## Glossário

- **RASPBERRY PI PICO W:** Microcontrolador de baixo custo e alto desempenho desenvolvido pela Raspberry Pi Foundation, equipado com interfaces de comunicação como GPIO, USB, Wi-Fi e Bluetooth.
- **GPIO (GENERAL PURPOSE INPUT/OUTPUT):** Interface de comunicação que permite a interação direta com componentes eletrônicos através de pinos de entrada e saída.
- **USB (UNIVERSAL SERIAL BUS):** Interface de comunicação que fornece uma maneira conveniente de conectar periféricos ao Raspberry Pi Pico W.
- **WI-FI:** Interface de comunicação que permite a conexão sem fio do Raspberry Pi Pico W a uma rede, facilitando a comunicação com a Internet e outros dispositivos conectados à mesma rede.
- **BLUETOOTH:** Interface de comunicação que permite a conexão sem fio do Raspberry Pi Pico W a outros dispositivos equipados com Bluetooth, como smartphones, tablets e computadores.
- **SISTEMA EMBARCADO:** Sistema computacional com uma função dedicada, que faz parte de um sistema maior e é projetado para operar com requisitos específicos de recursos e energia.
- **MICROCONTROLADOR:** Pequeno computador em um único circuito integrado contendo um processador, memória e periféricos de entrada/saída.
- **PROVA DE CONCEITO:** Implementação de um pequeno e específico aspecto de um sistema proposto, usado para demonstrar a viabilidade de uma ideia ou técnica.

## Índice

1. [Introdução](#introdução)
2. [Manual de Referência](#manual-de-referência)
    1. [Especificações Técnicas](#especificações-técnicas)
    2. [Vantagens](#vantagens)
    3. [Desvantagens](#desvantagens)
3. [Interfaces de Comunicação](#interfaces-de-comunicação)
4. [Prova de Conceito](#prova-de-conceito)
    1. [Pisca-Pisca LED](#pisca-pisca-led)
    2. [Escolha da Interface de Comunicação](#escolha-da-interface-de-comunicação)
    3. [Objetivos da Prova de Conceito](#objetivos-da-prova-de-conceito)
    4. [Componentes Necessários](#componentes-necessários)
    5. [Passo a Passo](#passo-a-passo)
    6. [Circuito Completo](#circuito-completo)
    7. [Live Demo](#live-demo)
5. [Conclusão](#conclusão)
6. [Referências](#referências)

## 1 Introdução

O desenvolvimento de sistemas embarcados tem se tornado cada vez mais relevante no campo da tecnologia, impulsionado pela crescente demanda por dispositivos inteligentes e conectados. Um sistema embarcado é um sistema de computação dedicado, projetado para executar uma ou algumas funções dedicadas, geralmente com requisitos de tempo real. Dentre os diversos microcontroladores disponíveis no mercado, o Raspberry Pi Pico W destaca-se por suas características únicas e potencialidades.

O Raspberry Pi Pico W foi escolhido como o tema deste trabalho devido a várias razões. Primeiramente, é um microcontrolador de baixo custo, tornando-o acessível para uma ampla gama de usuários. Além disso, apesar do seu baixo custo, o Raspberry Pi Pico W oferece um alto desempenho, sendo capaz de executar uma variedade de tarefas complexas. Além disso, a Raspberry Pi Foundation, a organização por trás do Pico W, tem uma forte reputação na comunidade de tecnologia, e é conhecida por seus produtos de alta qualidade e suporte extensivo à comunidade. Finalmente, o Raspberry Pi Pico W tem uma grande comunidade de usuários, o que significa que há uma grande quantidade de recursos de aprendizado disponíveis, bem como a oportunidade de colaborar com outros desenvolvedores.

O objetivo deste trabalho é apresentar uma caracterização do sistema embarcado Raspberry Pi Pico W, fornecendo uma descrição detalhada do componente e suas interfaces de comunicação. Além disso, o trabalho visa demonstrar a aplicação prática de uma das interfaces de comunicação do Raspberry Pi Pico W através de uma prova de conceito. Espera-se que este trabalho sirva como um recurso valioso para aqueles que desejam se familiarizar com o Raspberry Pi Pico W e suas capacidades.

## 2 Manual de Referência

O Raspberry Pi Pico W é uma microcontroladora robusta, flexível e versátil, equipada com o chip RP2040, projetado pela Raspberry Pi no Reino Unido. Esta placa acrescenta conectividade sem fio de 2,4 GHz (802.11n) e Bluetooth 5.2 à plataforma Pico, tornando-a uma solução ideal para aplicações e projetos de Internet das Coisas (IoT). Além disso, é compatível com os pinos do Raspberry Pi Pico, seu antecessor.

### 2.1 Especificações Técnicas

Tabela 1 - Especificações Técnicas - Raspberry Pi Pico W

| Especificação | Descrição |
| --- | --- |
| Dimensões | 21 mm x 51 mm |
| Processador | Dual-core Arm Cortex-M0+ com clock flexível de até 133 MHz |
| Memória | 264 kB de SRAM interna e suporte para até 16 MB de flash externo |
| Rede sem fio | 802.11n, banda única (2,4 GHz) |
| Segurança de Rede | WPA3 |
| Ponto de acesso suave | Suporta até quatro clientes |
| Bluetooth | 5.2 |
| Papéis do Bluetooth | Suporte para os papéis Central e Periférico do Bluetooth LE e Bluetooth Clássico |
| Antena | Integrada, licenciada pela ABRACON (anteriormente ProAnt) |
| Interface sem fio | Conectada via SPI ao microcontrolador RP2040 |
| GPIO | 26 pinos multifuncionais, incluindo 3 entradas analógicas |
| Controladores | 2 x UART, 2 x SPI, 2 x I2C, 16 x canais PWM |
| USB | 1 x controlador e PHY USB 1.1, com suporte a host e dispositivo |
| Máquinas de estado de E/S programáveis | 8 x PIO para suporte a periféricos personalizados |

Fonte: Raspberry Pi Foundation. Raspberry Pi Pico.

### 2.2 Vantagens

- Pequeno, rápido e econômico;
- Programável em C e MicroPython, adaptando-se a uma ampla gama de aplicações e níveis de habilidade;
- Interface sem fio integrada, permitindo comunicação sem fio com outros dispositivos e redes;
- Diversas interfaces digitais, possibilitando o controle de inúmeras operações domésticas, de hobby e industriais; e
- Recurso de E/S programável, permitindo a criação de periféricos personalizados.

### 2.3 Desvantagens

- Consumo de energia maior em comparação ao Raspberry Pi Pico sem interface sem fio;
- Limitações de pinos devido à interface sem fio compartilhada; e
- Necessidade de cuidado especial com a antena para obter o melhor desempenho sem fio.

## 3 Interfaces de Comunicação

Nesta seção, exploraremos as diversas formas de comunicação disponíveis no Raspberry Pi Pico W, um componente crucial para qualquer sistema embutido. A capacidade de se comunicar com outros dispositivos e componentes é fundamental para a funcionalidade de um sistema embutido, pois permite a troca de informações, a execução de comandos e a coordenação de atividades entre dispositivos. O Raspberry Pi Pico W oferece várias interfaces de comunicação, incluindo GPIO, USB, Wi-Fi e Bluetooth, cada uma com suas próprias características, vantagens e desvantagens. Essas interfaces permitem que o Raspberry Pi Pico W interaja com uma ampla gama de dispositivos e componentes, desde simples LEDs e botões até complexos sensores e atuadores, redes de computadores e serviços de internet.

A primeira é a interface GPIO (General Purpose Input/Output). Os pinos GPIO permitem que o Raspberry Pi Pico W seja conectado a sensores, atuadores, LEDs, botões, displays e outros componentes eletrônicos. Esta interface é particularmente adequada para projetos que requerem uma interação direta e de baixo nível com os componentes físicos. No entanto, a comunicação via GPIO tem suas limitações, como o número limitado de pinos disponíveis, a necessidade de fiação e solda, e o risco de danificar o dispositivo ou os componentes se não for feita corretamente.

A segunda interface é a USB. O Raspberry Pi Pico W possui um conector micro USB que permite a conexão do dispositivo a um computador ou a uma fonte de alimentação. Esta interface é ideal para projetos que requerem uma conexão rápida e fácil com um computador ou uma fonte de energia. No entanto, a comunicação via USB também tem suas desvantagens, como a dependência de um cabo e de um computador ou de uma fonte de alimentação externa, e a possibilidade de interferência com outros dispositivos USB conectados ao mesmo computador.

A terceira interface é a Wi-Fi. O Raspberry Pi Pico W possui uma interface sem fio integrada que permite a conexão do dispositivo a uma rede Wi-Fi ou a criação de um ponto de acesso Wi-Fi. Esta interface é adequada para projetos que requerem uma conexão sem fio e sem fio com outros dispositivos e redes. No entanto, a comunicação via Wi-Fi também tem suas desvantagens, como o consumo de energia maior do que outras formas de comunicação, a necessidade de configurar e proteger a rede Wi-Fi, e a possibilidade de interferência ou perda de sinal em ambientes ruidosos ou congestionados.

Por último, o Raspberry Pi Pico W possui uma interface Bluetooth integrada que permite a conexão do dispositivo a outros dispositivos Bluetooth. Esta interface é ideal para projetos que requerem uma conexão sem fio e de baixa energia com outros dispositivos Bluetooth. No entanto, a comunicação via Bluetooth também tem suas limitações, como o alcance e a largura de banda da conexão, a necessidade de emparelhar os dispositivos antes da comunicação, e a possibilidade de interferência com outros dispositivos Bluetooth na mesma área.

Cada uma dessas interfaces de comunicação tem seu lugar e uso apropriado, dependendo das necessidades e dos requisitos do projeto. Portanto, é importante compreender as características, as vantagens e as desvantagens de cada interface para fazer a escolha certa.

## 4 Prova de Conceito

A Prova de Conceito (PoC) é uma implementação prática do conceito que estamos explorando, que neste caso é a utilização do Raspberry Pi Pico W para controlar um LED através da interface de comunicação GPIO. A PoC é uma parte crucial do relatório, pois fornece evidências tangíveis de que o conceito é viável e funciona como esperado.

### 4.1 Pisca-Pisca LED

Para demonstrar o uso da interface GPIO no Raspberry Pi Pico W, criou-se um projeto simples de pisca-pisca LED. O LED é um dos componentes eletrônicos mais básicos e é frequentemente usado em projetos iniciais devido à sua simplicidade e eficácia na demonstração de controle de saída. Neste projeto, o Raspberry Pi Pico W é programado para ligar e desligar um LED a cada segundo.

### 4.2 Escolha da Interface de Comunicação

A interface GPIO foi escolhida para esta prova de conceito devido à sua simplicidade e eficácia para controlar dispositivos eletrônicos. A interface GPIO permite o controle direto dos pinos de entrada e saída do Raspberry Pi Pico W, o que a torna ideal para projetos simples como este.
Além disso, a interface GPIO proporciona uma compreensão mais profunda do funcionamento interno do Raspberry Pi Pico W, pois requer uma interação direta com o hardware. Isso pode ser benéfico para projetos mais complexos no futuro.

### 4.3 Objetivos da Prova de Conceito

A Prova de Conceito (PoC) tem como principal objetivo demonstrar a viabilidade do uso da interface GPIO do Raspberry Pi Pico W para controlar um componente eletrônico simples, neste caso, um LED. Além disso, a PoC visa:

- Demonstrar a funcionalidade básica de saída digital do Pico.
- Fornecer uma compreensão prática de como programar o Pico utilizando a linguagem C/C++.
- Estabelecer uma base sólida para projetos mais complexos que envolvam a interface GPIO.

### 4.4 Componentes Necessários

- **Raspberry Pi Pico W:** A placa de desenvolvimento que será usada para controlar o LED.
- **LED:** Um diodo emissor de luz que será controlado pelo Pico.
- **Resistor:** Um resistor de 220-330 ohms para limitar a corrente ao LED e evitar danos.
- **Cabos jumper:** Para conectar o LED e o resistor ao Pico.
- **Breadboard:** Uma placa de prototipagem para facilitar as conexões entre os componentes.

### 4.5 Passo a Passo

1. **Montagem do Circuito:** Primeiro, conecte o LED à breadboard. O terminal mais longo do LED (ânodo) deve ser conectado ao resistor, que por sua vez deve ser conectado ao pino GPIO que definimos no código (neste caso, o pino 15). O terminal mais curto do LED (cátodo) deve ser conectado ao pino de terra (GND) do Pico.
2. **Programação do Pico:** Carregue o código fornecido anteriormente no Raspberry Pi Pico W. Certifique-se de que o Pico está conectado ao seu computador via USB e que o ambiente de desenvolvimento adequado está configurado.
3. **Execução do Código:** Após carregar o código, o LED deve começar a piscar a cada segundo. Se isso não acontecer, verifique suas conexões e certifique-se de que o código foi carregado corretamente.
4. **Análise dos Resultados:** Observe o comportamento do LED. Ele deve acender e apagar a cada segundo, demonstrando que o Pico está controlando corretamente o GPIO. Se o LED não estiver se comportando como esperado, pode ser necessário solucionar problemas no circuito ou no código.

### 4.6 Circuito Completo

![Circuito Completo](https://github.com/eliasbiondo/raspberry-pi-pico-w/blob/main/img/circuito-completo.png?raw=true)

Fonte: autoria própria.

### 4.7 Live Demo

Uma demonstração ao vivo do projeto Pisca-Pisca LED pode ser acessada e executada através da plataforma Wokwi, uma ferramenta online de simulação de hardware que permite aos usuários experimentar e testar projetos de hardware sem a necessidade de montar fisicamente o circuito. A demonstração ao vivo pode ser acessada através do seguinte link: [Demonstração ao Vivo](https://wokwi.com/projects/379317665939449857)

A demonstração ao vivo mostra o circuito completo e o código que está sendo executado. O LED no circuito virtual deve piscar a cada segundo, assim como aconteceria no circuito físico real. Isso demonstra que o Raspberry Pi Pico W é capaz de controlar um LED através da interface GPIO, e que o código está funcionando como esperado.

## 5 Conclusão

O Raspberry Pi Pico W é um microcontrolador poderoso e versátil que oferece uma ampla gama de funcionalidades para desenvolvedores e entusiastas de tecnologia. Com suas várias interfaces de comunicação, incluindo GPIO, USB, Wi-Fi e Bluetooth, o Pico W é capaz de interagir com uma ampla gama de dispositivos e componentes, tornando-o uma escolha ideal para uma grande variedade de projetos.

A prova de conceito demonstrou a viabilidade do uso da interface GPIO do Pico W para controlar um LED. Apesar da simplicidade do projeto, ele forneceu uma compreensão prática de como interagir com o hardware do Pico W e como programá-lo utilizando a linguagem C/C++. Além disso, estabeleceu uma base sólida para projetos mais complexos que envolvam a interface GPIO.

Em conclusão, o Raspberry Pi Pico W é um componente valioso para qualquer desenvolvedor ou entusiasta de tecnologia. Com suas capacidades robustas e flexíveis, juntamente com seu baixo custo e alta acessibilidade, o Pico W é uma excelente escolha para uma ampla gama de aplicações e projetos.

## 6 Referências

[1] RASPBERRY PI FOUNDATION. Raspberry Pi Documentation - Raspberry Pi Pico and Pico W. Disponível em: [https://bit.ly/46VPAYe](https://bit.ly/46VPAYe). Acesso em: 20 out. 2023.

[2] RASPBERRY PI FOUNDATION. Buy a Raspberry Pi Pico – Raspberry Pi. Disponível em: [https://bit.ly/47gLz0L](https://bit.ly/47gLz0L). Acesso em: 20 out. 2023.

[3] RASPBERRY PI FOUNDATION. Raspberry Pi Pico W: your $6 IoT platform. Disponível em: [https://bit.ly/3rR7gp3](https://bit.ly/3rR7gp3). Acesso em: 20 out. 2023.

[4] RANDOM NERD TUTORIALS. Getting Started with Raspberry Pi Pico (and Pico W). Disponível em: [https://bit.ly/45yTogQ](https://bit.ly/45yTogQ). Acesso em: 20 out. 2023.

[5] RANDOM NERD TUTORIALS. Raspberry Pi Pico and Pico W Pinout Guide: GPIOs Explained. Disponível em: [https://bit.ly/46C3yic](https://bit.ly/46C3yic). Acesso em: 20 out. 2023.

[6] RASPBERRY PI FORUMS. Two-way communication with RPi PICO W. Disponível em: [https://bit.ly/40beCjW](https://bit.ly/40beCjW). Acesso em: 20 out. 2023.