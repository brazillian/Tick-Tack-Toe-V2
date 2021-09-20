/*
 * tictactoe.c
 *
 *  Created on: 19 de set. de 2021
 *      Author: Familia PC - NETWORK
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"

int main (void) {
	int grid_selected; // create the variable who will hold the index of the value

	do {
		create_table(); // create the Tick Tack Toe table
		printf("\n\t\t\t\t\t\tPlayer %d >>> ", set_player);
		scanf("%i", &grid_selected);// Catch input of the grid who will be filed with X or O
		put_in_table(grid_selected);

	}while(check_win() != 1 && check_nobody_win() != 1);

	switch (WIN) {
	case 1:
		printf("\n\t\t\t\t\t\tCongratulations player %d: YOU WIN!!!", prev_player);
		break;
	default:
		printf("\t\t\t\t\t\t:(  Nobody wins the game!!!");
		break;
	}

	sleep(5);

	return 0;

}
