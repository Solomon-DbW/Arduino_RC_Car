# All wire connections

## Motors -> L298N module

### Front Left motor & Rear Left motor
+ Ground (Black wires) → 'MOTOR A' LHS connector
+ 5V     (Red wires)   → 'MOTOR A' RHS connector

### Front Right motor & Rear Right motor
+ Ground (Black wires) → 'MOTOR B' RHS connector
+ 5V     (Red wires)   → 'MOTOR B' LHS connector

### L298N module power
+ 5V connector → Positive Breadboard rail
+ GND connector → Negative 9V battery cable & Negative Breadboard rail
+ VMS connector → Positive 9V battery cable

### L298N module to Arduino
+ ENA → Pin 3
+ IN1 → Pin 4
+ IN2 → Pin 5
+ IN3 → Pin 6
+ IN4 → Pin 7
+ ENB → Pin 9

### L298N other connections
+ GND → Negative Breadboard Rail
+ +5V → Positive Breadboard Rail

### Breadboard other connections
+ Positive Rail → Arduino 5V
+ Negative Rail → Arduino GND

### Infrared (IR) sensor
+ G → Negative Breadboard rail
+ R → Positive Breadboard rail
+ Y → Arduino Pin 11
