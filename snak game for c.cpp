#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;
  

void setup()
{
    gameover = 0;
  
   
    x = height / 2;
    y = width / 2;
label1:
    fruitx = rand() % 20;
    if (fruitx == 0)
        goto label1;
label2:
    fruity = rand() % 20;
    if (fruity == 0)
        goto label2;
    score = 0;
}
  

void draw()
{
    system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == width - 1
                || j == 0
                || j == height - 1) {
                printf("#");
            }
            else {
                if (i == x && j == y)
                    printf("0");
                else if (i == fruitx
                         && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
  
        
    printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game");
}
  

void input()
{
    if (kbhit()) {
        switch (getch()) {
        case '1':
            flag = 1;
            break;
        case '2':
            flag = 2;
            break;
        case '3':
            flag = 3;
            break;
        case '5':
		
		            flag = 4;
            break;
        case '0':
            gameover = 1;
            break;
        }
    }
}

void logic()
{
    sleep(0.1);
    switch (flag) {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }
  
    
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;
   

    if (x == fruitx && y == fruity)
	 {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0)
            goto label3;
  
                                
    label5:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label5;
        score += 10;
    }
}

                                                                                                                                                                                                                                                                                                                                                                                  
																																																																																												   main() 
{
    int m, n;
  
    
    setup();
    while (!gameover)
	 {

        draw();
        input();
        logic();
    } 
    return 0;
}