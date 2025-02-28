# Arduino Water Sensor Project

A simple Arduino-based water sensor project that measures water presence/level using an analog sensor.

## Hardware Requirements

- Arduino Uno
- Water sensor (analog)
- Jumper wires
- Breadboard (optional)

## Pin Configuration

- Digital Pin 7: Sensor power supply
- Analog Pin A0: Sensor data reading

## Features

- Power management to reduce sensor corrosion
- Serial output of sensor readings
- Configurable reading intervals
- Sensor stabilization delay

## Setup

1. Connect the water sensor to the Arduino:
   - Power pin → Digital Pin 7
   - Signal pin → Analog Pin A0
   - GND → GND

2. Install PlatformIO in your IDE (this project uses PlatformIO for build management)

3. Clone this repository and open it in your PlatformIO-enabled IDE

## Usage

The sensor will:

1. Take readings every second
2. Power the sensor only during readings to prevent electrolysis
3. Output readings to the Serial Monitor at 9600 baud rate

## Serial Output Format

The sensor outputs readings in the following format:

Where `<reading>` is an analog value between 0-1023.

## Development

This project is built using:

- PlatformIO
- Arduino framework
- ATmega AVR platform

## License

GNU GENERAL PUBLIC LICENSE
Version 3, 29 June 2007

## Contributing

We welcome contributions from the community and strive to create a positive and inclusive environment for all participants.

### Code of Conduct

We expect contributors to be respectful, considerate, and open-minded. This includes avoiding discriminatory language, personal attacks, and inflammatory tone.

### Basic Etiquette

When contributing, please:

- Be clear and concise in your descriptions and comments
- Use proper grammar and spelling
- Be patient and responsive to feedback and questions

By following these guidelines, we can create a positive and productive community. Thank you for your contributions!