//this main program is for testing purpose.

#include<iostream>
#include "math.h"
#include"tiles_struct.h"
#include<cstdlib>
#include<ctime>
#include"tile_initialisation.h"
//#include<simplecpp>      //after shuffling only then simplecpp.
#include"distribution_of_tiles.h"
#include"exchange_and_pass.h"
#include<simplecpp>
#include"basic_board.h"
#include"movement_of_tiles.h"
#include"rectangle_detection.h"
#include"initialisation_board.h"
#include"copy_array.h"
#include"feed_array.h"
#include "char_to_int.h"
#include "build_number_x.h"
#include "build_number_y.h"
#include "score_board_value.h"
#include "score_calc.h"
#include "equation_validation.h"
#include "equation_setup.h"
#include "equation_identification.h"
#include "final_permutation.h"
//#include "score_calculate.h"
#include "artificial_again.h"
#include "ai_display.h"
using namespace std;



int main(){

    tile array_of_tiles[2000];
    tile_initialisation(array_of_tiles,119);   //initilisation of array_of_tiles
int computer_move_detector=-1,player1_score=0,computer_score=0;
//cout<<array_of_tiles[10].tile_name;

    tile player1[7],computer[7];
    char x;
    int y;
    tile initial= {x,y,y};
    for(int i=0; i<7; i++)
    {
        player1[i]=initial;
        computer[i]=initial;
    }

    int current=0;
    int last=110;
    distribution(player1,array_of_tiles,initial,current);
    distribution(computer,array_of_tiles,initial,current);
    //tile player1[]={{'1',8,1,"1",3},{'5',8,1,"5",5},{'6',8,2,"6",6},{'1',8,2,"1",7},{'8',6,2,"8",8},{'+',8,1,"+"},{'=',16,0,"="}};

   //tile computer[]={{'3',8,1,"3",2},{'1',8,1,"1",2},{'4',8,1,"4",4},{'=',16,0,"="},{'x',8,1,"x"},{'0',5,1,"0",0},{'2',6,2,"2"}};
    player1[0]={'=',16,0,"="};
    for(int i=0; i<7; i++)
    {
        cout<<computer[i].tile_name;
    }
    cout<<endl;
bool start_game=0;

  initCanvas("scrabble",1000,700);
  Rectangle cvr1(500,350,1000,700); cvr1.setFill(true);cvr1.setColor(COLOR(40,0,0));

start1:
    beginFrame();
  Rectangle r_start(500,300,100,50); Text t_start(500,300,"New Game");
  Rectangle r_about(500,450,100,50); Text  t_about(500,450,"about");
  Rectangle r_instruction(500,600,100,50);  Text t_instruction(500,600,"instruction");
  Rectangle r_exit(500,680,50,25);  Text t_exit(500,680,"Exit");
  r_exit.setFill(true);r_exit.setColor(COLOR(255,255,204));
  //Rectangle r_scrabble(500,120,400,75);  Text t_scrabble(500,120,"MATHS SCRABBLE");
  //r_scrabble.setFill(true);r_scrabble.setColor(COLOR(255,255,204));
  r_start.setFill(true);r_start.setColor(COLOR(255,255,204));
   r_about.setFill(true);r_about.setColor(COLOR(255,255,204));
    r_instruction.setFill(true);r_instruction.setColor(COLOR(255,255,204));
computer_score=0; player1_score=0;
  endFrame();
start2:
  int user=getClick(); int userx=user/65536; int usery=user%65536;


//user sees about;
if(rectangle_detect(userx,usery,500,450,100,50)){
                                                  beginFrame();
                                                  r_start.hide();
                                                  r_about.hide();
                                                  r_instruction.hide();
                                                  t_start.hide();
                                                  t_instruction.hide();
                                                  t_about.hide();
                                                  r_exit.hide();
                                                  t_exit.hide();
                                                  Rectangle r_aboutagain(500,75,100,50);
                                                   r_aboutagain.setFill(true);r_aboutagain.setColor(COLOR(255,255,204));
                                                  Text t_about(500,75,"About the game");
//                                                   Rectangle r_text_cover(400,320,750,200);
//                                                   r_text_cover.setFill(true);r_text_cover.setColor(COLOR(255,255,204));
//                                                  Text t_1st(420,260,"1. In this board game players are provided with a specific number of random tiles from a specified set of tiles.");
//                                                  Text t_2nd(410,300,"2. The player is supposed to build up a valid Mathematical Equation and present in on board to gain score.");
//                                                  Text t_3rd(375,340,"3. He can pass or exchange and pass at his will, if he thinks no possible equation can be set up.");
//                                                  Text t_4th(335,380,"4. Ultimately, when set of alltiles is exhausted, the player with maximum score wins.");
                                                  Rectangle r_startagain(500,650,100,50);
                                                   r_startagain.setFill(true);r_startagain.setColor(COLOR(255,255,204));
                                                  Text t_startagain(500,650,"start");
                                                  Rectangle r_back1(120,650,100,50);
                                                   r_back1.setFill(true);r_back1.setColor(COLOR(255,255,204));
                                                  Text t_back1(120,650,"Back");
                                                  endFrame();
                                                   start:
                                                  int useragain =getClick();
                                                  if(rectangle_detect(useragain/65536,useragain%65536,500,650,100,50)){start_game=1;}
                                                  else if(rectangle_detect(useragain/65536,useragain%65536,120,650,100,50)){goto start1;}
                                                 else {start_game=0;goto start; }
                                                 }

//user sees instructions;
else if( rectangle_detect(userx,usery,500,600,100,50)){
                                                        beginFrame();
                                                  r_start.hide();
                                                  r_about.hide();
                                                  r_instruction.hide();
                                                  t_start.hide();
                                                  t_instruction.hide();
                                                  t_about.hide();
                                                  r_exit.hide();
                                                  t_exit.hide();
                                                  Rectangle r_cover2(500,150,100,50);
                                                   r_cover2.setFill(true);r_cover2.setColor(COLOR(255,255,204));
                                                  Text t_instruction1(500,150,"instructions");
                                                  Rectangle r_startagain(500,650,100,50);
                                                   r_startagain.setFill(true);r_startagain.setColor(COLOR(255,255,204));
                                                  Text t_startagain(500,650,"start");
                                                  Rectangle r_back1(120,650,100,50);
                                                   r_back1.setFill(true);r_back1.setColor(COLOR(255,255,204));
                                                  Text t_back1(120,650,"Back");
                                                  endFrame();
                                                   start3:
                                                  int useragain =getClick();
                                                  if(rectangle_detect(useragain/65536,useragain%65536,500,650,100,50)){start_game=1;}
                                                  else if(rectangle_detect(useragain/65536,useragain%65536,120,650,100,50)){goto start1;}
                                                 else {start_game=0;goto start3; }


                                                  }
else if(rectangle_detect(userx,usery,500,680,50,25)){return 0;}
 //user starts the game
else if(rectangle_detect(userx,usery,500,300,100,50)){start_game=1;}

else{goto start2;}

if(start_game==1){
beginFrame();
r_start.hide();
r_about.hide();
r_instruction.hide();
t_start.hide();
t_instruction.hide();
t_about.hide();
endFrame();
//board using 15 rectangles;
int center_on_board_x[16][16],center_on_board_y[16][16];  //to strore center coordinates;
//cout<<"hi";
beginFrame();
Rectangle cvr(500,350,1000,700); cvr.setFill(true);cvr.setColor(COLOR(40,0,0));
Rectangle r[16][16],r_back[16][16];             Text t[16][16];

               for(int i=1;i<=15;i++)
               {
                   for(int j=1;j<=15;j++)
                   {
                       r[i][j]=Rectangle(165+30*i,125+30*j,30,30); r_back[i][j]=Rectangle(165+30*i,125+30*j,30,30);
                       center_on_board_x[i][j]=165+30*i;
                       center_on_board_y[i][j]=125+30*j;
                       r[i][j].setFill(true);
                       r[i][j].setColor(COLOR(0,100,0));
//
                      if((i==1&&j==1)||(i==15&&j==15)||(i==1&&j==15)||(i==15&&j==1)||(i==8&&j==1)||(i==1&&j==8)||(i==15&&j==8)||(i==8&j==15)){r[i][j].setColor(COLOR(0,0,255));
                                                                                                                                               t[i][j]= Text(center_on_board_x[i][j],center_on_board_y[i][j],"x3");}


                      if((i==j||(i==16-j))&&(i>1)&&(i<15)&&(j>1)&&(j<15)){r[i][j].setFill(true);r[i][j].setColor(COLOR(255,0,0));
                                                       t[i][j]= Text(center_on_board_x[i][j],center_on_board_y[i][j],"x2");
                                                       }
                   }

               }



Rectangle r2[2],r_result; r2[0]= Rectangle(60,200,80,60);r2[1]= Rectangle(60,200,80,60); Text t2(60,200,"PASS"),t_result; r2[0].setFill(true); r2[0].setColor(COLOR(255,255,204));
Rectangle r3[2];r3[0]= Rectangle(60,320,80,60);r3[1]= Rectangle(60,320,80,60); Text t3(60,320,"EXCHANGE");r3[0].setFill(true); r3[0].setColor(COLOR(255,255,204));
Rectangle r4[2];r4[0]= Rectangle(60,440,80,60);r4[1]= Rectangle(60,440,80,60); Text t4(60,440,"SUBMIT");r4[0].setFill(true); r4[0].setColor(COLOR(255,255,204));
Rectangle r5[2]; r5[0]= Rectangle(60,660,80,60);r5[1]= Rectangle(60,660,80,60); Text t5(60,660,"QUIT");r5[0].setFill(true); r5[0].setColor(COLOR(255,255,204));

Rectangle r12[2];r12[0]=Rectangle(800,200,180,40);r12[1]=Rectangle(800,200,180,40); Text t12(760,200,"Computer");r12[0].setFill(true); r12[0].setColor(COLOR(255,255,204));

Rectangle r13[2];r13[0]=Rectangle(800,280,180,40);r13[1]=Rectangle(800,280,180,40); Text t13(760,280,"Player");r13[0].setFill(true); r13[0].setColor(COLOR(255,255,204));
                                                                                    Text t18(805,280,":"),t19(805,200,":");
// VARIABLES FOR TRANSITION EFFECT
const int out_x=1100, out_y=65,in_x=405,in_y_start=45,dx=0,dy=1;
Circle c1[2];c1[0]=Circle(405,65,44);c1[1]=Circle(405,65,44); Text t14(in_x,65,"Player"), t15(out_x,out_y,"Computer"),t16(850,280,"0"),t17(850,200,"0");c1[0].setFill(true); c1[0].setColor(COLOR(255,255,204));


endFrame();

Rectangle r_tiles_player[7],r_over[7]; Text t_tiles_player[7];
bool detection[7];int center_rectangle_x[7],center_rectangle_y[7];bool exch=0;bool submit=0; bool pass=0; bool quit=0;

 for(int i=0;i<7;i++){detection[i]=0;center_rectangle_x[i]=300+30*i;center_rectangle_y[i]=630;
                       }



                     /////////////////////////////
                     /////game play starts///////
                     ////////////////////////////

//board initialisation
char last_board[17][17],current_board[17][17];
initialisation(current_board);
initialisation(last_board);
int n_turn=100; int iteration=0;
 XEvent event[n_turn];
while(1){                         //first while loop
 //check for endgame;
    if ( current== last)
    {
        if (computer_score>player1_score){   beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," YOU LOSE");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();}

    else if(computer_score<player1_score){   beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," YOU WON");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();
                                            }

    else {
                   beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," MATCH DRAW");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();
        }
    }

    bool exit = false;
int index[7]={-1,-1,-1,-1,-1,-1,-1};



//movement

//player1.tiles

//Text tload(390,630,"loading........");
beginFrame();
for(int i=0;i<7;i++)
{
    r_tiles_player[i]=Rectangle(300+30*i,630,30,30);r_over[i]=Rectangle(300+30*i,630,30,30);
    t_tiles_player[i]=Text(300+30*i,630,player1[i].tile_display);
    r_tiles_player[i].setFill(true);r_tiles_player[i].setColor(COLOR(255,255,204));
}

endFrame();
//tload.hide();
   short lastx, lasty=0;
//player1 movement(in a while loop)



   while(1){




exch=0; submit=0; pass=0;
      // XEvent event[iteration];
//cout<<" iteration"<<iteration<<"  ";
nextEvent(event[iteration]);


       if (mouseButtonPressEvent(event[iteration]))

       {  //cout<<" entered";
            exch=rectangle_detect(event[iteration].xmotion.x,event[iteration].xmotion.y,60,320,80,60);
           submit= rectangle_detect(event[iteration].xmotion.x,event[iteration].xmotion.y,60,440,80,60);
           pass= rectangle_detect(event[iteration].xmotion.x,event[iteration].xmotion.y,60,200,80,60);
           quit= rectangle_detect(event[iteration].xmotion.x,event[iteration].xmotion.y,60,660,80,60);
          // if(submit){cout<< "submitted";}
          // if(exch){cout<< " exchanged";}
            for(int i=0;i<7;i++)
            {
                //if(rectangle_detect(center_rectangle_x[i],center_rectangle_y[i],375,335,450,450)){detection[i]=false;}
                detection[i]=rectangle_detect(event[iteration].xmotion.x,event[iteration].xmotion.y,300+30*i,630,30,30);
               if(detection[i]){index[i]=i;//cout<<endl<<" detected"<<index[i];
               }
            }

       }


        lastx=event[iteration].xmotion.x;
        lasty=event[iteration].xmotion.y;






      if (mouseDragEvent(event[iteration]))
       {  // cout<<" dragged";
           for(int i=0;i<7;i++)
                              {


           if(detection[i]){
           //nextt[i]=t_tiles_player[i];
            //Rectangle r(300,630,30,30); r.setFill(true);
            beginFrame();
           r_tiles_player[i].moveTo(event[iteration].xbutton.x,event[iteration].xbutton.y);
            r_over[i].moveTo(event[iteration].xbutton.x,event[iteration].xbutton.y);
            t_tiles_player[i].moveTo(event[iteration].xbutton.x,event[iteration].xbutton.y);
            endFrame();

           lastx = event[iteration].xbutton.x;
           lasty= event[iteration].xbutton.y;
           center_rectangle_x[i]=event[iteration].xbutton.x;
           center_rectangle_y[i]=event[iteration].xbutton.y;
          // player1[0]=initial;
           }
                               }


       }


//code to end the turn of player1;
if(submit){
            //before the computer move whatever player1 submits will be fed in board[17][17];
//then he will get new tiles
//current_board will become last_board ;
//new entries will be fed into current;
//copying and feding into array;
//for(int i=0;i<7;i++){cout<<"index"<<index[i];}
feed_array(index,center_rectangle_x,center_rectangle_y,current_board,last_board,center_on_board_x,center_on_board_y,player1);
//cout<<endl<<current_board[1][1]<<" "<<current_board[2][1]<<" "<<current_board[3][1]<<endl;
//cout<<endl;
//for(int i=0;i<17;i++)
//{
//    for(int j= 0;j<17;j++)
//    {
//        cout<< current_board[j][i];
//    }
//cout<<endl;}
//cout<<endl;
//for(int i=0;i<17;i++)
//{
//    for(int j= 0;j<17;j++)
//    {
//        cout<< last_board[j][i];
//    }
//cout<<endl;}
  int score;
  if(identify(current_board,last_board,'a',score))
    {
        player1_score=player1_score+score;
        t16.reset(850,280,player1_score);
        exit=true;
        t14.moveTo(out_x,out_y);
        t15.moveTo(in_x,in_y_start);
        repeat(20)
        {
          t15.move(dx,dy);
          wait(0.001);
        }

        break;
    }
   else for(int i=0;i<7;i++){if (i==index[i])
    {r_tiles_player[i].reset(300+30*i,630,30,30);
     t_tiles_player[i].reset(300+30*i,630,player1[i].tile_display);
     r_over[i].reset(300+30*i,630,30,30);
      center_rectangle_x[i]=300+30*i;
      center_rectangle_y[i]=630;
      copy_array(last_board,current_board);}
    }
//cout<<endl<<last_board[1][1]<<" "<<last_board[2][1]<<" "<<last_board[3][1]<<endl;
//exit= true;
}


if(exch)
    {  int c= getClick();int cx= c/65536;int cy =c%65536;
    //cout<<".";
    bool detection_exchange[7]={0,0,0,0,0,0,0};

          for(int i=0;i<7;i++)
            {

                detection_exchange[i]=rectangle_detect(cx,cy,center_rectangle_x[i],center_rectangle_y[i],30,30);
            }

       for(int i=0;i<7;i++){
        if(detection_exchange[i])
                        {
                          exchange(player1,array_of_tiles,initial,i,current,last);
                          t_tiles_player[i].reset(300+30*i,630,player1[i].tile_display);
                          //exit =true;
                          break;
                        }
                          }

          for(int i=0;i<7;i++)
          {
              r_tiles_player[i].reset(300+30*i,630,30,30);
              t_tiles_player[i].reset(300+30*i,630,player1[i].tile_display);
               r_over[i].reset(300+30*i,630,30,30);
             center_rectangle_x[i]=300+30*i;
              center_rectangle_y[i]=630;
          }

   if(exit){break;} }


 if(pass){ exit = true;
            t14.moveTo(out_x,out_y);
            t15.moveTo(in_x,in_y_start);
            repeat(20)
          {
            t15.move(dx,dy);
           wait(0.001);
          }


          for(int i=0;i<7;i++)
          {
              r_tiles_player[i].reset(300+30*i,630,30,30);
              t_tiles_player[i].reset(300+30*i,630,player1[i].tile_display);
               r_over[i].reset(300+30*i,630,30,30);
             center_rectangle_x[i]=300+30*i;
              center_rectangle_y[i]=630;
          }

        }

if(quit)
{   beginFrame();
   for(int i=1;i<16;i++)
   {
       for(int j=1;j<16;j++)
       {
           r[i][j].hide();
           t[i][j].hide();
           r_back[i][j].hide();

       }
   }

   for(int i=0;i<7;i++)
   {
       r_tiles_player[i].hide();
       t_tiles_player[i].hide();
       r_over[i].hide();
   }
 for(int i=0;i<2;i++){
   r2[i].hide();
   r3[i].hide();
   r4[i].hide();
   r5[i].hide();
   r12[i].hide();
   r13[i].hide();
   c1[i].hide();
                 }

     t2.hide();
     t3.hide();
     t4.hide();
     t5.hide();
    t12.hide();
    t13.hide();
    t14.hide();
    t15.hide();
    t16.hide();
    t17.hide();
    t18.hide();
    t19.hide();


   Rectangle r_thank(500,100,150,50);
   Text t_thank(500,100,"Thankyou for playing");
   r_thank.setFill(true);r_thank.setColor(COLOR(255,255,204));
   endFrame();

   if (computer_score>player1_score){   beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," YOU LOSE");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();}

    else if(computer_score<player1_score){   beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," YOU WON");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();

                                            }

    else if(computer_score!=0){
                    beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," MATCH DRAW");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();

        }
   wait(3);
 beginFrame();
   goto start1;
   endFrame();

   exit=true;


}

if (exit){break;}
   }
////before the computer move whatever player1 submits will be fed in board[17][17];
////then he will get new tiles
////current_board will become last_board ;
////new entries will be fed into current;
////copying and feding into array;
//
//feed_array(index,center_rectangle_x,center_rectangle_y,last_board,current_board,center_on_board_x,center_on_board_y,player1);
////cout<<endl<<current_board[1][1]<<endl<<current_board[2][1]<<endl<<current_board[1][2]<<endl;

//PRECONDITIONS satisfaction
//for(int i=0;i<7;i++){nextt[i].imprint();}
//imprinting on board
for(int i=0;i<7;i++)
{


        for(int j=1;j<16;j++)
        {
            for(int k=1;k<16;k++)
            {
                if(rectangle_detect(center_rectangle_x[i],center_rectangle_y[i],center_on_board_x[j][k],center_on_board_y[j][k],30,30)){t[j][k]=t_tiles_player[i];t[j][k].imprint();
                                                                                                                                         r[j][k].setColor(COLOR(255,255,204)); }
            }
        }

}

//PRECONDITION
for(int k=0;k<7;k++){//cout<<endl<<"index"<<index[k]<<endl;
    if(k==index[k]){player1[k]=initial;}}

if(current!=last){distribution(player1,array_of_tiles,initial,current);}
for(int i=0;i<7;i++){detection[i]=0;center_rectangle_x[i]=300+30*i;center_rectangle_y[i]=630;}
beginFrame();
for(int i=0;i<7;i++)
{
    r_tiles_player[i]=Rectangle(300+30*i,630,30,30);r_over[i]=Rectangle(300+30*i,630,30,30);
    t_tiles_player[i]=Text(300+30*i,630,player1[i].tile_display);
    r_tiles_player[i].setFill(true);r_tiles_player[i].setColor(COLOR(255,255,204));
}
endFrame();

//computer move
char temp_board[17][17];
initialisation(temp_board);


// check for endgame;
 if ( current== last)
    {
        if (computer_score>player1_score){   beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," YOU LOSE");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();}

    else if(computer_score<player1_score){ beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," YOU WON");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();
                                            }

    else {
                    beginFrame();
                     r_result=Rectangle(800,600,100,50);
                     t_result=Text(800, 600," MATCH DRAW");
                    r_result.setFill(true); r_result.setColor(COLOR(255,255,204));
                    endFrame();
        }
    }

computer_move1(current_board, computer_move_detector,computer,initial,temp_board,computer_score);


//cout<< temp_board[7][8]<< temp_board[8][8]<<temp_board[9][8];
cout<< "comp_move_detector"<< computer_move_detector;
switch (computer_move_detector)
{
    case 0 : {int index_comp= -1;               //exchange
              for(int i=0;i<7;i++){if(computer[i].tile_name!='='){index_comp=i;break;}}
              exchange(computer,array_of_tiles,initial,index_comp,current,last);
              break;

              }

    case 1 :  {for(int i=0;i<17;i++)
                {
                    for(int j=0;j<17;j++)
                    {
                        if(temp_board[i][j]!='a'){ beginFrame();
                                                   t[i][j]=Text(center_on_board_x[i][j],center_on_board_y[i][j],ai_display(i,j,temp_board));
                                                   r[i][j].setFill(true);
                                                   r[i][j].setColor(COLOR(255,255,204));
                        }                            endFrame();
                    }
                }
                t17.reset(850,200,computer_score);
               break;}


}

iteration=iteration+1;
t15.moveTo(out_x,out_y);
t14.moveTo(in_x,in_y_start);
repeat(20)
{
  t14.move(dx,dy);
  wait(0.001);
}

//new tiles to computer
if(current!=last){distribution(computer,array_of_tiles,initial,current);}
cout<<endl;
for(int i=0;i<7;i++)
{
    cout<<computer[i].tile_name;
}
cout<<endl;
}
wait(1000);
}

}








