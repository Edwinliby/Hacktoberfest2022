#include<stdio.h>
#include<string.h>

#define MIN_CELLES 10
#define MAX_CELLES 25
#define COINS 4

void print_welcome_message();
int get_cellnum();
void place_coins(int coins[], int cellnum);
void draw_board(int coins[], int cellnum);
void draw_line(int length);
char IsCoinInCell(int coins[], int i);
void make_move(int coins[], int player_num);
int gameover(int coins[]);
int move_valid(coins, coin, places);
void print_game_summary(int player_num);


int main()
{
	int player_num = 1; 
	int coins[COINS];
	int cellnum;
	print_welcome_message();
	cellnum = get_cellnum();
	place_coins(coins, cellnum);
	draw_board(coins, cellnum);
	while (!(gameover(coins)))
	{
		make_move(coins, player_num);
		draw_board(coins, cellnum);
		player_num = 3 - player_num;
	}
	print_game_summary(3 - player_num);
	return 0;
	
}


/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              print_welcome_message
 *                                              ----------
 * General      : The function prints the welcome message to the players.
 *
 * Parameters   : None
 *
 * Return Value : None.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void print_welcome_message() {
	char playerpress;
	printf("Welcome to the coins game!!.\n");
	printf("In this game their are 4 coins, which put in the start of the game in cells.\n");
	printf("In every turn, the player needs to move one coin to the left.\n");
	printf("The farthest the player can move the coin is to be close to the coin to his left.\n");
	printf("The loser is the player who can\'t move a coins.\n");
	scanf("%c", &playerpress); printf("Press any buten.....");
	system("cls"); /* Clear screen. */
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              get_cellnum
 *                                              ----------
 * General      : The function gets form the user the size of the board.
 *
 * Parameters   : cellnum - Represents the number of cells. (In)
 *
 * Return Value : cell_num which represents the size of the board. (In)
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int get_cellnum() {
	int cellnum = 0;
	do {
		printf("Enter the num of cells(10-25) to want to play with!!");
		scanf("%d", cellnum);
	} while (cellnum < MIN_CELLES || cellnum > MAX_CELLES);
	return cellnum;
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              place_coins
 *                                              ----------
 * General      : The function gets the positions of the coins and places them on the board.
 *
 * Parameters   :
 *      i              - The coin number in the arry. (In)
 *      cell_num       - The size of the board. (In)
 *
 * Return Value : None.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


void place_coins(int coins[], int cellnum) {
	int i, place;
	for (i = 0; i < COINS; i++)
	{
		printf("Enter the location of coin (1-%d) ...\n", (i + 1), cellnum); scanf("%d", &place);
		while (place<1 || place>cellnum || i > 0 && place - 1 <= coins[i - 1])
		{
			printf("Try again, plase try num between 1-&d\n", cellnum); scanf("%d", &place);
		}
		coins[i] = place - 1;
	}
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
* draw_board
* ----------
* General      : The function draws the game board on the screen.
*
* Parameters :
*      coins - The array containing the indexes in which coins are held on the board.(In[])
*      cell_num - The Length of the array.is also the given size fo the playing board.(In)
*
* Return Value : None.
*
* ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void draw_board(int coins[], int cellnum)
{
	int nIndex, nIndexTwice;
	draw_line(cellnum * 3 + 1);
	// Runs twice because needs to print 2 lines
	for (nIndexTwice = 0; nIndexTwice < 2; nIndexTwice++)
	{
		for (nIndex = 0; nIndex < cellnum; nIndex++)
		{
			// Checks if theis is a coins in the current cell
			if (IsCoinInCell(coins, nIndex))
				printf("|**");
			else
				printf("|  ");
		}
		printf("|\n");
	}
	draw_line(cellnum * 3 + 1);
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                 draw_line
 *                                              ----------
 * General      : The function draws the lines that segment the playing area.
 *
 * Parameters   :
 *      length       - The number of cells in the game times 3 to adjust for the the size of each cell (each cell is equivalent to 3 strikes on the board). (In)
 *
 * Return Value : None.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void draw_line(int length) {
	int i;
	for (i = 0; i < length; i++)
		printf("-");
	printf("\n");
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              IsCoinInCell
 *                                              ----------
 * General      : The function checkes if the coins in the arry is in thier cells.
 *
 * Parameters   :
 *      coins      - The array containing the indexes in which coins are held on the board.(In[])
 *      i          - The coin number in the arry. (In)
 *      coinincell - The num of coins in the cells. (In)
 *
 * Return Value : return 1 if the coin is in the arry, if not - return 0.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

char IsCoinInCell(int coins[], int i) {
	int coinincell;
	for (coinincell = 0; coinincell < COINS; coinincell++)
		if (coins[coinincell] == i)
			return 1;
	return 0;
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              move_valid
 *                                              ----------
 * General      : The function check if player move is valid.
 *
 * Parameters   :
 *      coins      - The array containing the indexes in which coins are held on the board.(In[])
 *      coin       - The coin the player wants to move. (In)
 *      place      - The num of cells the player wants to move coin. (In)
 *
 * Return Value : 1 if the move is valid, else 0.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int move_valid(int coins[], int coin, int place) {
	if (coin >= 1 && coin <= COINS && coins[coin - 1] && place > 0 && coins[coin - 1] - place >= 0)
	{
		if (coin != 1)
		{
			if (coins[coin - 2] < coins[coin - 1] - place)
				return 1;
		}
		else
			return 1;
	}
	return 0;
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              make_move
 *                                              ----------
 * General      : Lets the player make a move.
 *
 * Parameters   :
 *      coins        - The array that represents the game board. (In [])
 *      player_num   - A number that represents how many places the coin will move .(In)
 *
 * Return Value : None.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


void make_move(int coins[], int player_num) {
	int coin, places;

	printf("\n\nEnter coin to move (leftest coin is 1, rightest is %d) ...\n", COINS); /* New line. */

	scanf("%d", &coin); /* Get coin number from user and put it in coin. */

	printf("How many places to move? \n");

	scanf("%d", &places); /* Get the place of the coin the player chose to move. */

	if (move_valid(coins, coin, places)) /* If move is valid. */
	{
		coins[coin - 1] -= places;
	}
	else /* Move is invalid. */
	{
		printf("Move is invalid! Please try again. \nPress enter to try again ...");
		getch(); /* Wait for input. */
	}
	system("cls"); /* Clear screen. */
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              gameover
 *                                              ----------
 * General      : The function Checks if the game is over or if there is at least one game move left to do.
 *
 * Parameters   :
 *      coins       - The array that represents the game board. (In [])
 *
 * Return Value : 1 if the game is over, 0 if not. (In)
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int gameover(int coins[])
{
	int i;

	for (i = 0; i < COINS; i++)
		if (coins[i] != i) return 0; 
	/**the game is over when the four coins are in their final place, the first coin is at the first cell, the second at the second and so on*/

	return 1;
}

/**----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 *                                              print_game_summary
 *                                              ------------------
 * General      : Prints the summary of the game, who won.
 *
 * Parameters   :
 *      winning_player       - The number representing the winning player.(In)
 *
 * Return Value : None.
 *
 * ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void print_game_summary(int player_num) {
	system("clr");
	printf("Player %d is the wins!\n", player_num);
}


