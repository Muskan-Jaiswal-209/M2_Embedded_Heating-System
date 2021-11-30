# **Introduction:**

The heating system is basically used to control the temperature. The user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the activities of the control system are done on a microcontroller called Atmega328. The functionality of the heat control system is coded in embedded c and the working is demonstrated using simuation in a software called SimulIDE.

# **Research:**

Seat warmers were first introduced by Cadillac in 1966 to help with backaches. Some vehicles come with car seat warmers, which heat up the seat with the push of a button. Normally the buttons are located on the side of the driver and passenger door. In some vehicles, just the bottom of the seat warms up, where in others both the bottom and back warm up.
![button](https://user-images.githubusercontent.com/94435852/143817250-e4a4ee9b-8fa3-45e3-b9f0-4c4acedd167d.PNG)

# **Benefits:**

Heated seats can make cars much more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car’s seat warmer is close to your body allowing you to warm up faster. In some cases, the seat warms up before the rest of the vehicle does.

## Details requirements
### High Level Requirements:
| ID | Description | Status |
|------| ------| ------|
| HLR1 | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. | Implemented
|HLR2  | Next the analog input from the temperature sensor is received and digitized.| Implemented
|HLR3  | The hard disk must be 4 GB . |	Implemented
|HLR4  | The web browser must be Microsoft Internet Explorer with a resolution of at least 800 \* 600. |	Implemented

#### Low Level Requirements:

| ID | Description | Status |
|-------|------|------|
| LLR1 | The digitized temperature input is visualized using Pulse Width Modulation.| Implemented 
| LLR2 | The system runs effectively on Windows 2000 server but it will also run equally well on compatible operating systems.  | Implemented
| LLR3 | The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.| Implemented 
 
# **SWOT Analysis:**

**Strength:**

The advantage of such devices is that you can not wait until the entire salon warms up, and immediately go on business. After all, heating has a local effect, so they do their job in 2-5 minutes.

**Weakness:**
- If you do not follow the recommendations and go too far with the temperature, this can lead to a decrease in the driver’s attentiveness, cause fatigue and headaches, and also increase the risk of catching a cold due to a violation of the body’s temperature regime.
- the power cord is plugged in only after you fix the cape;
- if you spill any liquid on the heater cover, immediately turn off the device;
- if you leave the car, do not leave the device turned on;
- you can not wash the capes, iron, maximum-shake;
- Use dry bags to store the heater.

**Opportunities:**

The advanced technologies in automotive seat heaters are predicted to increase the growth of the market in the review period. The latest features like modern seat heaters like consistent and controlled warmth, heating level adjustment are attracting the consumers and are expected to propel the market growth. Growing demand for comfort and energy capabilities in vehicles is accelerating market growth.

**Threats:**
- A lack of regulation for these seats has left consumers more open to injuries.
- Within 10 minutes at 120 degrees an individual can experience third-degree burns. For those with the inability to feel the temperature at the time, this can prove even more dangerous. Those who have been diagnosed with conditions such as paralysis, diabetes, and neuropathy are less like to feel the heat in their lower extremities.
- High electrical resistance could cause the heater pad in the seat to overheat.

# **4W and 1H:**

**What:**
Heated seats can make cars much more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car's seat warmer is close to your body allowing you to warm up faster. In some cases, the seat warms up before the rest of the vehicle does.

**When:**
Heated front seats not only offer luxurious comfort, relaxation and benefits for physical health, but also increase safety. Heating seats and backrests ensures a high level of well-being and prevents a cramped posture. Winter clothes limiting freedom of movement can be dispensed with. This also results in better operation of the restraint system by reducing the slack in safety belts. People with back or kidney problems benefit from a possible reduction of pain. It is mostly used in cars.

**Where:**
In car seats

**Why:**
Heated seats can bring a lot of different benefits beyond just having a nice and warm place to sit. The single greatest benefit that heated seats can bring is the therapeutic warmth it offers. This is great for older drivers or people with a few aches and pains.

**How:**
The longer the seat cushion stays on, the hotter it gets. If it were to stay on for too long, it would get hot enough to become uncomfortable or even dangerous to sit in. It could even start a fire in the cushion. To prevent this, most car seat heaters have a thermostat. The thermostat measures the temperature in the cushion. When it reaches a certain temperature, the thermostat sends a signal, automatically turning off the relay until the seat cools down a bit. At that point, the thermostat turns the relay back on again. Many seat cushions also have “high” and “low” settings that let the driver control the temperature of the seat cushions.
