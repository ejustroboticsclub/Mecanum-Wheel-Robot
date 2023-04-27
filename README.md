# Project Name: Mecanum-Wheel-Robot

The mecanum wheel robot is a four-wheeled robot that can move in any direction using four mecanum wheels. The robot is controlled using an accelerometer sensor that is attached to a controlling arm. When the controlling arm is moved, the accelerometer sensor measures the inclination of the arm and sends this data to the microcontroller via a Bluetooth module. The microcontroller then processes the data and determines the direction and speed of the mecanum wheels based on the inclination of the controlling arm.

## Prerequisites
*	Electric and electronic circuits (intermediate).
*	Arduino programming (Basic).
*	Mechanical knowledge (Basic).

##	Learning Outcomes
*	Understanding of mecanum wheel robot kinematics: Working with a mecanum wheel robot involves understanding the unique kinematics of the wheels, which allows for omnidirectional movement. By working on a mecanum wheel robot, the learner can gain a deeper understanding of how these wheels work and how they can be used to achieve different types of movement.

*	Experience with microcontroller programming: To control the mecanum wheel robot using an accelerometer sensor and Bluetooth module, the learner would need to program a microcontroller to receive sensor data, interpret it, and control the robot's movements. This can provide valuable experience with microcontroller programming and embedded systems.

*	Experience with wireless communication: Using a Bluetooth module to communicate between the two microcontroller requires a solid understanding of wireless communication protocols. Working with a mecanum wheel robot that uses Bluetooth communication can provide valuable experience in designing, testing, and troubleshooting wireless communication systems.

##	Contributors
###	Mentors:
* Ahmed Yasser Gamea
#### Participants:
*	Reem Fikry
*	Mohamed Osama
*	Abdelrahman Ahmed

 
## Plan

 Category | Item | Quantity 
--- | --- | --- 
 ..... | Omnidirectional wheels |4
 ..... | 60mm Aluminum plate |2
 ..... | DC Motors |4
 ..... | D-shaped mecanum wheel shafts | 1 
 ..... | Jumper wires |30
 Hardware | Bluetooth module | 2 
 ..... | Lithium Batteries | 3 
 ..... | Battery holder | 1 
 ..... | L298n Motor driver | 2 
 ..... | Microcontroller (Arduino Uno) | 2 
 ..... | MPU6050 Module | 1 
--- | --- | --- 
 Software | Arduino IDE | ...... 
--- | --- | --- 


### Timeline

#### Week 1-2: Project Planning and Research
*	Define project scope and goals. 
*	Plan project timeline and milestones.
#### Week 3-4: Hardware Setup
*	Assemble mecanum wheel robot kit.
*	Install and test the Bluetooth module. 
*	Connect and test the accelerometer sensor. 
*	Integrate the sensors and module with the microcontroller. 
#### Week 5-6: Sensor Data Processing and Control System Design
*	Program the microcontroller to process sensor data.
*	Develop control algorithms for the mecanum wheels.
*	Implement the control system on the microcontroller.
*	Integrate the two Bluetooth modules with each other and data flow from one microcontroller to the other.
*	Test the wireless communication and control system.
#### Week 7: Final Testing and Documentation
*	Conduct final tests and troubleshoot any issues.
*	Document the project, including hardware and software designs, code.
*	Present the project and demonstrate its functionality.

## Technical Details
###	System Description
The mecanum wheel robot is a four-wheeled robot that can move in any direction using four mecanum wheels. The robot is controlled using an accelerometer sensor that is attached to a controlling arm. When the controlling arm is moved, the accelerometer sensor measures the inclination of the arm and sends this data to the microcontroller via a Bluetooth module. The microcontroller then processes the data and determines the direction and speed of the mecanum wheels based on the inclination of the controlling arm.

![image](https://user-images.githubusercontent.com/130171279/233725996-a1796dae-f700-4b50-b326-eb288098d990.png)


Here are the subsystems and tasks involved in the system:
*	Controlling Arm: The controlling arm is the physical interface between the user and the robot. The user moves the controlling arm to control the movement of the robot.
*	Accelerometer Sensor: The accelerometer sensor measures the inclination of the controlling arm and provides data to the microcontroller.
*	Microcontroller: The microcontroller is the brain of the robot. It processes the data from the accelerometer sensor and determines the direction and speed of the mecanum wheels.
*	Bluetooth Module: The Bluetooth module is used for wireless communication between the microcontroller and the controller device. There are two Bluetooth modules on the robot, one for receiving data from the controlling arm and another for sending data to the controller device.
*	Mecanum Wheels: The mecanum wheels are the key component of the robot's mobility system. They allow the robot to move in any direction and are controlled by the microcontroller.


Here are the subtasks involved in the system:
*	Calibrate the accelerometer sensor: Before using the robot, the accelerometer sensor needs to be calibrated to ensure accurate measurements of the controlling arm's inclination.
*	Connect the Bluetooth modules: The Bluetooth modules need to be connected to the microcontroller and the controlling device to establish a wireless connection.
*	Receive data from the accelerometer sensor: The microcontroller receives data from the accelerometer sensor via the Bluetooth module.
*	Controlling mecanum wheels depending on data: The microcontroller sends control signals to the mecanum wheels based on the processed data.

##	Electrical
Connections:
The controller arm is composed of microcontroller, which is connected to a Bluetooth module and an accelerometer sensor. This Bluetooth module have a wireless communication with the other Bluetooth module on the robot.
The Bluetooth module on the robot is connected with other microcontroller that controls the motor driver circuit, which is connected to the four DC motors. 
##	Software
The programming part of the Mecanum Wheel Robot is done on the Arduino IDE. There are two programs developed:
*	The first program sends the inclination data of the arm to the robot via Bluetooth communication.
*	The second program receives and processes the data and determines the direction and speed of the mecanum wheels accordingly.
Note: before using the Bluetooth modules, it is essential to set-up the AT-command mode
 

