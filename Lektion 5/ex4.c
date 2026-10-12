#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_NAME_SIZE 20
#define MAX_NUMBER_OF_PLAYERS 5
#define MAX_NUMBER_OF_ROUNDS 3

bool scanf_user_name(char *name);
void roll_the_dize(char *name, int *player_points);

int main(void) 
{
    srand(time(NULL)); // Seed with current time

    char players_name[MAX_NUMBER_OF_PLAYERS][MAX_NAME_SIZE] = {0};
    int players_points[MAX_NUMBER_OF_PLAYERS] = {0};
    int total_number_of_players = 0;

    printf("Enter number of players(1-%d)", MAX_NUMBER_OF_PLAYERS);
    scanf("%d", &total_number_of_players);

    if (total_number_of_players > MAX_NUMBER_OF_PLAYERS && total_number_of_players < 0)
    {
        return 1;
    }

    for(int player = 0; player < total_number_of_players; player++)
    {   
        if(!scanf_user_name(players_name[player]))
        {
            player--;
        }
    }

    for (int round = 0; round < MAX_NUMBER_OF_ROUNDS; round++)
    {
        for(int player = 0; player < total_number_of_players; player++)
        {
            roll_the_dize(players_name[player], &players_points[player]);
        }

    }

    for(int i = 0; i < total_number_of_players; i++)
    {
        printf("%s\n got %d points\n", players_name[i], players_points[i]);
    }
    return 0;    
}


bool scanf_user_name(char *name)
{   
    int total_scans = scanf("%s", name);
    return total_scans == 1? true : false;
}

void roll_the_dize(char *name, int *player_points)
{
    int dize = rand() % 6;
    printf("Player %s got %d points\n", name, dize);
    *player_points = *player_points + dize;
    printf("New score is %d\n", *player_points);
}