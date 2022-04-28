#include "chess_func.h"
#include "j_system.h" 


int main(){
    system("color 0a");                                             //should be comment out for non windows machine

    int color = 0;                                                  // 0 = white and 1 = black
    int end = 0;                                                    // 0 means games still going, 1 means white wins, -1 means black wins
    int *squarecord1;
    int board[8][8] =
    {
        {50,20,30,90,100,30,20,50},                                          // 50 = white rook, 20 = white knight, 30 = white bishop, 90 = white queen, 100 = white king, 10 = white pawn, 51 = black rook, 21 = black knight, 31 = black bishop, 91 = black queen, 101 = black king, 11 = black pawn
        {10,10,10,10,10,10,10,10},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,50,0,0,0},
        {0,0,0,0,0,0,0,0},
        {11,11,11,11,11,11,11,11},
        {51,21,31,91,101,31,21,51},
    };

    squarecord1 = (int *) malloc(5);
    while(end == 0){
        //printf("---%d---",ischeck(board,getmove(),color));
        printboard(board);
        if(!color){
            printf("\nyou are white");
        }
        else{
            printf("\nyou are black");
        }
        squarecord1 = getmove();
        printf("--%d--",board[*(1+squarecord1)][*squarecord1]);
        if(board[*(1+squarecord1)][*squarecord1] > 0){
            switch(board[*(1+squarecord1)][*squarecord1]){
                case 10:
                    if(!color){
                        pawn(board,squarecord1,color);
                        break;
                    }
                    else{
                        printf("that is a white pawn");
                        break;
                    }
                case 11:
                    if(color){
                    pawn(board,squarecord1,color);
                    break;
                    }
                    else{
                        printf("that is a black pawn");
                        break;
                    }
                case 20:
                    if(!color){
                        knight(board,squarecord1,color);
                        break;
                    }
                    else{
                        printf("that is a white knight");
                        break;
                    }
                case 21:
                    if(color){
                        knight(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a black knight");
                        break;
                    }
                case 30:
                    if(!color){
                        bishop(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a white bishop");
                        break;
                    }
                case 31:
                    if(color){
                        bishop(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a black bishop");
                        break;
                    }
                case 50:
                    if(!color){
                        rook(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a white rook");
                        break;
                    }
                case 51:
                    if(color){
                        rook(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a black rook");
                        break;
                    }
                case 90:
                    if(!color){
                        queen(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a white queen");
                        break;
                    }
                case 91:
                    if(color){
                        queen(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a black queen");
                        break;
                    }
                case 100:
                    if(!color){
                        king(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a white king");
                        break;
                    }
                case 101:
                    if(color){
                        king(board, squarecord1, color);
                        break;
                    }
                    else{
                        printf("that is a black king");
                        break;
                    }
            }
        }
        else{
            printf("that square does not have a piece on it");
        }
        color = (color == 0) ? (1) : (0);
    }
}


