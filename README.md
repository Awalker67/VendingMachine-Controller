# Vending Machine Controller
A finite state machine for a vending machine controller that accepts pennies (1 cent
each) nickels (5 cents each), dimes (10 cents each), and quarters (25 cents each). 
-- Information is displayed in a command console
-Selecting an item for output will return an insufficient funds error with the required difference to proceed.
-User inserts coins designated by first letter of coin name, (Q,D,N,P), one at a time.
-User with correct password cridentials("pass") can change the quantity of items in the machine.
-Return change will return exact change in order of biggest coin to smallest.
-Z returns to previos menu and/or exits the program



## Installation
Exectubale was compiled after downloading MinGW and setting correct path in Windows Environmental Variables.


````
https://sourceforge.net/projects/mingw/
Open CMD and navigate to C Project folder
  -run the 'make' command to re-compile the code to create a new exectubale
 A project.exe has been provided.
````



## Disclaimer

````
The C code is functional
-GUI with Qt Creator is not functional.
