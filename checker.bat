@echo off
:again
randnum>input
mergesort < input > output.m
Qsort < input >output.q
fc output.m output.q >nul
if not errorlevel 1 goto again
