# Dec2base

This is the first assignment I had for my software developement class ECSE 202 at McGill University. 

It's a command line program that converts an input number in Base-10 to an integer value in Base-X where X represents the target base.

The program takes 2 arguments, the number to be converted and the target base, both expressed as decimal numbers.  
Ex: dec2base 2341 5

If only 1 argument is entered, the program sets the target base to 2 by default. 

**Examples of how it works:**

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 255   
The base-2 form of 255 is: 11111111

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 65535 16  
The base-16 form of 65535 is: FFFF

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 2147483647  
The base-2 form of 2147483647 is: 1111111111111111111111111111111

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 33975 5  
The base-5 form of 33975 is: 2041400

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 760976 9  
The base-9 form of 760976 is: 1378768

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 67878903 10  
The base-10 form of 67878903 is: 67878903

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 86 33  
The base-33 form of 86 is: 2K

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 100100100 3  
The base-3 form of 100100100 is: 20222100121112010

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 2147483647 35  
The base-35 form of 2147483647 is: 15V22UM

C:\Users\...\eclipse-workspace\dec2base\Debug>dec2base 17 8  
The base-8 form of 17 is: 21

