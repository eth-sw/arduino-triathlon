# Triathlon Timer

This Arduino program serves as a triathlon timer, allowing users to input swim, bike, and run times, and then view the total time.

## Variables

- `long swimTimes`: Total time spent swimming in seconds.
- `long bikeTimes`: Total time spent biking in seconds.
- `long runTimes`: Total time spent running in seconds.
- `long totalTimes`: Total time for the entire triathlon in seconds.
- `int num`: User input for menu selection.
- `int menuSelection`: User input for additional selections.
- `const String names[]`: Array of activity names {"Swim", "Bike", "Run", "Total"}.

## Setup and Main Loop

The `setup` function initializes the serial communication and calls the `Menu` function.

The `loop` function is empty as the program primarily relies on user inputs and function calls.

## Menu

The `Menu` function displays a menu for the user to choose an activity and calls the respective function based on the user's input.

## Swim, Bike, Run, and Total Functions

Functions for entering swim, bike, and run times, as well as viewing the total time:
- `Swim()`: Records swim times.
- `Bike()`: Records bike times.
- `Run()`: Records run times.
- `Total()`: Calculates and displays total times.

## Additional Functions

- `menuSelect()`: Displays an additional menu for making another selection.

Each function prompts the user for input and updates the respective time variables.

Note: The program assumes the user will input times in hours, minutes, and seconds.
