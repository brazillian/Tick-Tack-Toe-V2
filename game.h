/*
 * board.h
 *
 *  Created on: 19 de set. de 2021
 *      Author: Familia PC - NETWORK
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

// DECLARATIONS OF THE VARIAVBLES AND FUNCTIONS WHO WIIL BE USED IN THE SOURCE FILES

extern char table[3][3];
extern char XorO[3];
extern int set_player;
extern int plays;
extern _Bool WIN;
extern int prev_player;

void create_table();
void put_in_table(int);
int check_win();
int check_nobody_win();

#endif /* SRC_BOARD_H_ */
