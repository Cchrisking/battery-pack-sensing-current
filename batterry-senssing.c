#include<stdio.h>
/*
@r resistance in Ohm Ω
@v volatage in volt:
*/
float current(float v, float r){
  return v/r;
}
/*
power loose
@i in ampere
@r in Ohm Ω
*/
float power(float i, float r){
  return (i*i)*r;
}
