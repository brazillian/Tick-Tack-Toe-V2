/*
 * check_win.c
 *
 *  Created on: 20 de set. de 2021
 *      Author: Luiz G. C. Silva
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "game.h"

_Bool WIN = 0;
int prev_player; // When the variable player came in this function their value is already modified, so this variable hold the previous value of player

int check_win(){
	int return_value; // RETURN_VALUE is what the function will return, IF 1: Somebody Wins, Else if 0: Nobody wins yet

	switch(set_player) {
	case 1:
		prev_player = 2; // IF the value now is 1, the previous value is two
		break;
	case 2:
		prev_player = 1; // IF the value now is 2, the previous value is one
		break;
	}

	// HORIZONTAL MATCH
	if (table[0][0] == XorO[prev_player] && table[0][1] == XorO[prev_player] && table[0][2] == XorO[prev_player] ) {
		return_value = 1;
	}
	else if (table[1][0] == XorO[prev_player] && table[1][1] == XorO[prev_player] && table[1][2] == XorO[prev_player] ) {
		return_value = 1;
	}
	else if (table[2][0] == XorO[prev_player] && table[2][1] == XorO[prev_player] && table[2][2] == XorO[prev_player] ) {
		return_value = 1;
	}

	// VERTICAL MATCH
	else if (table[0][0] == XorO[prev_player] && table[1][0] == XorO[prev_player] && table[2][0] == XorO[prev_player] ) {
		return_value = 1;
	}
	else if (table[0][1] == XorO[prev_player] && table[1][1] == XorO[prev_player] && table[2][1] == XorO[prev_player] ) {
		return_value = 1;
	}
	else if (table[0][2] == XorO[prev_player] && table[1][2] == XorO[prev_player] && table[2][2] == XorO[prev_player] ) {
		return_value = 1;
	}

	// DIAGONAL MATCH

	else if(table[0][0] == XorO[prev_player] && table[1][1] == XorO[prev_player] && table[2][2] == XorO[prev_player]){
		return_value = 1;
	}
	else if(table[0][2] == XorO[prev_player] && table[1][1] == XorO[prev_player] && table[2][0] == XorO[prev_player]){
		return_value = 1;
	}

	// NO WIN YET

	else {
		return_value = 0;
	}

	WIN = return_value;

	return return_value;
}


int check_nobody_win() {
	int return_value = 0; //RETURN_VALUE is what the function will return, IF 1: All grid was replaced and nobody win, Else if 0: Nobody wins yet and the grid was'nt fulled replaced


	if (plays == 9 ){  // The variable plays who it's in players.c increase by one in every play, when she came in 9, symbolizes that nobody wins the game
		return_value = 1;
	}
	else {
		return_value = 0;
	}

	return return_value;
}
