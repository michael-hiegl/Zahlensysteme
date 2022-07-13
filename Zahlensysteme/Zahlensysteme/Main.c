//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Zahlensysteme	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 07.12.2021 17:47:56
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

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Zahl = 0;
	char i_Eingabe = 0;



	//Code
	printf("Bitte Dezimalzahl eingeben\n");
	scanf("%i", &i_Zahl);
	getchar();

	printf("Bitte Zielsystem waehlen: Oktal, Hex, Ascii\n");
	i_Eingabe = getchar();

	if (i_Eingabe == 'O')
	{
		printf("Dezimal %i = Oktal %o\n", i_Zahl, i_Zahl);
	}
	else if (i_Eingabe == 'H')
	{
		printf("Dezimal %i = Hex %x\n", i_Zahl, i_Zahl);
	}
	else if (i_Eingabe == 'A')
	{
		printf("Dezimal %i = Ascii %c\n", i_Zahl, i_Zahl);
	}
	else
	{
		printf("Falsche Eingabe");
	}
	


	/*
	switch (i_Eingabe)
	{
	case 'O': printf("Dezimal %i = Oktal %o", i_Zahl, i_Zahl); break;

	case 'H': printf("Dezimal %i = Hex %x", i_Zahl, i_Zahl); break;

	case 'A': printf("Dezimal %i = Ascii %c", i_Zahl, i_Zahl); break;

	default: printf("Falsche Eingabe");
	}
	*/




	getchar();
	fflush(stdin);
	getchar();
	return 0;
}