0x0A. C - argc, argv
TASKS 0	Write a program that prints its name, followed by a new line.
		
		(i)If you rename the program, it will print the new name, without having to compile it again
		(ii)You should not remove the path before the name of the program

TASKS 1	Write a program that prints the number of arguments passed into it.
		(i)Your program should print a number, followed by a new line.

TASKS	 2	Write a program that prints all arguments it receives.
		(I)All arguments should be printed, including the first one.
		(II)Only print one argument per line, ending with a new line.

TASKS 3	Write a program that multiplies two numbers.
		.
(i)Your program should print the result of the multiplication, followed by a new line.
(ii)You can assume that the two numbers and result of the multiplication can be stored in an integer.
(iii)If the program does not receive two arguments, your program should print Error, followed by a new line, and return.


TASKS 4	Write a program that adds positive numbers.
		(1)Print the result, followed by a new line.
		(2)If no number is passed to the program, print 0, followed by a new line.
		(3)If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1.
		(4)You can assume that numbers and the addition of all the numbers can be stored in an int.



TASKS 5	Write a program that prints the minimum number of coins to make change for an amount of money.
		(1)Usage: ./change cents
		(2)where cents is the amount of cents you need to give back
		(3)if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
		(4)you should use atoi to parse the parameter passed to your program
		(5)If the number passed as the argument is negative, print 0, followed by a new line
		(6)You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
