# Hamiltonian-Problem-Solution

## Members :

<li>Emmanuel Montoya</li>
<li>Rouni Assaf</li>


## Description :

You are given a set of cities that are laid out in a circle, connected by a circular road that
runs clockwise. Each city has a gas station that provides gallons of fuel, and the
distances between these cities are known. You have a car that can drive a certain
number of miles per gallon of fuel, and your goal is to pick a starting city such that you
can fill up your car in that city (using that city’s gas station). You can then drive to the
next city, and so on and so forth until you return back to the starting city with 0 or more
gallons of fuel left. This city is called a preferred starting city. In this problem, it is
guaranteed that there will always be exactly one valid starting city.

The problem set involves a series of arrays. The first array is the distance between
neighboring cities. Assume that city 𝑖 is 𝑑𝑖𝑠𝑡𝑎𝑛𝑐𝑒𝑠[𝑖] away from city 𝑖 + 1 . Since the cities
are connected via a circular road, the last city is connected to the first city. In other
words, the last distance in the distances array is equal to the distance from the last city to
the first city. The second array is an array of gas available at each city, where 𝑔𝑎𝑠 [𝑖] is
equal to the gas available at 𝑐𝑖𝑡𝑦 𝑖 . The total amount of gas available (from all gas
stations) is enough to travel to all cities. Your gas tank always starts out empty, and a
positive integer value for the number of miles that your car can travel per gallon of fuel
(miles per gallon, or MPG) is also given.


Write a function that returns the index of the preferred starting city.

## How to Run code:

Run <code>./run.sh</code> command 

> If permissions denied: 
>> error code : "zsh: permission denied: ./run.sh"

>Run
>> chmod +x run.sh

If that also doesn't work, run code in online compiler.

## Testing Program Input/Output:

### Sample 1:

<code>Sample Input:</code>

<code>city_distances = [5, 25, 15, 10, 15]</code>

<code>fuel = [1, 2, 1, 0, 3]</code>

<code>mpg = 10</code>

<code>The preferred starting city for the sample above is city 4</code>

### Sample 2:

<code>Sample Input:</code>

<code>city_distances = [5, 15, 15, 20, 15]</code>

<code>fuel = [1, 1, 0, 2, 3]</code>

<code>mpg = 15</code>

<code>The preferred starting city for the sample above is city 3</code>

### Sample 3:

<code>Sample Input:</code>

<code>city_distances = {15, 5, 25, 10, 25}</code>

<code>fuel = {3, 0, 1, 1, 2}</code>

<code>mpg = 10</code>

<code>No valid starting city found</code>
