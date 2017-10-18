# CMMC LED Library 

*An easy to use and control LED library for Arduino framework.*

CMMC_LED is designed for controller library that you can wrap pin number and pin state to the object

Features
--------
* Set default led state  when create led object
* `toggle` LED state
* `set` LED state
* easy control `low` and `high` method

Usage
--------

	CMMC_LED led(2, LOW);
	
	led.init();
	
	led.low();
	led.high();
	
	led.toggle()
