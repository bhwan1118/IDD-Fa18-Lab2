# Make a Digital Timer!
 
## Overview
For this assignment, you are going to 

A) [Solder your LCD panel](#part-a-solder-your-lcd-panel)

B) [Write text to an LCD Panel](#part-b-writing-to-the-lcd) 

c) [Using a time-based digital sensor!](#part-c-using-a-time-based-digital-sensor)

D) [Make your Arduino sing!](#part-d-make-your-arduino-sing)

E) [Make your own timer](#part-e-make-your-own-timer) 
 
## In The Report
Include your responses to the bold questions on your own fork of [this lab report template](https://github.com/FAR-Lab/IDD-Fa18-Lab2). Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as README.md pages on your GitHub, and post a link to that on your main class hub page.

## Part A. Solder your LCD panel

![image](https://github.com/bhwan1118/IDD-Fa18-Lab2/blob/master/Soldered%20LCD.jpg)

## Part B. Writing to the LCD
 
**a. What voltage level do you need to power your display?**

3.3 Volts

**b. What voltage level do you need to power the display backlight?**
   
5 Volts   
   
**c. What was one mistake you made when wiring up the display? How did you fix it?**

I missed some connections to ground when I initially wired everything. I corrected this by ensure everything that needed to go to ground was connected to the ground on the breadboard.

**d. What line of code do you need to change to make it flash your name instead of "Hello World"?**

You just need to modify the string argument inside this line: lcd.print("hello, world!");
 
**e. Include a copy of your Lowly Multimeter code in your lab write-up.**

[See Code Here](https://github.com/bhwan1118/IDD-Fa18-Lab2/blob/master/DisplayMultiMeter.ino)

## Part C. Using a time-based digital sensor

[YouTube video](https://youtu.be/78bugcXEt4I)

## Part D. Make your Arduino sing!

**a. How would you change the code to make the song play twice as fast?**
 
If you change the value 1000 to 500, you decrease the duration of quarter and eighth notes by a half: int noteDuration = 1000 / noteDurations[thisNote];

 
**b. What song is playing?**

The star wars theme song! 

![image](http://www.thathashtagshow.com/wp-content/uploads/2016/08/23-R2D2-ACDC-funny-281x300.jpg)

## Part E. Make your own timer

**a. Make a short video showing how your timer works, and what happens when time is up!**

**b. Post a link to the completed lab report your class hub GitHub repo.**
