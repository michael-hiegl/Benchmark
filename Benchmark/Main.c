//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Benchmark	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 9/25/2022 7:23:48 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>
#include <time.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float startTime = 0;
	float endTime = 0;
	float timeElapsed = 0;



	//Code
	startTime = (float)clock() / CLOCKS_PER_SEC;

	for (int i = 0; i <= 5000; i++)
	{
		printf("%i\n", i);
	}

	endTime = (float)clock() / CLOCKS_PER_SEC;

	timeElapsed = endTime - startTime;
	printf("%f", timeElapsed);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}