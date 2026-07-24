# Arduino-Bluetooth-Car

![Arduino Car](Car.jpg)

Arduino RC car, controlled by a physical Bluetooth remote controller and using only two motors
This is an improved version of my past cellphone-controlled Arduino car, featuring now a remote controller because it's cooler

## Materials

### Remote control materials
- 1 Arduino NANO
- 1 HC-05 Bluetooth module
- 1 joystick
### Car materials
- 1 Arduino UNO
- 1 HC-05 Bluetooth module
- 1 L298N H-bridge
- 2 dual axis gear motor (3V-6V) with tires
- 4 AA batteries
- 1 9V battery
- 1 plastic wheel
- 1 very small protoboard (optional) - Only for easier connect of common grounds

## Pinout

### Car

| Component | Arduino Pin |
|-----------|-------------|
| L298N ENA | D5          |
| L298N IN1 | D6          |
| L298N IN2 | D7          |
| L298N IN3 | D10         |
| L298N IN4 | D9          |
| L298N ENB | D11         |
| HC-05 RX  | D3          |
| HC-05 TX  | D2          |   

### Remote control

| Component    | Arduino Pin |
|--------------|-------------|
| Joystick X   | A7          |
| Joystick Y   | A4          |
| HC-05 RX     | D10         |
| HC-05 TX     | D11         |   

You can change the joystick pins to more suitable ones; I used these pins for aesthetic purposes ;)
