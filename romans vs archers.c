#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

int x=10 , y=10;
/*#define x=0;*/
//int x = 0;
//int y = 0;
int x2 =0;
int y2 =0;
int funciones=0;
int length=5;
int vida = 2 ;
int puntaje = 0;
int escudo1 = 1;
int escudo2 = 40;
int escudo3 = 60;
int escudo4 = 80;
int escudo5 = 100;
int escudo6 = 120;
char dificulmode ='s';
int tope=1;
int play=3;
int seconds=0;
//#define row 0
//#define columns 0
int matrix[0][3];
#define SIZE 5

typedef struct {
	int dificultad;
    int vida;
	int puntaje;
	int escudo1; 
	int escudo2 ;
	int escudo3;
	int escudo4;
	int escudo5;
	int escudo6; 
} tGui;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
  void Gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 


void GUI()
{	
	int score;
	Gotoxy(102,2);
	
   	printf("Vida: %d", vida);
	
	Gotoxy(102,5);
	printf("puntaje %d", puntaje);
	
	Gotoxy(102,8);
	printf("escudo 1: %d", escudo1);
	
	Gotoxy(102,9);
	printf("escudo 2: %d", escudo2);
	
	Gotoxy(102,10);
	printf("escudo 3: %d", escudo3);
	
	Gotoxy(102,11);
	printf("escudo 4: %d", escudo4);
	
	Gotoxy(102,12);
	printf("escudo 5: %d", escudo5);
	
	Gotoxy(102,13);
	printf("escudo 6: %d", escudo6);
	
}


void Godos(int x, int y)
{
    x==x2;
    y==y2;
    GUI();
    if(x==x2&&y==y2)
    {
        length++;
        time_t a;
        a=time(0);
        srand(a);
        x2=rand()%67;
        if(x2<=1)
            x2+=1;
        y2=rand()%21;
        if(y2<=10)
            y2+=11;

        puntaje++;
    }
    else if(x2==0) //to create food for the first time coz global variable are initialized with 0
    {
        x2=rand()%67;
        if(x2<=1)
            x2+=1;
        y2=rand()%21;
        if(y2<=1)
            y2+=1;
    }

}

       
       
       
       
       
       
       

void borde(){
	 int row, columns;
	system("cls");
   char i;

      	Gotoxy(x2,y2+1);   
      	printf("0");
      	Gotoxy(x2,y2+2);  
      	printf("0");
   
	for (row=0; row<3; row++){
    for(columns=0; columns<1; columns++)
    {
    	Gotoxy(x2,y2); 
         printf("%d  ", matrix[row][columns]);
    }
    printf("\n");
}
       
   for(i=1;i<100;i++)
   {
       Gotoxy(i,1);
           printf("%c",205);
       Gotoxy(i,25);
           printf("%c",205);
   }
   for(i=1;i<25;i++)
   {
       Gotoxy(1,i);
           printf("%c",186);
       Gotoxy(100,i);
       printf("%c",186);
   }
    Gotoxy(1,1);
    printf ("%c",201);
    Gotoxy(1,25);
     printf ("%c",200);
    Gotoxy(100,1);
     printf ("%c",187);
    Gotoxy(100,25);
	 printf ("%c",188);
}

void disparogododerecha(){
	Gotoxy(x2,y2);
	char cursor,pancracio;
	while(cursor!=27)
	  {
	  	cursor=getch();

		Gotoxy(x2+1,y2);
		printf("------------");
		Gotoxy(x2+1,y2);
		printf("      ");
		Gotoxy(x2+1,y2+1);
		printf("------------");
		Gotoxy(x2+1,y2+1);
		printf("      ");
		Gotoxy(x2+1,y2+2);
		printf("------------");
		Gotoxy(x2+1,y2+2);
		printf("      ");
		
		Gotoxy(x2+5,y2);
		printf("-----------");
		Gotoxy(x2+5,y2);
		printf("  ");
		Gotoxy(x2+5,y2+1);
		printf("-----------");
		Gotoxy(x2+5,y2+1);
		printf("  ");
		Gotoxy(x2+5,y2+2);
		printf("-----------");
		Gotoxy(x2+5,y2+2);
		printf("  ");

		Gotoxy(x2+10,y2);
		printf("------------>");
		Gotoxy(x2+5,y2);
		printf("            ");
		Gotoxy(x2+10,y2+1);
		printf("------------>");
		Gotoxy(x2+5,y2+1);
		printf("            ");
		Gotoxy(x2+10,y2+2);
		printf("------------>");
		Gotoxy(x2+5,y2+2);
		printf("            ");
		
		
		break;
		
			
		}
		if (cursor=='o')
			cortinaded(x,y);
	
}

void disparogodoizquierda(int x,int y){
	

	Gotoxy(x2,y2);
	char cursor,pancracio;
	while(cursor!=27)
	  {
	  	cursor=getch();

	/*	Gotoxy(x2-1,y2);
		printf("------------");
		Gotoxy(x2-1,y2);
		printf(" ");
		Gotoxy(x2-1,y2+1);
		printf("------------");
		Gotoxy(x2-1,y2+1);
		printf(" ");
		Gotoxy(x2-1,y2+2);
		printf("------------");
		Gotoxy(x2-1,y2+2);
		printf("");*/
		
	/*	Gotoxy(x2-9,y2);
		printf("-----------");
		Gotoxy(x2-9,y2);
		printf("         ");
		Gotoxy(x2-9,y2+1);
		printf("-----------");
		Gotoxy(x2-9,y2+1);
		printf("         ");
		Gotoxy(x2-9,y2+2);
		printf("-----------");
		Gotoxy(x2-8,y2+2);
		printf("      ");*/

		Gotoxy(x2-30,y2);
		printf("<---------");
		Gotoxy(x2-15,y2);
	//	printf("          ");
		Gotoxy(x2-30,y2+1);
		printf("<---------");
		Gotoxy(x2-15,y2+1);
		//printf("           ");
		Gotoxy(x2-30,y2+2);
		printf("<---------");
		Gotoxy(x2-15,y2+2);
		printf("         ");
		break;
		
		
		}
		
		if (cursor=='o')
			cortinaded(x,y);
		
		
	
}

void spam(){
	system("cls");
	
	Gotoxy(50,10);
	printf("no puedes salir del borde");
	Sleep (1000);
	regados(x=10,y=10);
}

void spam2(){
	system("cls");
	Gotoxy(50,10);
	printf("no puedes salir del borde");
	Sleep (1000);
	formacion(x=10,y=10);
}

int cortinaded(int x, int y){
 
/* int x=25 , y=25;*/
    gotoxy(x,y);
	char cursor,pancracio;
	while(cursor!=27)
	  {
	  	cursor=getch();
	  	borde();
		Godos(x,y);
		escudo1--;
		escudo2--;
		escudo3--;
		escudo4--;
		escudo5--;
		escudo6--;
		
 		if(cursor=='o'){
		  x++;
	borde();
	Godos(x,y);
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("            X}");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("   X} X} X} X} ");
	gotoxy(x,y+4);
	printf("   X} X} X} X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("            X}");
	Sleep (500);
	borde();
	Godos(x,y);
	system("cls");
	borde();
	Godos(x,y);
	
		gotoxy(x,y);
	printf("         X} x}  ");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("      X} X} X} ");
	gotoxy(x,y+4);
	printf("      X} X} X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("         X} X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	Godos(x,y);
	borde();
	gotoxy(x,y);
	printf("      x} X} x}  ");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("         X} X} ");
	gotoxy(x,y+4);
	printf("         X} X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("      X} X} X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("   x} x} X} x}  ");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("            X} ");
	gotoxy(x,y+4);
	printf("            X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("   x} X} X} X} ");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    x} x} X} x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("              X} ");
	gotoxy(x,y+4);
	printf("              X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    x} X} X} X} ");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    x} X} x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("               X} ");
	gotoxy(x,y+4);
	printf("               X} ");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    X} X} X} ");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    X} x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("    x}         X} ");
	gotoxy(x,y+4);
	printf("    x}         X} ");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    X} X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("    x} x}      X} ");
	gotoxy(x,y+4);
	printf("    x} x}      X} ");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("    x} x} x}   X} ");
	gotoxy(x,y+3);
	printf("    x} x} x}   X} ");
	gotoxy(x,y+4);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("X X  X  X  X X}");
	gotoxy(x,y+1);
	printf("X} X  X  X  X X}");
	gotoxy(x,y+2);
	printf("   x} x} x} x} X} ");
	gotoxy(x,y+3);
	printf("   x} x} x} x} X} ");
	gotoxy(x,y+4);
	printf("X} X  X  X  X X}");
	gotoxy(x,y+5);
	printf("X X  X  X  X X}");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+1);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+2);
	printf("x} x} x} x} x} X} ");
	gotoxy(x,y+3);
	printf("x} x} x} x} x} X} ");
	gotoxy(x,y+4);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+5);
	printf("X  X  X  X  X  X}");
	Sleep (500);		
		   }
		
		if(escudo1<0)
		sinescudo1(x,y);
		else break;
			
		if(escudo2<0)
		sinescudo2(x,y);
		else break;
		
		if(escudo3<=0)
		sinescudo3(x,y);
		else break;
		
		if(escudo4<=0)
		sinescudo4(x,y);
		else break;
		
		if(escudo5<=0)
		sinescudo5(x,y);
		else break;
	
		if(escudo6<=0)
		sinescudo6(x,y);
		else break;
		
		if(escudo6==-2){
			vida--;
			muerte1(x,y);
			}
		else break;
		
		if(escudo6==-3){
			vida--;
			muerte2(x,y);
			}
		else break;
		
		if(escudo6==-4){
			vida--;
			muerte3(x,y);
			}
		else break;
		
		if(escudo6==-5){
			vida--;
			muerte4(x,y);
			}
		else break;
		
		if(escudo6==-5){
			vida--;
			muerte5(x,y);
			}
		else break;
		
		if(escudo6==-5){
			vida--;
			muerte6(x,y);
			}
		else break;
		
		
		break;
}
	return 0;
}

int cortina(int x, int y){
 
/* int x=25 , y=25;*/
    gotoxy(x,y);
	char cursor,pancracio;
	while(cursor!=27)
	  {
	  	cursor=getch();
	  	borde();
		Godos(x,y);
 		if(cursor=='o'){
		  x++;
	borde();
	Godos(x,y);
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("            X}");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("   X} X} X} X} ");
	gotoxy(x,y+4);
	printf("   X} X} X} X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("            X}");
	Sleep (500);
	borde();
	Godos(x,y);
	system("cls");
	borde();
	Godos(x,y);
	
		gotoxy(x,y);
	printf("         X} x}  ");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("      X} X} X} ");
	gotoxy(x,y+4);
	printf("      X} X} X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("         X} X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	Godos(x,y);
	borde();
	gotoxy(x,y);
	printf("      x} X} x}  ");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("         X} X} ");
	gotoxy(x,y+4);
	printf("         X} X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("      X} X} X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("   x} x} X} x}  ");
	gotoxy(x,y+1);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("            X} ");
	gotoxy(x,y+4);
	printf("            X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("   x} X} X} X} ");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    x} x} X} x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("              X} ");
	gotoxy(x,y+4);
	printf("              X} ");
	gotoxy(x,y+5);
	printf("X  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    x} X} X} X} ");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    x} X} x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("               X} ");
	gotoxy(x,y+4);
	printf("               X} ");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    X} X} X} ");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    X} x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("    x}         X} ");
	gotoxy(x,y+4);
	printf("    x}         X} ");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    X} X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("    x}  ");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+3);
	printf("    x} x}      X} ");
	gotoxy(x,y+4);
	printf("    x} x}      X} ");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+6);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+7);
	printf("    X} ");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+1);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+2);
	printf("    x} x} x}   X} ");
	gotoxy(x,y+3);
	printf("    x} x} x}   X} ");
	gotoxy(x,y+4);
	printf("X}  X  X  X  X X}");
	gotoxy(x,y+5);
	printf("X}  X  X  X  X X}");
	Sleep (500);
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("X X  X  X  X X}");
	gotoxy(x,y+1);
	printf("X} X  X  X  X X}");
	gotoxy(x,y+2);
	printf("   x} x} x} x} X} ");
	gotoxy(x,y+3);
	printf("   x} x} x} x} X} ");
	gotoxy(x,y+4);
	printf("X} X  X  X  X X}");
	gotoxy(x,y+5);
	printf("X X  X  X  X X}");
	Sleep (500);	
	borde();
	Godos(x,y);
	
	system("cls");
	borde();
	Godos(x,y);
	gotoxy(x,y);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+1);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+2);
	printf("x} x} x} x} x} X} ");
	gotoxy(x,y+3);
	printf("x} x} x} x} x} X} ");
	gotoxy(x,y+4);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+5);
	printf("X  X  X  X  X  X}");
	Sleep (500);		
		   }
					
	if (cursor=='i')
		formacion(x,y);		
			 	

	break;
}
	return 0;
}

 /*formacion*/
 int formacion(int x, int y){
 
 	Sleep(1);
    gotoxy(x,y);
	char cursor;
	while(cursor!=27)
	  {	
	  
	  	cursor=getch();
		borde();
		Godos(x,y);
 		if(cursor=='a'){
		  x--;
	//system("cls");
	gotoxy(x,y);  
	printf("{X  X  X  X  X  X");
	gotoxy(x,y+1);
	printf("{X  X  X  X  X  X");
	gotoxy(x,y+2);
	printf("{X  X  X  X  X  X");
	gotoxy(x,y+3);
	printf("{X  X  X  X  X  X");
	gotoxy(x,y+4);
	printf("{X  X  X  X  X  X");
	gotoxy(x,y+5);
	printf("{X  X  X  X  X  X");
	Sleep (1);
		   }
	  	if(cursor=='d'){
		  x++;
		 //  system("cls");
	gotoxy(x,y); 
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+1);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+2);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+3);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+4);
	printf("X  X  X  X  X  X}");
	gotoxy(x,y+5);
	printf("X  X  X  X  X  X}");
	Sleep (1);
		   }
	  	if(cursor=='w'){
	  		Sleep(1);
		  y--;
	//system("cls");
	gotoxy(x,y); 
	printf("Z  Z  Z  Z  Z  Z");
	gotoxy(x,y+1);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+2);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+3);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+4);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+5);
	printf("X  X  X  X  X  X");
	Sleep (1);
		  }
	  	if(cursor=='s'){
	  		Sleep(1);
		  y++;
	///system("cls");
	gotoxy(x,y); 
	printf("X  X  X  X  X  X");
	gotoxy(x,y+1);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+2);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+3);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+4);
	printf("X  X  X  X  X  X");
	gotoxy(x,y+5);
	printf("Z  Z  Z  Z  Z  Z");
	Sleep (1);
		  }
		
		if (cursor =='i'){
			regados();
		}
		if (cursor=='o'){
		
			system("cls");
			cortina(x,y);
		}
		
		if (x==x2||y==y2)
			Godos(x,y);
			
	//tope de borde
		if(x==84||y==21||x==0||y==0){
			
			tope--;
		
			if(tope<=0)
			{
				spam2();
			}
		}
		
		if(cursor=='n')
		disparogodoizquierda(x,y);
		else if (cursor=='m')
		disparogododerecha(x,y);	
			
	}

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 1 /////////////////////////////////////////////////////////
//sin escudo personaje 1 
// sin escudo primer personaje 
//fila 1 

int sinescudo1(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf(" X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X ");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("   Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("   Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();

            }
			
        }    
           if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y); 
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//sin escudo personaje 2
//fila 1 

int sinescudo1_2(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z     Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z     Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//sin escudo personaje 3
//fila 1 

int sinescudo1_3(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z     Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z     Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//sin escudo personaje 4
//fila 1 

int sinescudo1_4(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z     Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z     Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//sin escudo personaje 5
//fila

int sinescudo1_5(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z     Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z     Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//sin escudo personaje 6
//fila 1 


int sinescudo1_6(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X ");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z   ");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z   ");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}


/////////////////////////////////////////////////////////////////////////////   fila 2 /////////////////////////////////////////////////////////
//sin escudo personaje 1
//fila 2

int sinescudo2(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf(" X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X ");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}


/////////////////////////////////////////////////////////////////////////////   fila 3 /////////////////////////////////////////////////////////
//sin escudo personaje 1
//fila 3

int sinescudo3(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf(" X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X ");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 4 /////////////////////////////////////////////////////////
//sin escudo personaje 1
//fila 4

int sinescudo4(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf(" X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X ");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 5 /////////////////////////////////////////////////////////
//sin escudo personaje 1
//fila 5

int sinescudo5(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf(" X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X ");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
		if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
            
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 6 /////////////////////////////////////////////////////////
//sin escudo personaje 1
//fila 6

int sinescudo6(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf(" X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X ");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("   Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}


/////////////////////////////////////////////////////////////////////////////   fila 1 /////////////////////////////////////////////////////////
// personaje 1
//muerte de personaje
//fila 1 

int muerte1(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("    X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X    ");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("   Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("   X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("   X  X  X  X  X");
    gotoxy(x,y+5);
    printf("   Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
// personaje 2 muerte 
//muerte 2 
//fila 1 

int muerte1_2(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X     X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X     X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z     Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X     X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X     X  X  X  X");
    gotoxy(x,y+5);
    printf("Z     Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
          if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);  
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//personaje 3 muerte 
//fila 1 

int muerte1_3(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X     X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X     X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z     Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X     X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X     X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z     Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
// personaje 4 muerte 
//fila 1 

int muerte1_4(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X     X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X     X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z     Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X     X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X     X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z     Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
           if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y); 
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//personaje 5 muerte 
//fila

int muerte1_5(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X     X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X     X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z     Z");
    gotoxy(x,y+1);
    printf("X  X  X  X     X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X     X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z     Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
         if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);   
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////
//personaje 6 muerte 
//fila 1 


int muerte1_6(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X   ");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X    ");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z   ");
    gotoxy(x,y+1);
    printf("X  X  X  X  X   ");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X   ");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z   ");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 2 /////////////////////////////////////////////////////////
//personaje 1 muerte 
//fila 2

int muerte2(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("    X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X    ");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("   X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X   ");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
         if(cursor=='n')
                  disparogodoizquierda(x,y);
                  else if (cursor=='m')
                  disparogododerecha(x,y);   
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 3 /////////////////////////////////////////////////////////
//personaje 1 muerte 
//fila 3

int muerte3(int x, int y){

 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("    X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X    ");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("   X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X   ");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
             
            
            
        }    
             if(cursor=='n')
                  disparogodoizquierda(x,y);
                  else if (cursor=='m')
                  disparogododerecha(x,y); 
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 4 /////////////////////////////////////////////////////////
// personaje 1 muerte 
//fila 4

int muerte4(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("    X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X    ");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("   X  X  X  X  X");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X   ");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
                    disparogodoizquierda(x,y);
                    else if (cursor=='m')
                    disparogododerecha(x,y);
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 5 /////////////////////////////////////////////////////////
// personaje 1 muerte 
//fila 5

int muerte5(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("    X  X  X  X  X");
    gotoxy(x,y+5);
    printf("{X  X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X    ");
    gotoxy(x,y+5);
    printf("X  X  X  X  X  X}");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("   X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X   ");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("Z  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
           if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y); 
    }

return 0;
}

/////////////////////////////////////////////////////////////////////////////   fila 6 /////////////////////////////////////////////////////////
//personaje 1 muerte 
//fila 6

int muerte6(int x, int y){
 
     Sleep(1);
    gotoxy(x,y);
    char cursor;
    while(cursor!=27)
      {    
      
          cursor=getch();
        borde();
        Godos(x,y);
         if(cursor=='a'){
          x--;
    //system("cls");
    gotoxy(x,y);  
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("{X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("    X  X  X  X  X");
    Sleep (1);
           }
          if(cursor=='d'){
          x++;
         //  system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X}");
    gotoxy(x,y+5);
    printf("X  X  X  X  X    ");
    Sleep (1);
           }
          if(cursor=='w'){
              Sleep(1);
          y--;
    //system("cls");
    gotoxy(x,y); 
    printf("Z  Z  Z  Z  Z  Z");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("   X  X  X  X  X");
    Sleep (1);
          }
          if(cursor=='s'){
              Sleep(1);
          y++;
    ///system("cls");
    gotoxy(x,y); 
    printf("X  X  X  X  X  X");
    gotoxy(x,y+1);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+2);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+3);
    printf("X  X  X  X  X  X");
    gotoxy(x,y+4);
    printf("  X  X  X  X  X");
    gotoxy(x,y+5);
    printf("  Z  Z  Z  Z  Z");
    Sleep (1);
          }
        if (cursor=='o'){
        
            system("cls");
            cortina(x,y);
        }
        
        if (x==x2||y==y2)
            Godos(x,y);
            
    //tope de borde
        if(x==84||y==21||x==0||y==0){
            
            tope--;
        
            if(tope<=0)
            {
                spam2();
            }
        }    
            if(cursor=='n')
        disparogodoizquierda(x,y);
        else if (cursor=='m')
        disparogododerecha(x,y);
    }

return 0;
}


 /*regados */
int regados() {
    gotoxy(x,y);
	char cursor;
	int pancracio=6;
	while(cursor!=27)
	  {
	  	
	  	cursor=getch();
	  	borde();
	  	Godos(x,y);
	  	Godos(x+11,y+25);
	  	
	  	if(cursor=='a'){
		  x--;
		//system("cls");
	gotoxy(x,y);
	printf(" ");  
	printf("X} X}    X}  X}   X} X}");
	gotoxy(x,y+1);
	printf(" ");
	printf("    X} X}   X} X}   X}   X}");
	gotoxy(x,y+2);
	printf(" ");
	printf("      X} X}  X}   X} X}  X}");
	gotoxy(x,y+3);
	printf(" ");
	printf("    X} X}   X}  X}   X}   X}");
	gotoxy(x,y+4);
	printf(" ");
	printf("  X} X}   X}  X}   X}   X}");
	gotoxy(x,y+5);
	printf(" ");
	printf("     X} X}   X}   X}   X}   X}");
	Sleep (2);
		   }
	  	if(cursor=='d'){
		  x++;
		   //system("cls");

	gotoxy(x,y); 
	printf(" ");
	printf("X}     X}    X}   X}   X} X}");
	gotoxy(x,y+1);
	printf(" ");
	printf("   X}    X}    X}    X} X}   X}");
	gotoxy(x,y+2);
	printf(" ");
	printf("X}   X}   X}    X}   X} X");
	gotoxy(x,y+3);
	printf(" ");
	printf("    X}    X}    X}    X}    X}  X}");
	gotoxy(x,y+4);
	printf(" ");
	printf("  X}X}     X}    X}    X}    X}");
	gotoxy(x,y+5);
	printf(" ");
	printf("X}     X}    X}    X}     X}  X}");
	Sleep (1);
		   }
	  	if(cursor=='w'){
	  		Sleep(1);
		  y--;
	//system("cls");
	gotoxy(x,y);
	printf(" X}     X    X     X    X      X}");
	gotoxy(x,y+1);
	printf("   X}      X     X    X   X    X}");
	gotoxy(x,y+2);
	printf(" X}    X  X     X    X   X}");
	gotoxy(x,y+3);
	printf("   X}     X    X    X    X  X}");
	gotoxy(x,y+4);
	printf("   X}     X    X    X    X  X}");
	gotoxy(x,y+5);
	printf("   X}   X     X  X    X    X}");
	Sleep (1);
		  }
	  	if(cursor=='s'){
	  		Sleep(1);
		  y++;
	//system("cls");
	gotoxy(x,y);
	printf(" "); 
	printf(" {X    X      X     X    X    X}");
	gotoxy(x,y+1);
	printf(" ");
	printf("  {X     X     X   X    X    X}");
	gotoxy(x,y+2);
	printf(" ");
	printf("   {X    X    X    X  X  X}");
	gotoxy(x,y+3);
	printf(" ");
	printf(" {X  X    X   X    X  X}");
	gotoxy(x,y+4);
	printf(" ");
	printf("  {X    X  X  X  X   X}");
	gotoxy(x,y+5);
	printf(" ");
	printf(" {X  X  X     X  X    X}");
	Sleep (2);
		  }
	  	
	/*godos(x,y);*/
		if (cursor=='i')
			formacion(x,y);

	
	if (x==x2||y==y2)
		Godos(x,y);
	//tope de borde
	if(x==67||y==21||x==0||y==0){
		
		tope--;
		
		if(tope<=0)
		{
			spam();
		}
	}
			
	if(cursor=='n')
		disparogodoizquierda(x,y);
	else if (cursor=='m')
		disparogododerecha(x,y);
	}
	
return 0;
}


void onichan(){
			system("cls");
			gotoxy(10,11);
            printf(" ----------------- \n");
            gotoxy(10,12);
            printf(" | Instrucciones | \n");
            gotoxy(10,13);
            printf(" ----------------- \n");
            printf("Los romanos son el grupo de personas que controla el jugador, el objetivo del jugador es acabar con los Godos (enemigos de los romanos) \n");
            printf("acercandose a ellos porque los romanos se centran en combate de cuerpo a cuerpo.\n");
            printf("para movilizar a los personajes se utilizan las teclas 'W, A, S, D'. \n");
            printf("para realizar la formacion tortuga se utiliza la tecla 'i'\n");
            printf("y para realizar la formacion de cortina se utiliza la letra 'o'\n");
			printf("presiona una tecla para continuar\n");
			
			getch();
			system("cls");
			regados();
		
	
}

void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}



void guardar()
{
    FILE *arch;
    arch=fopen("saves.txt","a");
    if (arch==NULL)
        exit(1);
    tGui Gui;
    system("cls");
    printf("ingresa la vida con la que quedaste: ");
    scanf("%i",&Gui.vida);
    fflush(stdin);
    printf("ingresa el puntaje con el que quedaste: ");
    scanf("%i",&Gui.puntaje);
    fflush(stdin);
	printf("Ingresa la vida del escudo 1: ");
    scanf("%i",&Gui.escudo1);
    fflush(stdin);
    printf("Ingresa la vida del escudo 2: ");
    scanf("%i",&Gui.escudo2);
    fflush(stdin);
    printf("Ingresa la vida del escudo 3: ");
    scanf("%i",&Gui.escudo3);
    fflush(stdin);
    printf("Ingresa la vida del escudo 4: ");
    scanf("%i",&Gui.escudo4);
    fflush(stdin);
    printf("Ingresa la vida del escudo 5: ");
    scanf("%i",&Gui.escudo5);
    fflush(stdin);
    printf("Ingresa la vida del escudo 6: ");
    scanf("%i",&Gui.escudo6);
    fflush(stdin);
    fwrite(&Gui, sizeof(tGui), 1, arch);
    fclose(arch);
    continuar();
    
}
	
void crear()
{
    FILE *arch;
    arch=fopen("saves.txt","w");
    if (arch==NULL)
        exit(1);
    fclose(arch);
    guardar();
}

void listado()
{
    FILE *arch;
    arch=fopen("saves.txt","r");
    if (arch==NULL)
        exit(1);
    tGui Gui;
    fread(&Gui, sizeof(tGui), 1, arch);
    while(!feof(arch))
    {	
    	system("cls");
        printf(" Vida: %i\n Puntaje: %i\n Escudo 1: %i\n Escudo 2: %i\n Escudo 3: %i\n Escudo 4: %i\n Escudo 5: %i\n Escudo 6: %i\n ", Gui.vida, Gui.puntaje, Gui.escudo1, Gui.escudo2, Gui.escudo3, Gui.escudo4, Gui.escudo5, Gui.escudo6);
        Gui.vida=vida;
        puntaje==Gui.puntaje;
        Gui.escudo1=escudo1;
        Gui.escudo2=escudo2;
        Gui.escudo3=escudo3;
        Gui.escudo4=escudo4;
        Gui.escudo5=escudo5;
        Gui.escudo6=escudo6;

        fread(&Gui, sizeof(tGui), 1, arch);


    }
    fclose(arch);

    continuar();
}


 int main()
{		

	int pancracio;
	do {
		system("cls");
		gotoxy(10,11);
    	printf(" -------------------------------------- \n");
		gotoxy(10,12);
    	printf(" > Presione la tecla '1' para iniciar < \n");
		gotoxy(10,13);
    	printf(" -------------------------------------- \n");
		gotoxy(10,14);
    	printf(" --------------------------------------------- \n");
		gotoxy(10,15);
        printf(" > presione el numero 2 para guardar < \n");
		gotoxy(10,16);
        printf(" --------------------------------------------- \n");
		gotoxy(10,17);
    	printf(" --------------------------------------------- \n");
		gotoxy(10,18);
        printf(" > presione el numero 3 para cargar partida < \n");
		gotoxy(10,19);
        printf(" --------------------------------------------- \n");
    	gotoxy(10,20);    
        printf(" --------------------------------------------- \n");
		gotoxy(10,21);
        printf(" > presione el numero 4 para salir < \n");
		gotoxy(10,22);
        printf(" --------------------------------------------- \n");
		gotoxy(10,23);
        printf(" indica la opcion \n");
		scanf("%i", &pancracio);
		switch(pancracio){
			case 1:onichan();
					break;
			case 2:crear();
					break;
			case 3:listado();
					break;
		
			}
			
			
			
		}while(pancracio!=4);
	
	return 0;
}




//revisar borde y el godo movimiento el system cls borra el borde componer 