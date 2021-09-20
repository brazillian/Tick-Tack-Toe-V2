/*
 * board.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Familia PC - NETWORK
 */


#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#define SIZE 3

char table[3][3] = {
	        {'1', '2', '3'},
	        {'4', '5', '6'},
	        {'7', '8', '9'}
	    };


void create_table() {
	int is_on_windows;

	#ifdef _WIN32 // CHECK IF THE OS IS WINDOWS OR NOTE. IF IT'S THE PROGRAM WILL DO system("cls).
		is_on_windows = 1;
	#endif

		switch(is_on_windows) {
			case 1:
				system("cls");
				break;
			default:
				break;
	}for (int i = 0; i < 10; i++) printf("\n");					//OBS: All printf bellows can be replaced for whatever you like it
																// I choose use \t and \n cuz i like it how this prints in my console

	for (int y = 0; y < SIZE; y++){			// For loop responsible to print the GRID every time is executed
		printf("\t\t\t\t\t\t");
		for (int x = 0; x < SIZE; x++){
			printf("%c | ", table[y][x]);
		}
		printf("\n\t\t\t\t\t\t----------\n");
	}
}
