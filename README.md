# <img src="https://github.com/user-attachments/assets/caabfdf0-0f9e-44a3-8200-c6579fe87887" alt="Ícone de descrição" width="28"> Descrição
O projeto apresenta a construção de um carrinho que joga futebol usando **Arduino UNO R4**.

# <sub><img src="https://github.com/user-attachments/assets/ac29de52-9cd6-4963-8b6a-b329e339622a" alt="Ícone de carrinho de controle remoto" width="36"></sub> Protótipo

| Vista Frontal | Vista Superior |
|----------|----------|
| <img width="540" height="397" alt="Vista Frontal Carrinho" src="https://github.com/user-attachments/assets/e4ea7f97-1b1b-4f02-aebf-e562ef7278e3" /> | <img width="540" height="397" alt="Vista Superior Carrinho" src="https://github.com/user-attachments/assets/ab339499-1fad-4406-beba-5dd4264a6443" /> |

| Vista Lateral Esquerda | Vista Lateral Direita |
|----------|----------|
| <img width="540" height="397" alt="Vista Lateral Esquerda Carrinho" src="https://github.com/user-attachments/assets/79154adc-344a-45c0-98da-26c241f21367" /> | <img width="540" height="397" alt="Vista Lateral Direita Carrinho" src="https://github.com/user-attachments/assets/98258465-fd58-4802-b4fe-9b8bcbbaf09f" /> |

# <sub><img src="https://img.icons8.com/?size=100&id=BALd1KYkA898&format=png&color=000000" alt="Ícone de prototipação" width="38"></sub> Componentes
- 2 x Roda Hobby 65mm
- 1 x Protoboard 400 pontos
- 1 x Roda Boba - Rodízio 25mm
- 1 x Módulo Driver Ponte H - L9110
- 1 x Placa Arduino UNO R4 Wi-fi
- 2 x Bateria Li-Ion 18650 3,7V - 2550mAh
- 1 x Suporte para 2 Baterias Li-Ion 18650
- 1 x Mini Atuador Solenoide Jf-0530b - 12v
- 2 x Motor DC 3-6V com Caixa de Redução em Ângulo
- 1 x Filamento PLA Voolt3D 1.75mm 1kg - Azul Metalizado V-Silk

# <sub><img src="https://github.com/user-attachments/assets/50dcad50-441e-4743-a494-a895c859a26b" alt="ícone de circuito" width="34"></sub> Montagem do circuito
### Pinout do Arduino UNO R4 Wi-fi
<img width="739" height="656" alt="image" src="https://github.com/user-attachments/assets/20be29bb-b597-49ea-8dd0-6ca0f28be3fc" />

1. Conecte o pino GND do Arduino no lado negativo da protoboard;
2. Conecte o pino Vin do Arduino no lado positivo da protoboard;
3. Conecte o pino VCC do Módulo Driver Ponte H L9110 no lado positivo da protoboard;
4. Conecte o pino GND do Módulo Driver Ponte H L9110 no lado negativo da protoboard;
5. Conecte o pino A-1A do Módulo Driver Ponte H L9110 no pino 8 do Arduino;
6. Conecte o pino A-1B do Módulo Driver Ponte H L9110 no pino 9 do Arduino;
7. Conecte o pino B-1A do Módulo Driver Ponte H L9110 no pino 10 do Arduino;
8. Conecte o pino B-1B do Módulo Driver Ponte H L9110 no pino 11 do Arduino;
9. Solde os jumpers, conectados às portas do Módulo Driver Ponte, nos terminais dos motores — sendo duas portas para cada motor.

# <sub><img src="https://github.com/user-attachments/assets/9cbe287f-e23c-4ea6-9119-c0612c0b9dc3" alt="Ícone de celular" width="32"></sub> App para controlar o carrinho
[Clique Aqui](https://github.com/MatheusADC/CarrinhoController)
