## Traffic Light Simulator (Hardware Implementation)

This project is a **hardware simulation of a 4-way smart traffic light system** using an Arduino board. Each side of the intersection is controlled by its own set of **Red, Yellow, and Green LEDs**, representing real-world traffic lights.

The system operates sequentially:

* One direction gets a **green light**, while all others stay **red**
* After a set time, the green turns to **yellow**, then to **red**
* The cycle then moves to the next direction, ensuring smooth and safe traffic flow

### Hardware Components Used

* Arduino UNO
* 12 LEDs (4 sets of Red, Yellow, Green for 4 lanes)
* Resistors (220Ω or 330Ω for each LED)
* Breadboard and jumper wires
* USB cable for Arduino

### Key Features

* Simulates real-time behavior of a 4-way intersection
* Manages traffic flow directionally: TL1 → TL2 → TL3 → TL4
* Uses simple state-based logic with boolean flags and delays
* **Failsafe initialization:** All red lights are turned on initially for safety before sequencing starts

### Code Behavior

* Each `trafficLight_X()` function controls a lane:

  * **Green** for 5 seconds
  * **Yellow** for 1 second
  * **Red** for 1 second before the next lane is activated
* Boolean flags (`tl1_red`, `tl2_red`, etc.) help control light transitions
* `allRedOn()` is called once at the beginning to ensure a safe initial state

