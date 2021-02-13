#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""

@author: Miranda Chang
HW1b!
"""
import numpy as np
import scipy as sp
#%%
# Exercises - Creating lists and adding items to them
# Block 1
# Prediction - True

[1, 2, 3] == [1, 2, 3]
print([1, 2, 3] == [1, 2, 3])

# Correct
#%%
# Exercises - Creating lists and adding items to them
# Block 2
# Prediction - False

[1, 2, 3] == [1, 3, 2]
print([1, 2, 3] == [1, 3, 2])

# Correct
#%%
# Exercises - Creating lists and adding items to them
# Block 3
# Prediction - True, True, True

list_1 = [5, 7, 10]
list_2 = [5, 7, 10, 11]
list_3 = list_2
list_3.append(11)
list_4 = [5, 7, 10, 11, 11]
list_1.append(11)
print(list_1 == list_3)
print(list_1 == list_2)
print(list_3 == list_4)

# Incorrect. list_1 = [5, 7, 10, 11] and list_3 = [5, 7, 10, 11, 11] and
#list_2 = [5, 7, 10, 11], so first two are false
#%%
# Exercises - Creating lists and adding items to them
# Block 4
# Prediction - False

empty_list = []
empty_list.append(13)
empty_list.append(7)
empty_list.append(271)
empty_list == [271, 7, 13]
print(empty_list == [271, 7, 13])

# Correct
#%%
# Exercises - List elements can be called and their values can be reassigned
# 1. Block 1
# Prediction - test_list = [2, 3, 4, 5]

test_list = []
test_list.append(3)
test_list.append(2)
test_list.append(5)
test_list[1] = 3
test_list[0] = 2
test_list.append(4)
test_list[3] = 5
test_list[2] = 4
print(test_list)

# Correct
#%%
# Exercises - List elements can be called and their values can be reassigned
# 1. Block 2
# Prediction - test_list = [[257, 3], [257, 2]]

test_list = []
test_list.append([1, 2])
test_list[0][1] = 3
test_list.append([1, 2])
test_list[1][0] = 257
test_list[0][0] = test_list[1][0]
print(test_list)

# Correct
#%%
# Exercises - List elements can be called and their values can be reassigned
# 1. Block 3
# Prediction - test_list = [["rhino", "elephant"], ["rhino", "elephant]]

test_list = [["rhino", "cat"], ["elephant", "dog"]]
test_list[0][1] = test_list[1][0]
test_list[1][1] = test_list[0][0]
test_list[1] = test_list[0]
print(test_list)

# Correct
#%%
# Exercises - List elements can be called and their values can be reassigned
# 2. Block 1

list_1 = []
# adding numbers to list
list_1.append(17)
list_1.append(29)
list_1.append(31)
print(list_1)

#%%
# Exercises - List elements can be called and their values can be reassigned
# 2. Block 2

list_1 = ["cat", "dog", "mouse"]
list_1[0] = "mouse" # turning first item to mouse
list_1[1] = "cat" # turning second item to cat
list_1[2] = "dog" # turning third item to dog
print(list_1)

#%%
# Exercises - List elements can be called and their values can be reassigned
# 2. Block 3

list_1 = []
list_1.append(["cat", "dog"]) # adding first index
list_1.append(["elephant", "rhino"]) # adding second index
print(list_1)

#%%
# Exercises - List elements can be called and their values can be reassigned
# 2. Block 4

list_1 = [[1, 2], [4, 5]]
list_1[0][0] = 2 # first item in first index is now 2
list_1[0][1] = 1 # second item in first index is now 1
list_1[1][0] = 5 # first item in second index is now 5
list_1[1][1] = 4 # second item in second index is now 4
print(list_1)

#%%
# Exercises - List elements can be called and their values can be reassigned
# 2. Block 5

list_1 = [[1, 2], [4, 5]]
list_1[0].append(1) # adding 1 to first index list
list_1[1].append(4) # adding 4 to second index list
list_1[0][0] = 3 # first item in first index list is now 3
list_1[1][0] = 6 # first item in second index list is now 6
print(list_1)

#%%
# Exercises - systematic list creation and manipulation
# 1.

first_100_odd = []
n = 1

while(len(first_100_odd) < 100): #making sure list has 100 elements at the end
    if (n % 2 != 0): #checking if number is odd and if it is, it will be added
    #to list
        first_100_odd.append(n)
    n += 1

print(first_100_odd)

#%%
# Exercises - systematic list creation and manipulation
# 2.

first_100_perfect = []
m = 1

while(len(first_100_perfect) < 100):
    if ((np.sqrt(m) % 1 == 0)): #checking if number is a perfect square. if
    #there is no remainder after dividing the square root by one, then it's a
    #perfect square
        first_100_perfect.append(m)
    m += 1

print(first_100_perfect)

#%%
# Exercises - systematic list creation and manipulation
# 3.

first_100_perfect_even = []
p = 1

while(len(first_100_perfect_even) < 100):
    if ((np.sqrt(p) % 1 == 0)&(p % 2 == 0)): #checking if number is a 
    #perfect square and even. if there is no remainder after dividing the 
    #square root by one, then it's a perfect square
        first_100_perfect_even.append(p)
    p += 1

print(first_100_perfect_even)

#%%
# Exercises - systematic list creation and manipulation
# 4.

divisible_357 = []
q = 1

while(len(divisible_357) < 100):
    if (((q % 3 == 0)&(q % 5 == 0)&(q % 7 == 0))): #checking if number is
    #divisible by 3, 5, and 7
        divisible_357.append(q)
    q += 1
    
print(divisible_357)

#%%
# Exercises - imports
# 1.

print(np.sin(1))

#%%
# Exercises - imports
# 2.

some_sines = []

for r in np.arange(1, 21, 1):
    some_sines.append(np.sin(r * np.pi / 10)) #sin(npi/10) and adding to list

print(some_sines)

#%%
# Exercises - imports
# 3.
# creating array via list comprehension
somes_sines = np.array([np.sin(r * np.pi / 10) for n in range(21)])
print(some_sines)
#%%
# Exercises - NumPy arrays
# 1.
# Prediction - [1, ..., 10], ([1, ..., 10]), ([1, ..., 10]), list, array, array

integer_list = [n for n in range(1, 11)] 
integer_array = np.array(integer_list) 
another_integer_array = np.arange(1,11)

print(integer_list) 
print(integer_array) 
print(another_integer_array)

print(type(integer_list)) 
print(type(integer_array)) 
print(type(another_integer_array))

# Arrays are [1 ... 10] with no commas
# The type of an array is numpy.ndarray

#%%
# Exercises - NumPy arrays
# 2.

print(np.sin(integer_array))
print(np.cos(integer_array))
print(np.exp(integer_array))

#%%
# Exercises - NumPy arrays
# 3. Block 1
# Prediction - an array of 11 two's

test_array = np.ones(11) 
array_1 = 3 * test_array 
array_2 = 5 * test_array 
test_array = array_1 + array_2 
test_array = test_array / 4
print(test_array)

# Correct
#%%
# Exercises - NumPy arrays
# 3. Block 2
# Prediction - an array of [4^2 6^2 8^2 ... 20^2]

hello = np.zeros(9)
goodbye = np.arange(1, 19, 2)
hello = 3 * (hello + 1)
test_array = (hello + goodbye) ** 2
print(test_array)

# Correct
#%%
# Exercises - NumPy arrays
# 3. Block 3
# Prediction - an array of 7 nines

luke = np.ones(7)
leah = 2 * luke
han = 3 * luke
darth = 4 * luke
jabba = 5 * luke
test_array = (luke + leah) * han * (darth - jabba)
print(test_array)

# Correct
#%%
# Exercises - NumPy arrays
# 3. Block 4
# Prediction - an array of 20 zeros

charm = np.pi * np.ones(20) / 2 
bottom = np.sin(charm)
up = np.cos(charm)
test_array = bottom * up
print(test_array)

# Correct
#%%
# Exercises - NumPy arrays
# 3. Block 5
# Prediction - [0 2.436 0 2.436 0]

test_array = np.sin(np.pi * np.array([n ** 2 for n in range(5)]) / 4)
heisenberg = test_array ** 2
schrodinger = test_array ** 3
pauli = test_array
test_array = (heisenberg + schrodinger + pauli) ** 2
print(test_array)

# Correct
#%%
# Exercises - array creation and manipulation
import math

# Create a NumPy array with 10 entries whose elements are npi/2 for = 0, 1, 
#... , 9 .
array = []
for n in np.arange(0, 10, 1):
    array.append(n * np.pi /2)

array = np.array(array)
print(array)

# Apply the NumPy sine function to this array, and make sure the result is 
#what you'd expect.
print(np.sin(array))

# Apply the math sine function to this array. What happened and why?
print(math.sin(array))

#%%
# Create an array of shape (1, 50) of zeros (a 50-dimensional zero vector) 
#and call it zero. Use NumPy's shape function to check the shape of the array.

#Loop
zero = []

while(len(zero) < 50): #creating list of zeros
    zero.append(0)

zero = np.array(zero) #creating array
zero.shape = (1, 50) # changing shape

print(zero)
print(np.shape(zero))

#Numpy commands
zero = np.zeros((1, 50)) #using just numpy commands to get target
print(zero)
print(np.shape(zero))

#%%
# Create an array of shape (1, 25) of all zeros except make the 7th element 
#equal to 3. Use NumPy's shape function to check the shape of the array.

# Loop
zero = []

while(len(zero) < 25): #creating list of zeros
    zero.append(0)

zero[6] = 3 #changing 7th element to 3
zero = np.array(zero) #creating array
zero.shape = (1, 25) # changing shape

print(zero)
print(np.shape(zero))

#Numpy commands (another way)
zero = np.zeros((1, 25)) #using just numpy commands to get target
zero[0][6] = 3 #changing 7th element to 3
print(zero)
print(np.shape(zero))

#%%
# Create an array of shape (1, 753) containing only zeros whose (2n)^th 
#element is (2n)^2 .

# I don't know what this means so I'm skipping it.


#%%
# Create an array of shape (5, 5) such that each value is a uniform random 
#number between 0 and 1.

# Loop
random = []

while(len(random) < 25): #creating list, 25 elements
    random.append(np.random.rand()) #selecting a random number, from numpy.org

random = np.array(random)
random = np.reshape(random, (5, 5)) #reshaping
print(random)
print(random.shape)

#Numpy commands
random = np.random.rand(5, 5) #creating array of random values from 0 to 1
print(random)
print(random.shape)

#%%
# Suppose that a person is running along the ground in the x-direction at a 
#velocity of v_x = 5 m/s. Create an array that contains the position of the 
#runner at 0.3-second intervals for a total of 20 seconds.

# Loop
t = []
n = 0
v = 5

while(len(t) < 68): #about 20 seconds
    t.append(n)
    n += 0.3 #intervals of 0.3 seconds

t = np.array(t)
x = v * t
print(x)

#Numpy commands
t = np.arange(0, 20.2, 0.3) #making array from 0 - ~20 in steps of 0.3
x = v * t
print(x)


