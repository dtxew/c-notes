#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
void menu();
void make_board(char board[ROWS][COLS], int rows, int cols, char set);
void display_board(char board[ROWS][COLS], int rows, int cols);
void set_mine(char board[ROWS][COLS], int row, int col);
void find_mine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
int count_mine(char mine[ROWS][COLS], int x, int y);
void open_board(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y);
int flag(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
