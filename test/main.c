#include "acllib.h"
#include <stdio.h>


void timerListener(int id);
void MouseListener(int x,int y, int button,int event);
void keyListener(int key,int event);
int Setup(){
	
	initWindow("test",20,20,800,800);
	initConsole();
	
	registerMouseEvent(MouseListener);
	registerKeyboardEvent(keyListener);
	registerTimerEvent(timerListener);
	startTimer(0,500);
	startTimer(1,1000);
	
	
	return 0;
}


void MouseListener(int x,int y, int button,int event){
	
	static int ox =0;
	static int oy =0;
	static int i  =0;

	printf("x=%d,y=%d,button=%d,event=%d\n",x,y,button,event);
	if(event==0&&button==1) i=1;
	if(event==2||event==1) i=0;
	if(ox!=0&&oy!=0&&i==1){
	
	beginPaint();
	
	line(ox,oy,x,y);
	
	
	endPaint();	
	ox = x;
	oy = y;
	}
	else{
		ox = x;
		oy = y;
	}

}


void keyListener(int key,int event){
	
	printf("k=%d,event=%d\n",key,event);
	
	
}
void timerListener(int id){
	static int cnt=0;
	printf("%d\n",id);
	if( id==0){
		cnt++;
		if(cnt==5)
			cancelTimer(0);
	}
}
