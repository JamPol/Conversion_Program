# Makefile for the Conversion_Program
# Author: Charounson Saintilus <cs10c@my.fsu.edu>
# Created: May 8, 2013
# Last Edited: May 8, 2013

# Description/ Instructions: This makefile must be in the
# same directory as conversion_menu.h, conversion_menu.cpp and
# Main.cpp. simply type "make" or "make convert" to compile the 
# project in a unix based terminal. 
 
convert: conversion_menu.h conversion_menu.cpp Main.cpp
	g++ conversion_menu.h conversion_menu.cpp Main.cpp
