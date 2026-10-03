## Assignment 2 : 
Q1 : 

 Write a C++ program for an autonomous line-following robot with 8 IR sensors arranged from left to right.

Each sensor gives:
0 → White surface
1 → Black line

Example sensor input:
0 0 1 1 1 0 0 0

Requirements:
1. Store the 8 sensor readings in an array.
2. Take all 8 sensor readings as input from the user.
3. Calculate the position of the detected line using the sensor indices.
4. If the line is detected more toward the left, print "Turn Left".
5. If the line is detected more toward the right, print "Turn Right".
6. If the line is centered, print "Move Forward".
7. If no sensor detects the line, print "Line Lost".
8. Create separate functions for:
   - Reading the sensor values
   - Calculating the line position
   - Deciding the robot's movement
9. Do not use a separate if-else condition for every possible sensor combination.

Example:

Input:
0 0 1 1 1 0 0 0

Output:
Line Position: Center
Action: Move Forward

Output : 

<img width="1318" height="467" alt="Screenshot 2026-10-03 121146" src="https://github.com/user-attachments/assets/aebcdcb7-d592-4375-903e-fb17bb0a1bb3" />



Q2. Create a C++ class called Robot to control a robot.

The robot has the following properties:
- Speed
- Battery

Requirements:
1. Make the data members private.
2. Create the following member functions:
   - setSpeed()
   - setBattery()
   - moveForward()
   - moveBackward()
   - turnLeft()
   - turnRight()
   - displayStatus()
3. Speed should only accept values between 0 and 100.
4. Battery should only accept values between 0 and 100.
5. The robot should not move if the battery is 0%.
6. Each movement should reduce the battery by 5%.
7. Create a Robot object in main().
8. Take the speed and battery values as input from the user.
9. Execute a sequence of movement commands.
10. Display the final speed and battery level.

Example:

Input:
Speed: 80
Battery: 100

Commands:
Forward
Left
Forward
Right

Output:
Robot Speed: 80
Battery: 80%

Output : 

<img width="872" height="457" alt="Screenshot 2026-10-03 121338" src="https://github.com/user-attachments/assets/5d05e05e-ae8c-4e36-9114-6d7c67a8ded5" />
