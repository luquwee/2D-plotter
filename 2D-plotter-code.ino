// DualMotorShield.pde
// -*- mode: C++ -*-
//
// Shows how to run 2 simultaneous steppers
// using the Itead Studio Arduino Dual Stepper Motor Driver Shield
// model IM120417015
// This shield is capable of driving 2 steppers at
// currents of up to 750mA
// and voltages up to 30V
// Runs both steppers forwards and backwards, accelerating and decelerating
// at the limits.
//
// Copyright (C) 2014 Mike McCauley
// $Id:  $
#include <AccelStepper.h>
#include <MultiStepper.h>

// The X Stepper pins
#define STEPPER1_DIR_PIN 4
#define STEPPER1_STEP_PIN 3
// The Y stepper pins
#define STEPPER2_DIR_PIN 6
#define STEPPER2_STEP_PIN 5
// Define some steppers and the pins the will use
AccelStepper stepper1(AccelStepper::DRIVER, STEPPER1_STEP_PIN, STEPPER1_DIR_PIN);
AccelStepper stepper2(AccelStepper::DRIVER, STEPPER2_STEP_PIN, STEPPER2_DIR_PIN);

MultiStepper steppers;

long positions[2]; // Array of desired stepper positions
float scalingx = 1.0;
float scalingy = 1.0;


void setup()
{  
    stepper1.setMaxSpeed(900.0);
    stepper2.setMaxSpeed(900.0);
   
  // Then give them to MultiStepper to manage
  steppers.addStepper(stepper1);
  steppers.addStepper(stepper2);

  Serial.begin(9600);
}

void dline(int pos1, int pos2) {

    positions[0] = pos1;
    positions[1] = pos2;
    steppers.moveTo(positions);
    steppers.runSpeedToPosition();
    delay(1000);

}

void letterA(int xs,int ys) {

 dline(xs-00,ys+0);
 dline(xs-63,ys+216);
 dline(xs-187,ys+216);
 dline(xs-125,ys+432);
 dline(xs-63,ys+216);
 dline(xs-187,ys+216);
 dline(xs-250,ys+0);

}

void letterB(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-250,ys+266);
 dline(xs-175,ys+216);
 dline(xs-0,ys+216);
 dline(xs-175,ys+216);
 dline(xs-250,ys+166);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
}

void letterC(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-50,ys+0);
 dline(xs-0,ys+50);
 dline(xs-0,ys+382);
 dline(xs-50,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-200,ys+432);
 dline(xs-50,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+50);
 dline(xs-50,ys+0);
 dline(xs-200,ys+0);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-250,ys+0);
}

void letterD(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-175,ys+432);
 dline(xs-250,ys+332);
 dline(xs-250,ys+100);
 dline(xs-175,ys+0);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
}

void letterE(int xs,int ys) {

 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-250,ys+432);
 dline(xs-0,ys+432);
 dline(xs-0,ys+216);
 dline(xs-250,ys+216);
 dline(xs-0,ys+216);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
  
}

void letterF(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-250,ys+432);
 dline(xs-250,ys+332);
 dline(xs-250,ys+432);
 dline(xs-0,ys+432);
 dline(xs-0,ys+216);
 dline(xs-200,ys+216);
 dline(xs-0,ys+216);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);

}


void letterG(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-50,ys+0);
 dline(xs-0,ys+50);
 dline(xs-0,ys+382);
 dline(xs-50,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-200,ys+432);
 dline(xs-50,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+50);
 dline(xs-50,ys+0);
 dline(xs-200,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+166);
 dline(xs-200,ys+166);
 dline(xs-250,ys+166);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-250,ys+0);
}

void letterH(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-0,ys+216);
 dline(xs-250,ys+216);
 dline(xs-250,ys+432);
 dline(xs-250,ys+0);
}

void letterI(int xs,int ys) {

 dline(xs-0,ys+0);
 dline(xs-0,ys+50);
 dline(xs-0,ys+0);
 dline(xs-125,ys+0);
 dline(xs-125,ys+432);
 dline(xs-0,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+432);
 dline(xs-250,ys+432);
 dline(xs-250,ys+382);
 dline(xs-250,ys+432);
 dline(xs-125,ys+432);
 dline(xs-125,ys+0);
 dline(xs-250,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+0);
}

void letterJ(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-50,ys+0);
 dline(xs-0,ys+50);
 dline(xs-50,ys+0);
 dline(xs-200,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+432);
 dline(xs-0,ys+432);
 dline(xs-250,ys+432);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-250,ys+0);
}

void letterK(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-0,ys+216);
 dline(xs-250,ys+432);
 dline(xs-0,ys+216);
 dline(xs-250,ys+0);
}

void letterL(int xs,int ys) {

 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+0); 
}

void letterM(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-125,ys+300);
 dline(xs-250,ys+432);
 dline(xs-250,ys+0);
}

void letterN(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-250,ys+0);
 dline(xs-250,ys+432);
 dline(xs-250,ys+0);
}

void letterO(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-50,ys+0);
 dline(xs-0,ys+50);
 dline(xs-0,ys+382);
 dline(xs-50,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-200,ys+432);
 dline(xs-50,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+50);
 dline(xs-50,ys+0);
 dline(xs-200,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+382);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-250,ys+0);
}

void letterP(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-250,ys+266);
 dline(xs-200,ys+216);
 dline(xs-0,ys+216);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
}

void letterQ(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-50,ys+0);
 dline(xs-0,ys+50);
 dline(xs-0,ys+382);
 dline(xs-50,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-200,ys+432);
 dline(xs-50,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+50);
 dline(xs-50,ys+0);
 dline(xs-200,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+382);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-220,ys+20);
 dline(xs-210,ys+40);
 dline(xs-250,ys+-20);
 dline(xs-220,ys+20);
 dline(xs-200,ys+0);
 dline(xs-250,ys+0);
}

void letterR(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-0,ys+432);
 dline(xs-200,ys+432);
 dline(xs-250,ys+382);
 dline(xs-250,ys+266);
 dline(xs-200,ys+216);
 dline(xs-0,ys+216);
 dline(xs-100,ys+216);
 dline(xs-250,ys+0);
}

void letterS(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-125,ys+0);
 dline(xs-0,ys+108);
 dline(xs-125,ys+0);
 dline(xs-250,ys+108);
 dline(xs-0,ys+324);
 dline(xs-125,ys+432);
 dline(xs-250,ys+324);
 dline(xs-125,ys+432);
 dline(xs-0,ys+324);
 dline(xs-250,ys+108);
 dline(xs-125,ys+0);
 dline(xs-250,ys+0);
}

void letterT(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-125,ys+0);
 dline(xs-125,ys+432);
 dline(xs-0,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+432);
 dline(xs-250,ys+432);
 dline(xs-250,ys+382);
 dline(xs-250,ys+432);
 dline(xs-125,ys+432);
 dline(xs-125,ys+0);
 dline(xs-250,ys+0);
}

void letterU(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-50,ys+0);
 dline(xs-0,ys+50);
 dline(xs-0,ys+432);
 dline(xs-0,ys+50);
 dline(xs-50,ys+0);
 dline(xs-200,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+432);
 dline(xs-250,ys+50);
 dline(xs-200,ys+0);
 dline(xs-250,ys+0);
}

void letterV(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-125,ys+0);
 dline(xs-0,ys+432);
 dline(xs-125,ys+0);
 dline(xs-250,ys+432);
 dline(xs-125,ys+0);
 dline(xs-250,ys+0);
}

void letterW(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-83,ys+0);
 dline(xs-0,ys+432);
 dline(xs-83,ys+0);
 dline(xs-125,ys+215);
 dline(xs-167,ys+0);
 dline(xs-250,ys+432);
 dline(xs-167,ys+0);
 dline(xs-250,ys+0);
}

void letterX(int xs,int ys) {

 dline(xs-0,ys+0);
 dline(xs-250,ys+432);
 dline(xs-125,ys+216);
 dline(xs-0,ys+432);
 dline(xs-250,ys+0);
  
}

void letterY(int xs,int ys) {
 dline(xs-0,ys+0);
 dline(xs-125,ys+0);
 dline(xs-125,ys+216);
 dline(xs-250,ys+432);
 dline(xs-125,ys+216);
 dline(xs-0,ys+432);
 dline(xs-125,ys+216);
 dline(xs-125,ys+0);
 dline(xs-250,ys+0);
}

void letterZ(int xs,int ys) {
  dline(xs-0,ys+0);
 dline(xs-250,ys+432);
 dline(xs-0,ys+432);
 dline(xs-0,ys+382);
 dline(xs-0,ys+432);
 dline(xs-250,ys+432);
 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
 dline(xs-250,ys+50);
 dline(xs-250,ys+0);
}

void space(int xs,int ys) {

 dline(xs-0,ys+0);
 dline(xs-250,ys+0);
  
}

void printletter(char letter,int xstart, int ystart) {

  if(letter=='A') letterA(xstart, ystart);  
  if(letter=='B') letterB(xstart, ystart);  
  if(letter=='C') letterC(xstart, ystart);  
  if(letter=='D') letterD(xstart, ystart);  
  if(letter=='E') letterE(xstart, ystart);
  if(letter=='F') letterF(xstart, ystart);  
  if(letter=='G') letterG(xstart, ystart);  
  if(letter=='H') letterH(xstart, ystart);
  if(letter=='I') letterI(xstart, ystart);
  if(letter=='J') letterJ(xstart, ystart);  
  if(letter=='K') letterK(xstart, ystart);  
  if(letter=='L') letterL(xstart, ystart);
  if(letter=='M') letterM(xstart, ystart);
  if(letter=='N') letterN(xstart, ystart);  
  if(letter=='O') letterO(xstart, ystart);  
  if(letter=='P') letterP(xstart, ystart);  
  if(letter=='Q') letterQ(xstart, ystart);  
  if(letter=='R') letterR(xstart, ystart);
  if(letter=='S') letterS(xstart, ystart);  
  if(letter=='T') letterT(xstart, ystart);  
  if(letter=='U') letterU(xstart, ystart);  
  if(letter=='V') letterV(xstart, ystart);  
  if(letter=='W') letterW(xstart, ystart);  
  if(letter=='X') letterX(xstart, ystart);
  if(letter=='Y') letterY(xstart, ystart);  
  if(letter=='Z') letterZ(xstart, ystart);  
  if(letter==' ') space(xstart, ystart);
  
}

void loop()
{ 

  char Str[] = "OO";
  int xstart=0;
  int ystart=0;
 
  int deltax=300;
  int deltay=500;

  int msgSize=sizeof(Str)-1;

  Serial.print(msgSize);

  for(int i=0;i<msgSize;i++) {
    printletter(Str[i],xstart, ystart);
    xstart-=deltax;
    
    if (Str[i]=='n') {
      xstart=0;
      ystart-=deltay;
    }
    
  }

  while (true) {
    // done
  }

  
}

  
