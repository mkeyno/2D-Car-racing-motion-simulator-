# 2D Car Racing Motion Simulator

[![Build Status](https://travis-ci.com/mkeyno/KeynoRobot.svg?branch=master)](https://travis-ci.com/mkeyno/KeynoRobot)
[![Python](https://img.shields.io/badge/Python-3.6%2B-red.svg)](https://www.python.org/downloads/)
![GitHub](https://img.shields.io/github/license/mkeyno/KeynoRobot.svg) 
![PyPI - Downloads](https://img.shields.io/pypi/dm/KeynoRobot.svg?label=PyPi%20Downloads)
[![saythanks](https://img.shields.io/badge/say-thanks-ff69b4.svg)](https://saythanks.io/to/mmphego)

2D Car racing motion simulator  with Wifi-BT connection and FFB decoding feature. 

### Hardware
The hardware consist of BT and WiFi link to the Game platform, Force evaluator board and Racing Rig
Two 24 volt DC electricemulate motor installed on Racing Rig to meulate the Pith & Roll motion
Two Pedals for emulation the Gas & Break along with Car Steer and setting buttons installed on the Rig
Following is the CAD design along with final fabrication
<img src="res/cad.JPG" width="450" height="350">
<img src="res/build.jpg" width="450" height="350">
 ![-](https://github.com/mkeyno/2D-Car-racing-motion-simulator-/blob/master/res/cad.JPG) 
 ![-](https://github.com/mkeyno/2D-Car-racing-motion-simulator-/blob/master/res/build.jpg) 

### Firmware
A ESP8266 core selected for Wifi Link and Server which can run in  access point. Any gaming platform such as laptop, smart phone, VR, can connect to the board with BT & Wifi Link
Special Webpage has been designed for FFB configuration and BT & Wifi setting. This Server can emulate whole keyboard for change of control the any game with keyboard
Following is the setting previews of the Webpage
-
-
![-](https://github.com/mkeyno/2D-Car-racing-motion-simulator-/blob/master/res/main.png) 
![-](https://github.com/mkeyno/2D-Car-racing-motion-simulator-/blob/master/res/keyboard.png) 
![-](https://github.com/mkeyno/2D-Car-racing-motion-simulator-/blob/master/res/bt.png) 
