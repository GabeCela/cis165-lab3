# cis165-lab3
# Program 1 — Diamond Pattern  
7 lines were set using the cout command.
The pattern has 7 lines total.
The line 4 is the cenyter line of the pattern. It has 7 * in this line.
Using line 4 as starting point, reduce 2 * per line above and 2 * per line below until completion.

The cout structure of each line is "(blank spaces) + astheriscs as neede" 
      Line 1, 3 spaces + *
      Line 2, 2 spaces + ***
      Line 3, 1 Space + *****
      Line 4, *******
      Line 5, same as line 3
      Line 6, same as line 2
      Line 7, same as line 1

Run the programs. It shows the right pattern. 
The program doesn't require user interaction.

# Program 2 — Video Game Level Times
Calculating the whole hours: It uses integer division (/). Because both numbers are integers, the computer drops any decimal remainder. 78 / 60 equals 1, so the variable level_1_Hours stores 1.
Calculating the leftover minutes: It uses the modulo operator (%). This operator divides the numbers and returns only the remainder. 78 % 60 leaves a remainder of 18, so level_1_Remaining_Minutes stores 18.
These calculations are done for the level 2 as well.

Tracing values:
Variable Name             Data Type	        Operation / Formula	               Calculation Details	          Value Stored in Memory
LEVEL_1_MINUTES	        const int	        Assigned value	                     Program input	                78
LEVEL_2_MINUTES	        const int	        Assigned value	                     Program input	                144
MIN_PER_HOUR	        const int	        Assigned value	                     Program conversion factor	    60
level_1_Hours	        int	              LEVEL_1_MINUTES / MIN_PER_HOUR	   78 / 60 (drops decimal)	    1
level_1_Remaining_Minutes int	              LEVEL_1_MINUTES % MIN_PER_HOUR	   78 % 60 (takes remainder)	    18
level_2_Hours	        int	              LEVEL_2_MINUTES / MIN_PER_HOUR	   144 / 60 (drops decimal)	    2
level_2_Remaining_Minutes int	              LEVEL_2_MINUTES % MIN_PER_HOUR	   144 % 60 (takes remainder)	    24
diff_Total_Minutes	  int	              LEVEL_2_MINUTES - LEVEL_1_MINUTES	   144 - 78	                      66
diff_Hours	              int	              diff_Total_Minutes / MIN_PER_HOUR	   66 / 60 (drops decimal)	    1
diff_Remaining_Minutes	  int	              diff_Total_Minutes % MIN_PER_HOUR	   66 % 60 (takes remainder)	    6

The assigment asks to store the calculations before displaying becuase:
• Code Readability & Cleanliness: Chaining text, variables, and complex math into a single std::cout line makes the code messy and hard to read. Separating the logic (math) from the presentation (printing) keeps the program clean.
• Easier Debugging: If the output displays an incorrect number, it can easily set a breakpoint or print the variable itself to see exactly where the calculation failed. If the math is buried inside a long cout string, it is much harder to isolate the bug.
• Data Reusability: If we need to use the calculated values again later in the program (for example, adding them together, saving them to a file, or finding an average), we already have them safely saved in memory. If we put the formula directly in cout, the calculated value is lost immediately after it flashes on the screen.

