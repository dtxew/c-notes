#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#define ROW 3
#define COL 3
void menu();
void make_board(char board[ROW][COL], int row, int col);
void display_board(char board[ROW][COL], int row, int col);
void player_move(char board[ROW][COL], int row, int col);
void computer_move(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
int isdraw(char board[ROW][COL], int row, int col);
