# 4760Assignment1 -- README

# Code created by: Andrew Audrain
# Code created on: 09/07/2018
# CS 4760 - Hauschild (UMSL)
# Code written in: C

This project was created to perform several experiments on code provided in out textbook, Unix Systems Programming (Robbins/Robbins).
Exercise 3.8 (pg 87) expands on the process chain of Program 3.1 in the book. 

This project contains the following files:
  - README
  - project1.c : contains actual code for problems
  - Answers : contains any answers and/or observations for each problem of the exercise
  - Makefile
  
There are 8 problems in exercise 3.8. Each problem and its results are clearly labeled and described in the file "Answers."
Each problem is involves some modification of the base source code provided on page 87 in the textbook. Because the code of 
project1.c is changing with each new problem of the exercise, the final code will provide only output regarding #8, the 
final problem of the exercise. However, the different results found throughout the steps of the exercise can be found in 
"Answers" as mentioned above. 

Program Usage:
In general, the project has three basic functions implemented at the command-line as follows:
  1) ./project1 -h   : Display a help message to the user
  2) ./project1 -n x : Runs the program with x being an additional command-line argument that specifies the number of processes
  3) ./project1 -p   : Generates a test error message
The "-n" option will be used to perform each task of the exercise. 

Personal thoughts on the project: 
  I did not find this project to be too difficult, though I suppose I should wait to see the grade before I fully embrace that opinion. 
  It had been a while since I had to set up a makefile, but I am grateful it was required because it was a good reminder and is 
  something that I should be using more often. 
  
  I thought that #8 was pretty tough just in terms of understanding exactly what the problem was wanting me to do. The rest of the 
  problems were pretty straightforward. I maybe would have liked us to have discussed forks in class a bit before this project was due
  so that I could have had a better understanding of what I was actually doing. I do not mind learning outside of the classroom, but I
  definitely process the concepts better after we talk through them. I was not very confident in my observations on each question 
  because I was not totally confident I was interpreting the output correctly or understanding exactly what it meant. 
