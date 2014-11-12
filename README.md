Arduino-Quadcopter
=========

An arduino sketch for controlling a quadcopter. Uses RC and the MPU-6050 chip.


This is a simple arduino sketch that allows you to take over control over a quadcopter with the arduino board.
Because I've made this sketch primarily for private use, the sketch relies on certain hardware, but should also be
usable with different hardware with a bit of customization work.

This sketch was only tested on the Arduino Uno rev 3 board, so it might not work on other arduino-like boards without
making changes.

The arducopter sketch needs three things to work at the moment:

- A RC receiver with a minimum of 4 channels
- The MPU-6050 gyro/accelerometer chip
- Four ESCs with a known minimum and maximum value


At the moment, the sketch doesn't implement all features as I can only update it as fast as I can run new tests
with my quadcopter.
Complete features are:

- Arming of ESCs with given min/max values
- Control over pitch, roll and yaw through motor speed balances
- Control over pitch, roll and yaw through RC
- Controll over vertical speed through RC
- Calculation of current pitch, roll and yaw via the DMP unit on the MPU-6050

Planned features are:

- Automatic stabilisation of flight via MPU-6050 (complete but not fine tuned)
- Assisted safe landing through free fall detection


More features will be added as I expand the usage of my quadcopter.



In order to use this sketch, you will need to install the libraries from [arducopter/libraries](https://github.com/sujitbehera27/RCQuadcopterProject/tree/master/libraries)
on your computer.
Future plan with RasberryPi Designs:
<img src="https://ghowen.me/build-your-own-quadcopter-autopilot/ratepid.png"></img>
<img src="https://ghowen.me/build-your-own-quadcopter-autopilot/overallpid.png"></img>
<img src="https://ghowen.me/build-your-own-quadcopter-autopilot/rpi.png"></img>
<br>

Ref :
-https://ghowen.me/build-your-own-quadcopter-autopilot/
-http://diydrones.com/profiles/blogs/quad-rotor-observer-v5-flights

Reffered Schematic Diagrams:
<img src="http://api.ning.com/files/HcZUn-GL6ra1cwMfDJLOdGkQAOE52UIJdpU3DxkNLTOvU9uBHts207Xv4S8f*HwwxPyQhN3T1bKSgCTDRMbVTA__/mainboard_blue_2.jpg"></img>

<img src="http://api.ning.com/files/N-m37Ss5uFpmbtOBgphamvIwLgBXfJZDlMczFx*uAv0T*F4DMNTu14ByO9FFd5Ge2IK1wyGCxPYeKbKF4tBhaw__/circuit_diagram.gif"></img>

<img src="http://api.ning.com/files/*k*xFjnZH1yBcJjlFpTXQ6q*STnIsX6VV3eutRMGm1F2xbzY0JRpt5oQzxyvskKuxkKbKwILTyWi5sCHdQkOgQ__/QROkkfcv7.jpg"></img>

<img src="http://api.ning.com/files/6YDaBEcOSu4nMW-lzIcsMkqof3ay0AygBzex6RYsFZluBXb5UcTV6abKspMbTVtt1cXmQ7PpTqtJm-QeSNqWUw__/partslist.jpg?width=750"></img>

