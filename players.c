/*
 * players.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Luiz G. C. Silva
 */


#include <stdio.h>
#include <stdlib.h>
#include "game.h"

char XorO[3] = {'\0', 'X', 'O'};
int set_player = 1;
int plays = 0;

void put_in_table(int where) {

	switch(where) {  // THIS SWITCH is responsible to replace the grid with the correct character >> X or O
	case 1:
		if (table[0][0] != 'X' && table[0][0] != 'O'){ // The if statements bellows verify if the grid who will be replaced was'nt replaced before
			table[0][0] = XorO[set_player];
			plays++; 	// increase plays by one

			switch(set_player) {
			case 1:
				set_player++; // set player to their reverse
				break;
			case 2:
				set_player--;
				break;
			}
		}
		break;
	case 2:
			if (table[0][1] != 'X' && table[0][1] != 'O'){
				table[0][1] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 3:
			if (table[0][2] != 'X' && table[0][2] != 'O'){
				table[0][2] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 4:
			if (table[1][0] != 'X' && table[1][0] != 'O'){
				table[1][0] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 5:
			if (table[1][1] != 'X' && table[1][1] != 'O'){
				table[1][1] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 6:
			if (table[1][2] != 'X' && table[1][2] != 'O'){
				table[1][2] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 7:
			if (table[2][0] != 'X' && table[2][0] != 'O'){
				table[2][0] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 8:
			if (table[2][1] != 'X' && table[2][1] != 'O'){
				table[2][1] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	case 9:
			if (table[2][2] != 'X' && table[2][2] != 'O'){
				table[2][2] = XorO[set_player];
				plays++;

				switch(set_player) {
				case 1:
					set_player++;
					break;
				case 2:
					set_player--;
					break;
				}
			}
			break;
	default:
		break;

	}

}
