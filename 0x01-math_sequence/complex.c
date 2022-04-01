/*
* 0-display.c
* Author Eugene Madzaga
* Date: April 01, 2022
*/

#include "holberton.h"
#include <math.h>

/**
* modulus - return the modulus
* @c: structure complex
* Return: c
*/

double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (mod);
}


void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}


void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}

