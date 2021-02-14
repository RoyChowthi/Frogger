#include "LPC17xx.H"
#include "GLCD.h"
#include "GLCD_UTILS.h"
#include "uart.h"

extern volatile uint32_t UART0_Count;
extern volatile uint8_t UART0_Buffer[BUFSIZE];

void drawsquare(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(2.53*width); x < cx+(2.53*width); x++)
			{
				for(y = cy-width/3.4; y < cy+width/3.4; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
	
}

void drawsquare1(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.3*width); x < cx+(.3*width); x++)
			{
				for(y = cy-width/3.3; y < cy+width/3.3; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
	
}

void bigboisquare(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.71*width); x < cx+(.71*width); x++)
			{
				for(y = cy-(width/.43); y < cy+(width/.43); y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}
void frogsquare(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.3*width); x < cx+(.3*width); x++)
			{
				for(y = cy-width/3.4; y < cy+width/3.4; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
	
}

void cars(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.4*width); x < cx+(.4*width); x++)
			{
				for(y = cy-width/3.3; y < cy+width/3.3; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}
void trucks(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.7*width); x < cx+(.7*width); x++)
			{
				for(y = cy-width/3.3; y < cy+width/3.3; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}

void logs(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.7*width); x < cx+(.7*width); x++)
			{
				for(y = cy-width/3.0; y < cy+width/3.0; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}

	void biglogs(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(2*width); x < cx+(2*width); x++)
			{
				for(y = cy-width/2.2; y < cy+width/2.2; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}
	
void bigturtle(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(width); x < cx+(width); x++)
			{
				for(y = cy-width/3.0; y < cy+width/3.0; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}
void smallturtles(int cx, int cy, int width, unsigned short color) {
	int x;
	int y;
	int a;
	int b;
	
	GLCD_SetTextColor(color);
	for(x = cx-(.4*width); x < cx+(.4*width); x++)
			{
				for(y = cy-width/3.0; y < cy+width/3.0; y++)
				{
					GLCD_PutPixel(x,y);
		
				}
			}
		}
int collision(int frogposx,int frogposy, int width, int vehiclepositionx,int vehiclepositiony){
	int x;
	int y;
				for(x = frogposx-(.2*width); x < frogposx+(.2*width); x++)
						{
						for(y = frogposy-width/3.5; y < frogposy+width/3.5; y++)
							{
							if(x == vehiclepositionx && y == vehiclepositiony)
								{
									return 1;
		
						}
				}
			}
		}

int collision2(int frogposx,int frogposy, int width, int vehiclepositionx,int vehiclepositiony){
	int x;
	int y;
				for(x = frogposx-(.3*width); x < frogposx+(.3*width); x++)
						{
						for(y = frogposy-width/3.3; y < frogposy+width/3.3; y++)
							{
							if(x == vehiclepositionx && y == vehiclepositiony)
								{
									return 1;
		
						}
				}
			}
		}	
		
		
		
int main() {
		int x;
		int y;
		int cx = 200;
		int cy = 15;
		int vx = 1;
		int vy = 2;
	  int ax = 200;
		int ay = 130;
		int bx = 88;
		int by = 220;
		int bx2 = 140;
		int by2 = 220;
		int bx3 = 190;
		int by3 = 220;
		int bx4 = 244;
		int by4 = 220;
		int bx5 = 305;
		int by5 = 220;
		int dx = 200;
		int dy = 190;
		int fx = 200;
		int fy = 160;
		int gx = 200;
		int gy = 150;
		int hx = 38;
		int hy = 118;
		int frogposx = 190;
		int frogposy = 10;
		int car1x = 220;
		int car1y = 40;
		int car2x = 90;
		int car2y = 40;
		int car3x = 160;
		int car3y = 40;
		int car4x = 280;
		int car4y = 40;
		int car5x = 280;
		int car5y = 68;
		int car6x = 190;
		int car6y = 68;
		int car7x = 100;
		int car7y = 68;
		int car8x = 130;
		int car8y = 100;
		int car9x = 200;
		int car9y = 100;
		int car10x = 270;
		int car10y = 100;
		int truck1x = 170;
		int truck1y = 55;
		int truck2x = 290;
		int truck2y = 55;
		int truck3x = 130;
		int truck3y = 84;
		int truck4x = 200;
		int truck4y = 84;
		int truck5x = 270;
		int truck5y = 84;
		int log1x = 130;
		int log1y = 163;
		int log2x = 250;
		int log2y = 163;
		int log3x = 250;
		int log3y = 177;
		int log4x = 130;
		int log4y = 177;
		int log5x = 270;
		int log5y = 200;
		int log6x = 200;
		int log6y = 200;
		int log7x = 130;
		int log7y = 200;
		int width = 50;
		int turtle1x = 200;
		int turtle1y = 152;
		int turtle2x = 120;
		int turtle2y = 152;
		int turtle3x = 280;
		int turtle3y = 152;
		int turtle4x = 90;
		int turtle4y = 190;
		int turtle5x = 150;
		int turtle5y = 190;
		int turtle6x = 200;
		int turtle6y = 190;
		int turtle7x = 260;
		int turtle7y = 190;
		int up = (1<<28);
		int down = (1<<27);
		int left =(1<<29);
		int right =(1<<26);
		int lives = 4;
		int homes = 0;
		
		UARTInit(0, 57600);
		GLCD_Init();               //Initializes the LCD display
    GLCD_Clear(Black);         //Clear display and set background color to black
    GLCD_SetTextColor(White);   //Pixels will be drawn in blue
  
		drawsquare(dx, dy, width, Blue);
		drawsquare(fx, fy, width, Blue);
		bigboisquare(hx, hy, width, LightGrey);
		drawsquare(cx, by5, width, Yellow);
		drawsquare(cx, by5, width, Yellow);
		drawsquare1(bx, by, width/1.2, Red);
		drawsquare1(bx2, by2, width/1.2, Red);
		drawsquare1(bx3, by3, width/1.2, Red);
		drawsquare1(bx4, by4, width/1.2, Red);
		drawsquare1(bx5, by4, width/1.2, Red);
	
    while(1) { 			//An infinite loop is needed or else the program will just exit
			
			int k;
			int mode = 0;
			if(lives == 4)
			{
				GLCD_DisplayString(0,0,"IIII");
			}
			if(lives == 3)
			{
				GLCD_DisplayString(0,0,"III");
			}
			if(lives == 2)
			{
				GLCD_DisplayString(0,0,"II");
			}
			if(lives == 1)
			{
				GLCD_DisplayString(0,0,"I");
			}
			if(lives == 0)
			{
				GLCD_DisplayString(0,0,"0");
			}
			if(lives == 0)
			{
				GLCD_DisplayString(100,200,"J35O7");
				//J3uuim
			}
			if(homes == 5)
			{
				GLCD_DisplayString(100,200,"J3uuim");
			}
			
			drawsquare(cx, cy, width, Purple);
			drawsquare(ax, ay, width, Purple);
			frogsquare(frogposx, frogposy, width/4, Green);
			frogsquare(frogposx, frogposy+2, width/6, Green);
			frogsquare(frogposx+5, frogposy+2, width/16, Green);
			frogsquare(frogposx-5, frogposy+2, width/16, Green);
			frogsquare(frogposx+5, frogposy-2, width/16, Green);
			frogsquare(frogposx-5, frogposy-2, width/16, Green);
			//WASD to move
			if ( UART0_Count != 0 ) 
				{
						char char_from_pc = UART0_Buffer[0];						
						UARTSend( 0, (uint8_t *)UART0_Buffer, UART0_Count);
						UART0_Count = 0;
						if(char_from_pc == 'd')
						{
							
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposx = frogposx - 14;
							
						}
						if(char_from_pc == 'a')
						{
							
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposx = frogposx + 14;
							
						}
						if(char_from_pc == 'w')
						{
							
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = frogposy + 14;
							
						}
						if(char_from_pc == 's')
						{
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = frogposy - 14;
							
						}
						//SPELL KEVIN in UART TO WIN
						if(char_from_pc == 'k')
						{
			
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = 205;
							frogposx = 93;
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							
							
						}
						if(char_from_pc == 'e')
						{
			
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = 205;
							frogposx = bx2;
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							
							
						}
						if(char_from_pc == 'v')
						{
			
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = 205;
							frogposx = bx3;
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							
							
						}
						if(char_from_pc == 'i')
						{
			
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = 205;
							frogposx = bx4;
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							
							
						}
						if(char_from_pc == 'n')
						{
			
							frogsquare(frogposx, frogposy, width/2, Black);
							frogposy = 205;
							frogposx = bx5;
							frogsquare(frogposx, frogposy, width/4, Green);
							frogsquare(frogposx, frogposy+2, width/6, Green);
							frogsquare(frogposx+5, frogposy+2, width/16, Green);
							frogsquare(frogposx-5, frogposy+2, width/16, Green);
							frogsquare(frogposx+5, frogposy-2, width/16, Green);
							frogsquare(frogposx-5, frogposy-2, width/16, Green);
							
							
						}
					
					
			}
	
			 
			
			if((LPC_GPIO1 ->FIOPIN & up) == 0)
			{
				frogposy = frogposy + 14;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
				frogsquare(frogposx, frogposy-width/3.3, width/2, Black);
			}
			if((LPC_GPIO1 ->FIOPIN & down) == 0)
			{
				frogposy = frogposy - 14;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
				frogsquare(frogposx, frogposy+width/3.3, width/2, Black);
			}
			if((LPC_GPIO1 ->FIOPIN & left) == 0)
			{
				frogposx = frogposx + 14;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
				frogsquare(frogposx-(.3*width), frogposy, width/2, Black);
			}
			if((LPC_GPIO1 ->FIOPIN & right) == 0)
			{
				frogposx = frogposx - 14;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
				frogsquare(frogposx+(.3*width), frogposy, width/2, Black);
			}
			
			
			cars(car1x, car1y, width/3, White);
			cars(car1x+(.27*width), car1y, width/3, Black);
			cars(car2x, car2y, width/3, White);
			cars(car2x+(.27*width), car2y, width/3, Black);
			cars(car3x, car2y, width/3, White);
			cars(car3x+(.27*width), car2y, width/3, Black);
			cars(car4x, car4y, width/3, White);
			cars(car4x+(.27*width), car4y, width/3, Black);
			trucks(truck1x, truck1y, width/3, White);
			trucks(truck1x-(.4*width), truck1y, width/3, Black);
			trucks(truck2x, truck2y, width/3, White);
			trucks(truck2x-(.4*width), truck2y, width/3, Black);
			trucks(truck3x, truck3y, width/3, White);
			trucks(truck3x-(.4*width), truck3y, width/3, Black);
			trucks(truck4x, truck4y, width/3, White);
			trucks(truck4x-(.4*width), truck4y, width/3, Black);
			trucks(truck5x, truck5y, width/3, White);
			trucks(truck5x-(.4*width), truck5y, width/3, Black);	
			cars(car5x, car5y, width/3, White);
			cars(car5x+(.27*width), car5y, width/3, Black);
			cars(car6x, car6y, width/3, White);
			cars(car6x+(.27*width), car6y, width/3, Black);
			cars(car7x, car7y, width/3, White);
			cars(car7x+(.27*width), car7y, width/3, Black);
			cars(car8x, car8y, width/3, White);
			cars(car8x+(.27*width), car8y, width/3, Black);
			cars(car9x, car9y, width/3, White);
			cars(car9x+(.27*width), car9y, width/3, Black);
			cars(car10x, car10y, width/3, White);
			cars(car10x+(.27*width), car10y, width/3, Black);
			logs(log1x, log1y, width/3, Brown);
			logs(log1x + (.6*width), log1y, width/3, Blue);
			logs(log2x, log2y, width/3, Brown);
			logs(log2x +(.6*width), log1y, width/3, Blue);
			logs(log5x, log5y, width/3, Brown);
			logs(log5x+(.6*width), log5y, width/3, Blue);
			logs(log6x, log6y, width/3, Brown);
			logs(log6x+(.6*width), log6y, width/3, Blue);
			logs(log7x, log7y, width/3, Brown);
			logs(log7x+(.6*width), log7y, width/3, Blue);
			bigturtle(turtle1x, turtle1y, width/3, Orange);
			bigturtle(turtle1x -(.4*width), turtle1y, width/3, Blue);
			bigturtle(turtle2x, turtle2y, width/3, Orange);
			bigturtle(turtle2x-(.4*width), turtle1y, width/3, Blue);
			bigturtle(turtle3x, turtle3y, width/3, Orange);
			bigturtle(turtle3x-(.4*width), turtle1y, width/3, Blue);
			smallturtles(turtle4x,turtle4y, width/3, Orange);
			smallturtles(turtle4x-(.3*width),turtle4y, width/3, Blue);
			smallturtles(turtle5x,turtle5y,width/3, Orange);
			smallturtles(turtle5x-(.3*width),turtle4y, width/3, Blue);
			smallturtles(turtle6x,turtle6y,width/3, Orange);
			smallturtles(turtle6x-(.3*width),turtle4y, width/3, Blue);
			smallturtles(turtle7x,turtle7y,width/3, Orange);
			smallturtles(turtle7x-(.3*width),turtle4y, width/3, Blue);
			biglogs(log3x, log3y, width/3, Brown);
			biglogs(log3x-width, log3y, width/3, Blue);
			biglogs(log4x, log4y, width/3, Brown);
			biglogs(log4x-width, log3y, width/3, Blue);
			bigboisquare(hx, hy, width, LightGrey);
			bigboisquare(hx, hy, width, LightGrey);

			//first row of cars
			car1x = car1x - vx;
			car2x = car2x - vx;
			car3x = car3x - vx;
			car4x = car4x - vx;
			//third row of cars
			car5x = car5x - (2*vx);
			car6x = car6x - (2*vx);
			car7x = car7x - (2*vx);
			//last row of cars
			car8x = car8x - (3*vx);
			car9x = car9x - (3*vx);
			car10x = car10x -(3*vx);
			//second row of trucks
			truck1x = truck1x + (2 * vx);
			truck2x = truck2x + (2 * vx);
			truck3x = truck3x + (2 * vx);
			//fourth row of trucks
			truck4x = truck4x + (2 * vx);
			truck5x = truck5x + (2 * vx);
			//first row of logs
			log1x = log1x - vx;
			log2x = log2x - vx;
			//second row of logs
			log3x = log3x + vx;
			log4x = log4x + vx;
			//third row of logs
			log5x = log5x - (3*vx);
			log6x = log6x - (3*vx);
			log7x = log7x - (3*vx);
			//turtles
			turtle1x = turtle1x + 2*vx;
			turtle2x = turtle2x + 2*vx;
			turtle3x = turtle3x + 2*vx;
			turtle4x = turtle4x + 2*vx;
			turtle5x = turtle5x + 2*vx;
			turtle6x = turtle6x + 2*vx;
			turtle7x = turtle7x + 2*vx;
			//boundaries
			if(car1x <= 62)
				car1x = 311;
			if(car2x <= 62)
				car2x = 311;
			if(car3x <= 62)
				car3x = 311;
			if(car4x <= 62)
				car4x = 311;
			if(car5x <= 62)
				car5x = 311;
			if(car6x <= 62)
				car6x = 311;
			if(car7x <= 62)
				car7x = 311;
			if(car8x <= 62)
				car8x = 311;
			if(car9x <= 62)
				car9x = 311;
			if(car10x <= 62)
				car10x = 311;
			if(truck1x > 320)
				truck1x = 100;
			if(truck2x >320)
				truck2x = 100;
			if(truck3x > 320)
				truck3x = 100;
			if(truck4x > 320)
				truck4x = 100;
			if(truck5x > 320)
				truck5x = 100;
			if(log1x <= 65)
				log1x = 311;
			if(log2x <= 65)
				log2x = 311;
			if(log3x >= 319)
				log3x = 100;
			if(log4x >= 319)
				log4x = 100;
			if(log5x <=65)
				log5x = 311;
			if(log5x <=65)
				log5x = 311;
			if(log6x <=65)
				log6x = 311;
			if(log7x <=65)
				log7x = 311;
			if(turtle1x >= 319)
				turtle1x = 100;
			if(turtle2x >= 319)
				turtle2x = 100;
			if(turtle3x >= 319)
				turtle3x = 100;
			if(turtle4x >= 319)
				turtle4x = 100;
			if(turtle5x >= 319)
				turtle5x = 100;
			if(turtle6x >= 319)
				turtle6x = 90;
			if(turtle7x >= 319)
				turtle7x = 100;
			
			
			//moving frog in the direction of log or turtle
			if(frogposy <= log1y + 10 && frogposy >= log1y - 10 )
			{
				frogposx = frogposx - vx;
			}
			if(frogposy <= log2y + 10 && frogposy >= log2y - 10 )
			{
				frogposx = frogposx - vx;
			}
			if(frogposy <= log3y + 10 && frogposy >= log3y - 10 )
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= log4y + 10 && frogposy >= log4y - 10 )
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= log5y + 10 && frogposy >= log5y - 10 )
			{
				frogposx = frogposx - (2*vx);
			}
			if(frogposy <= log6y + 10 && frogposy >= log6y - 10 )
			{
				frogposx = frogposx - (2*vx);
			}
			if(frogposy <= log7y + 10 && frogposy >= log7y - 10 )
			{
				frogposx = frogposx - (2*vx);
			}
			if(frogposy <= turtle1y + 10 && frogposy >= turtle1y - 10)
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= turtle2y + 10 && frogposy >= turtle2y - 10)
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= turtle3y + 10 && frogposy >= turtle3y - 10)
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= turtle4y + 10 && frogposy >= turtle4y - 10)
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= turtle5y + 10 && frogposy >= turtle5y - 10)
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= turtle6y + 10 && frogposy >= turtle6y - 10)
			{
				frogposx = frogposx + vx;
			}
			if(frogposy <= turtle7y + 10 && frogposy >= turtle7y - 10)
			{
				frogposx = frogposx + vx;
			}
			
			
			
			//frog base
			if((frogposy >= by-2) && (frogposx >= bx - 10 && frogposx <= bx + 10 ))
			{
				homes++;
				frogsquare(bx, by, width/4, Green);
				frogsquare(bx, by+2, width/6, Green);
				frogsquare(bx+5, by+2, width/16, Green);
				frogsquare(bx-5, by+2, width/16, Green);
				frogsquare(bx+5, by-2, width/16, Green);
				frogsquare(bx-5, by-2, width/16, Green);
				frogposx = 190;
				frogposy = 10;
				
			}
			if((frogposy >= by2 -2) && (frogposx >= bx2 - 10 && frogposx <= bx2 + 10 ))
			{
				homes++;
				frogsquare(bx2, by, width/4, Green);
				frogsquare(bx2, by+2, width/6, Green);
				frogsquare(bx2+5, by2+2, width/16, Green);
				frogsquare(bx2-5, by2+2, width/16, Green);
				frogsquare(bx2+5, by2-2, width/16, Green);
				frogsquare(bx2-5, by2-2, width/16, Green);
				frogposx = 190;
				frogposy = 10;
				
			}				
			if((frogposy >= by3-2) && (frogposx >= bx3 - 10 && frogposx <= bx3 + 10 ))
			{
				homes++;
				frogsquare(bx3, by3, width/4, Green);
				frogsquare(bx3, by3+2, width/6, Green);
				frogsquare(bx3+5, by3+2, width/16, Green);
				frogsquare(bx3-5, by3+2, width/16, Green);
				frogsquare(bx3+5, by3-2, width/16, Green);
				frogsquare(bx3-5, by3-2, width/16, Green);
				frogposx = 190;
				frogposy = 10;
				
			}				
			if((frogposy >= by4-2) && (frogposx >= bx4 - 10 && frogposx <= bx4 + 10 ))
			{
				homes++;
				frogsquare(bx4, by4, width/4, Green);
				frogsquare(bx4, by4+2, width/6, Green);
				frogsquare(bx4+5, by4+2, width/16, Green);
				frogsquare(bx4-5, by4+2, width/16, Green);
				frogsquare(bx4+5, by4-2, width/16, Green);
				frogsquare(bx4-5, by4-2, width/16, Green);
				frogposx = 190;
				frogposy = 10;
				
			}				
			if((frogposy >= by5 - 2) && (frogposx >= bx5 - 10 && frogposx <= bx5 + 10 ))
			{
				homes++;
				frogsquare(bx5, by5, width/4, Green);
				frogsquare(bx5, by5+2, width/6, Green);
				frogsquare(bx5+5, by5+2, width/16, Green);
				frogsquare(bx5-5, by5+2, width/16, Green);
				frogsquare(bx5+5, by5-2, width/16, Green);
				frogsquare(bx5-5, by5-2, width/16, Green);
				frogposx = 190;
				frogposy = 10;
			}				
			//boundary
			if(frogposx < 40)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			//collisions
			if(collision(frogposx,frogposy,width,car1x,car1y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car2x,car2y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car3x,car3y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car4x,car4y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car5x,car5y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car6x,car6y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car7x,car7y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car8x,car8y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car9x,car9y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,car10x,car10y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,truck1x,truck1y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,truck2x,truck2y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,truck2x,truck2y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,truck3x,truck3y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,truck4x,truck4y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(collision(frogposx,frogposy,width,truck4x,truck4y)==1)
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			if(((frogposy <= log1y + 10 && frogposy >= log1y - 10)||(frogposy <= log3y + 10 && frogposy >= log3y - 10)||(frogposy <= log7y + 10 && frogposy >= log7y - 10)) && ((frogposx <= log1x + 40 && frogposx >= log1x + 20)||(frogposx <= log2x + 40 && frogposx >= log2x + 20)||(frogposx <= log3x + 40 && frogposx >= log3x + 20)||(frogposx <= log4x + 40 && frogposx >= log4x + 20)||(frogposx <= log5x + 40 && frogposx >= log5x + 20)||(frogposx <= log7x + 40 && frogposx >= log7x + 20)||(frogposx <= log6x + 40 && frogposx >= log6x + 20)))
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
			
			if(((frogposy <= turtle1y + 10 && frogposy >=turtle1y - 10)||(frogposy <= turtle7y + 10 && frogposy >= turtle7y - 10)) && !((frogposx <= turtle1x + 16 && frogposx >= turtle1x)||(frogposx <= turtle2x + 16 && frogposx >= turtle2x)||(frogposx <= turtle3x + 16 && frogposx >= turtle3x)||(frogposx <= turtle4x + 16 && frogposx >= turtle4x)||(frogposx <= turtle5x + 16 && frogposx >= turtle5x)||(frogposx <= turtle6x + 16 && frogposx >= turtle6x)||(frogposx <= turtle7x + 16 && frogposx >= turtle7x)))
			{
				lives--;
				frogsquare(frogposx, frogposy, width/2, Black);
				frogposx = 190;
				frogposy = 10;
				frogsquare(frogposx, frogposy, width/4, Green);
				frogsquare(frogposx, frogposy+2, width/6, Green);
				frogsquare(frogposx+5, frogposy+2, width/16, Green);
				frogsquare(frogposx-5, frogposy+2, width/16, Green);
				frogsquare(frogposx+5, frogposy-2, width/16, Green);
				frogsquare(frogposx-5, frogposy-2, width/16, Green);
			}
		}


	}




