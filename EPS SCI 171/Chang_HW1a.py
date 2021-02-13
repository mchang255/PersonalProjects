#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""

@author: Miranda Chang
HW1a!

"""

import numpy as np

#%%
# Numbers - Exercise types of numbers 1
print (type(3))
print(type(3.))
print(type(3.0))
print(type(3.0 + 0.0j))

#%%
# Numbers - Exercise types of numbers 2
# 1 - The number of particles in a system: int
# 2 - The speed of each particle in a system: float
# 3 - The number of particles per unit volume in a system: float

#%%
# Arithmetical operations - Exercise results of basic arithmetical operations
print(2 + 15)
print(2 - 15)
print(2 * 15)
print(type(2 + 15))
print(type(2 - 15))
print(type(2 * 15))

#%%
# Arithmetical operations - Exercise data type predictions
# 1. Which data type would you predict you'd get if you were to add, subtract, 
#or multiply two floats? 
# Add - float
# Subtract - float
# Multiply - float

# 2. Which data type would you predict you'd get if you were to divide one 
#integer n by another integer m if n is not divisible by m?
# Int

# 3. Which data type would you predict you'd get if you were to divide one 
#integer n by another integer m if n is divisible by m?
# Int

#4. In a coding cell below, do some testing to determine the answer to the 
#questions in the last exercise for which you made predictions. Comment on any 
#predictions that were incorrect
# Testing 1.
print(type(6.0 + 7.0))
print(type(6.0 - 7.0))
print(type(6.0 * 7.0))
# All float as predicted

# Testing 2.
print(type(8/3))
# Prediction is wrong. It is actually a float.

# Testing 3.
print(type(8/4))
# Prediction is wrong. It is actually a float.

#%%
# Arithmetical operations - Exercises different kinds of division
# 1.
print(15 / 5, 16 / 5, 17 / 5, 18 / 5, 19 / 5, 20 / 5)
print(15 // 5, 16 // 5, 17 // 5, 18 // 5, 19 // 5, 20 // 5)
print(type(15 / 5))
print(type(15 // 5))
# The differences is that with one slash, the resulting quotient is the 
#"exact" quotient in that there is no rounding and it includes the remainder, 
#and it's a float. The // means the quotient will round up or down to a whole 
#number, and the type is int.

# 2. 
# 2.1
print(2 + 3 / 3)
print(type(2 + 3 / 3))
# Prediction: answer is 3.0 and type is float
# Correct

# 2.2
print(2 * 6. / 3.)
print(type(2 * 6. / 3.))
# Prediction: answer is 4.0 and type is float
# Correct

# 2.3
print(2 * 6. // 3.)
print(type(2 * 6. // 3.))
# Prediction: answer is 4 and type is int
# Incorrect - answer is 4.0 and float. 6. // 3. is float because 6 and 3 are 
#floats, and the rest of the operation float.

# 2.4
print(5 - 7. // 3)
print(type(5 - 7. // 3))
# Prediction: answer is 3 and type is int
# Incorrect - answer is 3.0 and float. 7. // 3 is float because 7 is a float, 
#making that part float, and the rest of the operation float.

#%%
# Other operations - Exercise more computations
# 1.
print(2 ** 4)
print(type(2 ** 4))
# Prediction: answer is 16 and type is int
# Correct

# 2.
print(2. ** 4)
print(type(2. ** 4))
# Prediction: answer is 16.0 and type is float
# Correct

# 3.
print((2 + 1j) ** 2)
print(type((2 + 1j) ** 2))
# Prediction: answer is 3 + 4j and type is complex
# Correct

# 4.
print(1 == 1)
print(type(1 == 1))
# Prediction: answer is True and type is boolean
# Correct

# 5.
print(1. == 1)
print(type(1. == 1))
# Prediction: answer is False and type is boolean
# Incorrect. Answer is True and boolean because data type does not matter when 
#comparing two numbers, just the value

# 6.
print(1 + 0j == 1)
print(type(1 + 0j == 1))
# Prediction: answer is False and type is boolean
# Incorrect. Answer is True and boolean because data type does not matter when 
#comparing two numbers, just the value

# 7.
print(1 > 2)
print(type(1 > 2))
# Prediction: answer is False and type is boolean
# Correct

# 8.
print(1 >= 1.)
print(type(1 >= 1.))
# Prediction: answer is False and type is boolean
# Incorrect. Answer is True and boolean because data type does not matter when 
#comparing two numbers, just the value

# 9.
print(225 % 15)
print(type(225 % 15))
# Prediction: answer is 0 and type is int
# Correct

# 10.
print(13 % 3)
print(type(13 % 3))
# Prediction: answer is 1 and type is int
# Correct

#%%
# Exercises - writing simple programs with control flow statements
# Program 1
x = 13
y = 1
z = 17.1

if (abs(x - y) <= 4): #determining if numerical distance between two is less 
#than 4
    print(x + y)
else:
    print(z)

# Program 2
a = 6
b = 7

if (((a % 2) == 0)&((b % 2) == 0)): #if both a and b are even
    print(a ** b) #printing a to the power of b
elif (((a % 2) != 0)&((b % 2) != 0)): #if both a and b are odd
    print(b ** a) #printing b to the power of a
elif ((((a % 2) == 0)&((b % 2) != 0))|(((a % 2) != 0)&((b % 2) == 0))): #if 
#there is one odd and one even
    print(a * b) #printing product of a and b
    
#%%
# Exercises - predicting outcomes of programs that contain loops
# Block 1
# Prediction - output will be 1 - 10 with each number having its own line

for n in range(10):
    print(n + 1)

# Correct

#%%
# Exercises - predicting outcomes of programs that contain loops
# Block 2
# Prediction - output will alternate between 0 and 1 three times, starting 
#with 0 and ending with 1, with each number on its own line

for n in range(6):
    print(n % 2)

# Correct

#%%
# Exercises - predicting outcomes of programs that contain loops
# Block 3
# Prediction - output will alternate between zero and even numbers from 0 - 12 
#and "I don't like number", the odd number

for n in range(13):
    if n % 2 == 0:
        print(n)
    else:
        print("I don't like number", n)

# Correct
        
#%%
# Exercises - predicting outcomes of programs that contain loops
# Block 4
# Prediction - output will be 0, 1, 4, 9, 16, 25

n = 0
while n < 6:
    print(n ** 2)
    n += 1

# Correct

#%%
# Exercises - predicting outcomes of programs that contain loops
# Block 5
# Prediction - output will be 13, 6, "What a strange program"

n = 40
while n > 0:
    if n % 5 == 0:
        print(n % 3)
    n -= 4
print("What a strange program")

# Incorrect because I mistook % for being the divider. % represents the 
#remainder, so it should be 1, 2

#%%
# Exercises - writing programs that repeat using loops
# 1.

n = 1
while(n < 17):
    if(n % 2 == 0): #if number is even, keep going
        n += 1
    else: #if odd, print number out
        print(n)
        n += 1

#%%
# Exercises - writing programs that repeat using loops
# 2.

for x in range(17):
    if(x % 2 != 0): #if number is odd, print it
        print(x)

#%%
# Exercises - writing programs that repeat using loops
# 3.

for a in np.arange(57, 97, 1):
    if(a % 2 == 0): #if number is even, print it and "this is a fun number!"
        print(a)
        print("This is a fun number!")

#%%
# Exercises - writing programs that repeat using loops
# 4.

for b in np.arange(1, 15, 1):
    if(b % 2 == 0): #if number is even, print it
        print(b ** 2)

