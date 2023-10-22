/**
 * @def LED_PIN 15
 * @brief Define o pino do LED.
 */
#define LED_PIN 15

/**
 * @brief Função de configuração.
 *
 * Esta função é chamada uma vez quando o script é iniciado.
 * Configura a comunicação serial e o pino do LED como saída.
 */
void setup() {
  // Inicia a comunicação serial a 115200 baud.
  Serial.begin(115200);
  
  /**
   * @fn pinMode(LED_PIN, OUTPUT);
   * @brief Configura o pino do LED como saída.
   */
  pinMode(LED_PIN, OUTPUT);
}

/**
 * @brief Função de loop.
 *
 * Esta função é chamada repetidamente em um loop.
 * Liga e desliga o LED a cada segundo.
 */
void loop() {
  // Acende o LED
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  
  /**
   * @fn delay(1000);
   * @brief Faz uma pausa na execução do programa por um segundo.
   */
  delay(1000);  // Espera por 1 segundo.

  // Apaga o LED
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  delay(1000);  // Espera por 1 segundo.
}
