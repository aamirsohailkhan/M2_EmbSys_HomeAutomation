
# Fingerprint based Security system


## Introduction 
	
  A fingerprint is a collection of data that may be used to identify software, network protocols, operating systems, or physical devices. Fingerprint-based security systems may be employed in a variety of settings, including industries, offices, and colleges, as well as at home. The fingerprint sensor is the most important component of this system. It is also known as a biometric sensor. The user must place his or her finger on the optical sensor portion of the fingerprint module.

## Main purpose
	
  The primary characteristic or specialty of a fingerprint is that it is one-of-a-kind. It provides a higher level of protection for this project than other security solutions. To begin operating this project, we must first enter data into the database of the fingerprint sensor, which requires us to capture fingerprint imprints of those individuals to whom we wish to grant access to our security system. This can be done only once or anytime a new entry is required in the system.

## Objective
	
  This project aims to build a gadget that allows access using fingerprint recognition technology. It includes all of the electronics required to save, remove, and validate fingerprints with the push of a button. We're going to utilize an Atmega 328 microcontroller for this.

# SWOT Analysis

![SWOT Analysis Template (Hexagon)](https://user-images.githubusercontent.com/46382398/154840185-c31ca68f-8784-4499-87dc-52881bfbcd35.png)

# 5W1H

## What
* Fingerprint based security system is the most secured system as compared to other systems. Reason is that RFID card or Keys of lock can be stolen, password may be leaked. However thumbnail of every human being is unique, so lock will not open unless the same person is present to give the impression of fingerprint.

## Why

* Finger Print is considered one of the safest key to lock or unlock any system as it can recognize any person uniquely and can't be copied easily.

## When

* The British were impressed with Vucetich's work and in 1902 introduced fingerprinting. NSW Police quickly followed.

## Where

* It can be used where the security concerns are needed.

## Who

* Product Owner : Security services 
* Tester : K A Amirasohail

## How

* Fingerprint scanners work by capturing the pattern of ridges and valleys on a finger. As a finger rests on the touch-capacitive surface, the device measures the charge; ridges exhibit a change in capacitance, while valleys produce practically no change at all. The sensor uses all this data to accurately map out prints.


# Requirements

## Highlevel Requirements


| High Level Requirements|Description|
|-------------------------|----------|
|HLR1|	Finger Print Sensor|
|HLR2|	Switches|
|HLR3|	Motor|
|HLR4|	Microcontroller|
|HLR5|	Software used|
|HLR6|	Display|

## LOWLEVEL REQUIREMENTS

|Low Level Requirements	| Description |
|-----------------------|-------------|
| HLR1_LLR1 | Finger Print module|
|HLR2_LLR1|	Push Button |
|HLR4_LLR1|	ATMEGA 328|
|HLR5_LLR1|	Code Blocks with AVR GCC compiler|
|HLR6_LLR1|	SimulIDE LCD and LED|



# DESIGN:

* Here we demonstrate fingerprint based security system to authenticate users from entering particular premises.The system is useful for secure sites to provide access only to authorized users automatically. This ensures safety and security at secure sites/premises like military, navy, government as well as corporate premises.
* For this purpose we here use a Atmega 32 microcontroller circuit. The circuit consists of atmega microcontroller that is interfaced to fingerprint sensor, LCD display and motors to operate a door.
* Users are allowed to register into the system first. After registration/enrollment the system allows to start monitoring.Now if a fingerprint is detected, the system scans the fingerprint against stored ones.
* If a match is found, the system operates the motors to open the door for those users, else the system does not open the door.
* Thus we ensure a secure fingerprint authorized security system.

## Structural Diagram [Low level]
![144219827-640b686f-b92d-4be2-a617-a54a8591f1e5](https://user-images.githubusercontent.com/46382398/154841237-d0754298-a0d1-48ee-9836-d0b52dda0758.png)

## Behavorial Diagram

![144220030-1dfe8305-e00f-4ffd-a98a-1ef5e993760c](https://user-images.githubusercontent.com/46382398/154841260-c614a596-145f-464a-9034-f2d9f890e9f1.png)

## Structural [High level]
![144220151-accfb5a4-a431-40e4-8635-90451e83bc04](https://user-images.githubusercontent.com/46382398/154841292-7c109658-bdd5-4abb-8ab8-a1d097aa014f.jpg)

## Behevorial Diagram
![144220242-e14095db-da80-496c-9416-29e79dbb2d6c](https://user-images.githubusercontent.com/46382398/154841306-820a72d8-ad93-4b5e-86b9-9010369a09c9.png)

## Bloack Diagram

![144220327-7bfa3d32-7925-4a4a-9e96-cd9aa9fb0687](https://user-images.githubusercontent.com/46382398/154841329-900ddcee-0bfc-49c9-81ab-00d69a504ec0.png)
