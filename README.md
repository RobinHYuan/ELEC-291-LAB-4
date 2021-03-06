# ELEC291 LAB 4

### Introduction:
In this lab, we will be using the EFM8 board and LM355 temperature sensor to detect current temperature. The ADC converter on EFM8 is used to read the output voltage of the LM355.  We will use the values read from EFM8 via serial port to plot a temperature strip-chart using python.


### Team Member:
Jerry Shao\
Robin Yuan
  
------------

### System Structure:
<img src="(https://user-images.githubusercontent.com/68177491/110192545-91143180-7de3-11eb-9d31-b69dc0b5d9f0.jpg" width="641" height="480"/>


------------
### Breadboard:

<img src="https://user-images.githubusercontent.com/68177491/109447393-677c9400-79f8-11eb-8187-52f0cb8c769e.jpg" width="430" height="303"/>

------------
### PIN Assignment:

#define LCD_RS P3_3\
#define LCD_RW P3_2\
#define LCD_E  P3_1\
#define LCD_D4 P1_4\
#define LCD_D5 P1_5\
#define LCD_D6 P1_6\
#define LCD_D7 P1_7\
#define DHT11  P1_3

------------
### Update History:

**2021-02-28; 17:09:00; Sunday**
- Breadboard is assembled 
- LM355 is calibrated
- Pin 2.2 is used for ADC purposes
- PC can display a temperature reading string from EFM8 on PuTTY 

**2021-02-28; 19:10:00; Sunday**
- All basic reqiurements are met

**2021-03-01; 11:49:00; Monday**
- The library, lab4.h now includes the LCD driving functions
- LCD can now display floating points by using sprintf

**2021-03-04; 21:10:10; Thursday**
- lab4.h is further improved, supporting DHT11 sensor
- Humidity measuring feature added

------------
### Software Used:
WinPython(64-bit for Windows):https://sourceforge.net/projects/winpython/ \
PuTTY:https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html 

------------
This lab is sponsored by Matou Sakura

<img src="https://user-images.githubusercontent.com/68177491/109440948-b0c4e780-79e8-11eb-90b4-2a1c33936a7c.jpg" width="512" height="765"/>
