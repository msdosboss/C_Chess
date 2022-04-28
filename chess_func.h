#if !defined CHESS_FUNC
int *getmove(void);
int *makemove(char,char);
void printboard(int[][8]);
int pawn(int[][8], int*, int);
int knight(int[][8], int*, int);
int bishop(int[][8], int*, int);
int rook(int[][8], int*, int);
int queen(int[][8], int*, int);
int king(int[][8], int*, int);
char *givecords(int *);
int ischeck(int[][8],int*,int);
int ischeckmate(int[][8],int);
int ispawncheck(int[][8],int*,int*,int);
int isknightcheck(int[][8],int*,int*);
int isbishopcheck(int[][8],int*,int*,int);
int isqueencheck(int[][8],int*,int*,int);



#endif
#define CHESS_FUNC 1