#include <stdio.h>
#include <string.h>

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

void moveSnake(int *player_x, int *player_y, int facing, int map[100][100]) {
    switch(facing) {
        case UP:
            *player_y--;
            break;
        case RIGHT:
            *player_x++;
            break;
        case DOWN:
            *player_y++;
            break;
        case LEFT:
            *player_x--;
            break;
    }

    map[*player_x][*player_y] = 1;
}

int main() {
    int n, m, player_x, player_y, apple_x, apple_y, facing, map[100][100];
    char moves[16];

    scanf("%d %d", &n, &m);
    scanf("%d %d", &apple_x, &apple_y);
    scanf("%s", moves);

    player_x = n - 1;
    player_y = m - 1;
    map[player_x][player_y] = 1;
    facing = 0;

    for(int i = 0; i < strlen(moves); i++) {
        if(moves[i] != 'F' && moves[i] != 'L' && moves[i] != 'R') continue;

        facing = moves[i] == 'L' ? facing - 1 : moves[i] == 'R' ? facing + 1 : facing;
        facing = facing < UP ? LEFT : facing > LEFT ? UP : facing;
        moveSnake(&player_x, &player_y, facing, map);

        if(player_x == apple_x && player_y == apple_y) {
            printf("NJAM");
            return 0;
        }
        if(map[player_x][player_y]) {
            printf("GAME OVER Ouch");
            return 0;
        }
    }

    printf("GAME OVER");

    return 0;
}
