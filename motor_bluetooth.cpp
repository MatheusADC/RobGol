#include <ArduinoBLE.h>

// Pinos dos motores (ponte H L9110)
#define M1_IN1 8
#define M1_IN2 9
#define M2_IN1 10
#define M2_IN2 11

// Serviço e característica BLE
BLEService carrinhoService("1101");
// característica de 1 byte
BLECharacteristic comandoChar("2101", BLEWrite, 1);  

void setup() {
  // Inicializar motores
  pinMode(M1_IN1, OUTPUT);
  pinMode(M1_IN2, OUTPUT);
  pinMode(M2_IN1, OUTPUT);
  pinMode(M2_IN2, OUTPUT);

  // Inicialização Serial
  Serial.begin(115200);
  while (!Serial);

  // Inicializar BLE
  if (!BLE.begin()) {
    Serial.println("Erro ao iniciar BLE!");
    while (1);
  }

  // Configuração do BLE
  BLE.setLocalName("CarrinhoR4");
  BLE.setAdvertisedService(carrinhoService);
  carrinhoService.addCharacteristic(comandoChar);
  BLE.addService(carrinhoService);
  BLE.advertise();

  Serial.println("Bluetooth Low Energy ativo como CarrinhoR4!");
}

void loop() {
  BLEDevice central = BLE.central();

  if (central) {
    Serial.print("Conectado ao dispositivo: ");
    Serial.println(central.address());

    while (central.connected()) {
      if (comandoChar.written()) {
        // acesso ao 1 byte recebido
        char cmd = comandoChar.value()[0];  

        Serial.print("Comando recebido: ");
        Serial.println(cmd);

        switch (cmd) {
          case 'F': frente(); break;
          case 'B': tras(); break;
          case 'L': esquerda(); break;
          case 'R': direita(); break;
          case 'S': parar(); break;
          default: parar(); break;
        }
      }
    }

    Serial.println("Desconectado.");
    parar();
  }
}

// Funções de movimento
void frente() {
  digitalWrite(M1_IN1, HIGH); digitalWrite(M1_IN2, LOW);
  digitalWrite(M2_IN1, HIGH); digitalWrite(M2_IN2, LOW);
}

void tras() {
  digitalWrite(M1_IN1, LOW); digitalWrite(M1_IN2, HIGH);
  digitalWrite(M2_IN1, LOW); digitalWrite(M2_IN2, HIGH);
}

void esquerda() {
  digitalWrite(M1_IN1, LOW); digitalWrite(M1_IN2, HIGH);
  digitalWrite(M2_IN1, HIGH); digitalWrite(M2_IN2, LOW);
}

void direita() {
  digitalWrite(M1_IN1, HIGH); digitalWrite(M1_IN2, LOW);
  digitalWrite(M2_IN1, LOW); digitalWrite(M2_IN2, HIGH);
}

void parar() {
  digitalWrite(M1_IN1, LOW); digitalWrite(M1_IN2, LOW);
  digitalWrite(M2_IN1, LOW); digitalWrite(M2_IN2, LOW);
}
