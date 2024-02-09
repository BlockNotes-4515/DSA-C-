#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;

bool gameover;
const int width=20;
const int height=20;
int x,y,fruitX,fruitY,score;
int tailX[100],tailY[100];
int nTail;
enum eDirection{STOP=0,LEFT,RIGHT,UP,DOWN};
eDirection dir;

void setup()
{
    gameover=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX=rand()%width;
    fruitY=rand()%height;
    score=0;
}

void draw()
{
    system("cls");

    //Draw Top Border.
    for(int i=0;i<width+2;i++)
    {
        cout<<" # ";
        cout<<endl;
        //Draw Side borders and snake.
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
            {
                if(j==0)
                {
                    cout<<" # ";
                }
                if(i==y && j==x)
                {
                    cout<<" 0 ";
                }
                else if(i==fruitY && j==fruitX)
                {
                    cout<<" F ";
                }
                else
                {
                    bool print=false;
                    for(int k=0;k<nTail;k++)
                    {
                        if(tailX[k]==j && tailY[k]==i)
                        {
                            cout<<"O";
                            print=true;
                        }
                    }
                    if(!print){
                    cout<<" ";}
                }
                if(j==width-1){
                cout<<"#";}
            }
            cout<<endl;
        }
        //Draw Bottom Border.
        for(int i=0;i<width+2;i++)
        {
            cout<<"#";
            cout<<endl;
        }
    }
    cout<<"Score: "<<score<<endl;
}//hello

void input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
            case 'a':
               dir=LEFT;
               break;
            case 'd':
               dir=RIGHT;
               break;
            case 'w':
               dir=UP;
               break;
            case 's':
               dir=DOWN;
               break;
            case 'x':
               gameover=true;
               break;
        }
    }
}

void logic()
{
    //Move thetail.
    int prevX=tailX[0];
    int prevY=tailY[0];
    int prev2X,prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for(int i=1;i<nTail;i++)
    {
        prev2X=tailX[i];
        prev2Y=tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
    //Move the Head.
    switch(dir)
    {
        case LEFT:
           x--;
           break;
        case RIGHT:
           x++;
           break;
        case UP:
           y++;
           break;
        case DOWN:
           y--;
           break;
        default:
           break;
    }
    //Checking for collission with Walls.
    if(x<0 || x>=width || y<0 || y>=height)
    {
        gameover=true;

        //Check the collission with fruits.
        if(x==fruitX && y==fruitY)
        {
            score+=10;
            fruitX=rand()%width;
            fruitY=rand()%height;
            nTail++;
        }
    }
    //Check for Collision with the tail.
    for(int i=0;i<nTail;i++)
    {
        if(nTail[i]==x && taiY[i]==y)
        {
            gameover=true;
        }
    }
}
int main()
{
    setup();
    while(!gameover)
    {
        draw();
        input();
        logic();
        sleep(50);//Pause the Game for the Short Periods.
    }
    return 0;
}
