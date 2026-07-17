# Four Servo Motors Sweep Task

## Project Description

This project demonstrates how to control four servo motors using an Arduino Uno.

The four servo motors perform two movements in the following order:

1. All servo motors move from side to side using the Sweep motion for two seconds.
2. After two seconds, all servo motors stop and remain fixed at 90 degrees.

The circuit and simulation were created using Tinkercad.

## Components

* Arduino Uno R3
* Breadboard
* 4 Servo Motors
* Jumper Wires
* Tinkercad Circuits

## Circuit Connections

| Servo Motor |    Signal Pin |
| ----------- | ------------: |
| Servo 1     | Arduino Pin 3 |
| Servo 2     | Arduino Pin 5 |
| Servo 3     | Arduino Pin 6 |
| Servo 4     | Arduino Pin 9 |

All red wires are connected to the Arduino 5V pin.

All ground wires are connected to the Arduino GND pin.

## How the Project Works

When the simulation starts, the four servo motors move together from side to side.

The Sweep movement continues for two seconds.

After the two seconds are completed, all servo motors move to 90 degrees and remain in that position.

## Arduino Code

The Arduino code is available in the following file:

`four_servo_sweep.ino`

## Circuit Image

![Four Servo Motors Circuit](images/circuit.png)

## How to Run the Project

1. Open the circuit in Tinkercad.
2. Check the servo motor connections.
3. Open the Arduino code.
4. Click Start Simulation.
5. Observe the four servo motors moving for two seconds.
6. After two seconds, the motors will stop at 90 degrees.

## Project Video

The demonstration video is available in the project files.

If the video is uploaded externally, add the video link here:

[Watch the simulation video](Semulation.mp4)

## Expected Result

* Four servo motors move simultaneously.
* The Sweep movement runs for two seconds.
* All servo motors stop at 90 degrees.
* The movement does not repeat after stopping.

## Author

Student Name: Waad
