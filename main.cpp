//this main program is for testing purpose.

#include<iostream>
using namespace std;
#include "header_file.h";



int main()
{

    tile array_of_tiles[2000];
    tile_initialisation(array_of_tiles,111);   //initilisation of array_of_tiles

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
    for(int i=0; i<7; i++)
    {
      //  cout<<player1[i].tile_name;
    }
   // cout<<endl;


    initCanvas("scrabble",750,700);

//board using 15 rectangles;
    int center_on_board_x[16][16],center_on_board_y[16][16];  //to strore center coordinates;

    Rectangle r_1(165,125,30,30);
    r_1.imprint();
    center_on_board_x[1][1]=165;
    center_on_board_y[1][1]=125;

    for(int i=0; i<=13; i++)
    {
        r_1.move(30,0);
        r_1.imprint();
        center_on_board_x[i+2][1]=165+30*(i+1);
        center_on_board_y[i+2][1]=125;
    }


    Rectangle r_2(165,155,30,30);
    r_2.imprint();
    center_on_board_x[1][2]=165;
    center_on_board_y[1][2]=155;

    for(int i=0; i<=13; i++)
    {
        r_2.move(30,0);
        r_2.imprint();
        center_on_board_x[i+2][2]=165+30*(i+1);
        center_on_board_y[i+2][2]=155;
    }

    Rectangle r_3(165,185,30,30);
    r_3.imprint();
    center_on_board_x[1][3]=165;
    center_on_board_y[1][3]=185;

    for(int i=0; i<=13; i++)
    {
        r_3.move(30,0);
        r_3.imprint();
        center_on_board_x[i+2][3]=165+30*(i+1);
        center_on_board_y[i+2][3]=185;
    }

    Rectangle r_4(165,215,30,30);
    r_4.imprint();
    center_on_board_x[1][4]=165;
    center_on_board_y[1][4]=215;

    for(int i=0; i<=13; i++)
    {
        r_4.move(30,0);
        r_4.imprint();
        center_on_board_x[i+2][4]=165+30*(i+1);
        center_on_board_y[i+2][4]=215;
    }

    Rectangle r_5(165,245,30,30);
    r_5.imprint();
    center_on_board_x[1][5]=165;
    center_on_board_y[1][5]=245;

    for(int i=0; i<=13; i++)
    {
        r_5.move(30,0);
        r_5.imprint();
        center_on_board_x[i+2][5]=165+30*(i+1);
        center_on_board_y[i+2][5]=245;
    }

    Rectangle r_6(165,275,30,30);
    r_6.imprint();
    center_on_board_x[1][6]=165;
    center_on_board_y[1][6]=275;

    for(int i=0; i<=13; i++)
    {
        r_6.move(30,0);
        r_6.imprint();
        center_on_board_x[i+2][6]=165+30*(i+1);
        center_on_board_y[i+2][6]=275;
    }

    Rectangle r_7(165,305,30,30);
    r_7.imprint();
    center_on_board_x[1][7]=165;
    center_on_board_y[1][7]=305;

    for(int i=0; i<=13; i++)
    {
        r_7.move(30,0);
        r_7.imprint();
        center_on_board_x[i+2][7]=165+30*(i+1);
        center_on_board_y[i+2][7]=305;
    }

    Rectangle r_8(165,335,30,30);
    r_8.imprint();
    center_on_board_x[1][8]=165;
    center_on_board_y[1][8]=335;

    for(int i=0; i<=13; i++)
    {
        r_8.move(30,0);
        r_8.imprint();
        center_on_board_x[i+2][8]=165+30*(i+1);
        center_on_board_y[i+2][8]=335;
    }

    Rectangle r_9(165,365,30,30);
    r_9.imprint();
    center_on_board_x[1][9]=165;
    center_on_board_y[1][9]=365;

    for(int i=0; i<=13; i++)
    {
        r_9.move(30,0);
        r_9.imprint();
        center_on_board_x[i+2][9]=165+30*(i+1);
        center_on_board_y[i+2][9]=365;
    }

    Rectangle r_10(165,395,30,30);
    r_10.imprint();
    center_on_board_x[1][10]=165;
    center_on_board_y[1][10]=395;

    for(int i=0; i<=13; i++)
    {
        r_10.move(30,0);
        r_10.imprint();
        center_on_board_x[i+2][10]=165+30*(i+1);
        center_on_board_y[i+2][10]=395;
    }

    Rectangle r_11(165,425,30,30);
    r_11.imprint();
    center_on_board_x[1][11]=165;
    center_on_board_y[1][11]=425;

    for(int i=0; i<=13; i++)
    {
        r_11.move(30,0);
        r_11.imprint();
        center_on_board_x[i+2][11]=165+30*(i+1);
        center_on_board_y[i+2][11]=425;
    }

    Rectangle r_12(165,455,30,30);
    r_12.imprint();
    center_on_board_x[1][12]=165;
    center_on_board_y[1][12]=125;

    for(int i=0; i<=13; i++)
    {
        r_12.move(30,0);
        r_12.imprint();
        center_on_board_x[i+2][12]=165+30*(i+1);
        center_on_board_y[i+2][12]=455;
    }

    Rectangle r_13(165,485,30,30);
    r_13.imprint();
    center_on_board_x[1][13]=165;
    center_on_board_y[1][13]=485;

    for(int i=0; i<=13; i++)
    {
        r_13.move(30,0);
        r_13.imprint();
        center_on_board_x[i+2][13]=165+30*(i+1);
        center_on_board_y[i+2][13]=485;
    }

    Rectangle r_14(165,515,30,30);
    r_14.imprint();
    center_on_board_x[1][14]=165;
    center_on_board_y[1][14]=515;

    for(int i=0; i<=13; i++)
    {
        r_14.move(30,0);
        r_14.imprint();
        center_on_board_x[i+2][14]=165+30*(i+1);
        center_on_board_y[i+2][14]=515;
    }

    Rectangle r_15(165,545,30,30);
    r_15.imprint();
    center_on_board_x[1][15]=165;
    center_on_board_y[1][15]=545;

    for(int i=0; i<=13; i++)
    {
        r_15.move(30,0);
        r_15.imprint();
        center_on_board_x[i+2][15]=165+30*(i+1);
        center_on_board_y[i+2][15]=545;
    }


    Rectangle r2(60,200,80,60);
    Text t2(60,200,"PASS");
    Rectangle r3(60,320,80,60);
    Text t3(60,320,"EXCHANGE");
    Rectangle r4(60,440,80,60);
    Text t4(60,440,"SUBMIT");

    Rectangle r12(250,50,80,60);
    Text t12(250,50,"computer");

    Rectangle r13(550,50,80,60);
    Text t13(550,50,"player");

    Rectangle r5,r6,r7,r8,r9,r10,r11;
    Text t5,t6,t7,t8,t9,t10,t11;
    bool detection[7];
    int center_rectangle_x[7],center_rectangle_y[7];
    bool exch=0;

    for(int i=0; i<7; i++)
    {
        detection[i]=0;
        center_rectangle_x[i]=300+30*i;
        center_rectangle_y[i]=630;
    }
    bool exit = false;
    ;

    /////////////////////////////
    /////game play starts///////
    ////////////////////////////

//board initialisation
    char last_board[17][17];
    char current_board[17][17];
initialisation(current_board);
initialisation(last_board);


    //cout << endl << "a." << " " << last_board[0][0] << "b. " << last_board[1][0] << "c. "<< last_board[1][1] << "d. "<< last_board[0][1] << "e. "<< last_board[2][2] << " ";
    //cout << endl << "p." << " " << current_board[5][5] << "q. " << current_board[4][4] << "r. "<< current_board[1][1] << "s. "<< current_board[3][3] << "t. "<< current_board[2][2] << " ";
    int index[7]={-1,-1,-1,-1,-1,-1,-1};
    while(1)
    {

        Text nextt1,nextt2,nextt3,nextt4,nextt5,nextt6,nextt7;


//movement

//player1.tiles
        Rectangle r5(300,630,30,30);
        Text t5(300,630,player1[0].tile_display);
        Rectangle r6(330,630,30,30);
        Text t6(330,630,player1[1].tile_display);
        Rectangle r7(360,630,30,30);
        Text t7(360,630,player1[2].tile_display);
        Rectangle r8(390,630,30,30);
        Text t8(390,630,player1[3].tile_display);
        Rectangle r9(420,630,30,30);
        Text t9(420,630,player1[4].tile_display);
        Rectangle r10(450,630,30,30);
        Text t10(450,630,player1[5].tile_display);
        Rectangle r11(480,630,30,30);
        Text t11(480,630,player1[6].tile_display);
        short lastx, lasty=0;
//player1 movement(in a while loop)
        while(1)
        {
//Text nextt1,nextt2,nextt3,nextt4,nextt5,nextt6,nextt7;
            XEvent event;

            nextEvent(event);


            if (mouseButtonPressEvent(event))
            {
                for(int i=0; i<7; i++)
                {
                    if(rectangle_detect(center_rectangle_x[i],center_rectangle_y[i],355,335,450,450))
                    {
                        detection[i]=false;
                    }
                    else detection[i]=rectangle_detect(event.xmotion.x,event.xmotion.y,300+30*i,630,30,30);
                    if(detection[i])
                    {
                        index[i]=i;
                    }
                }
                exch=rectangle_detect(event.xmotion.x,event.xmotion.y,60,320,80,60);
            }


            lastx=event.xmotion.x;
            lasty=event.xmotion.y;






            if (mouseDragEvent(event))
            {
                if(detection[0])
                {
                    nextt1=t5;
                    //Rectangle r(300,630,30,30); r.setFill(true);
                    //r5.moveTo(event.xbutton.x,event.xbutton.y);array
                    t5.moveTo(event.xbutton.x,event.xbutton.y);

                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[0]=event.xbutton.x;
                    center_rectangle_y[0]=event.xbutton.y;
                    // player1[0]=initial;
                }


                else    if(detection[1])
                {
                    //r6.moveTo(event.xbutton.x,event.xbutton.y);
                    nextt2=t6;
                    t6.moveTo(event.xbutton.x,event.xbutton.y);
                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[1]=event.xbutton.x;
                    center_rectangle_y[1]=event.xbutton.y;
                    //player1[1]=initial;
                }




                else    if(detection[2])
                {
                    //r7.moveTo(event.xbutton.x,event.xbutton.y);
                    nextt3=t7;
                    t7.moveTo(event.xbutton.x,event.xbutton.y);
                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[2]=event.xbutton.x;
                    center_rectangle_y[2]=event.xbutton.y;
                    //player1[2]=initial;
                }

                else    if(detection[3])
                {
                    //r8.moveTo(event.xbutton.x,event.xbutton.y);
                    nextt4=t8;
                    t8.moveTo(event.xbutton.x,event.xbutton.y);
                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[3]=event.xbutton.x;
                    center_rectangle_y[3]=event.xbutton.y;
                    //player1[3]=initial;
                }

                else    if(detection[4])
                {
                    //r9.moveTo(event.xbutton.x,event.xbutton.y);
                    nextt5=t9;
                    t9.moveTo(event.xbutton.x,event.xbutton.y);
                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[4]=event.xbutton.x;
                    center_rectangle_y[4]=event.xbutton.y;
                    //player1[4]=initial;
                }


                else    if(detection[5])
                {
                    //r10.moveTo(event.xbutton.x,event.xbutton.y);
                    nextt6=t10;
                    t10.moveTo(event.xbutton.x,event.xbutton.y);
                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[5]=event.xbutton.x;
                    center_rectangle_y[5]=event.xbutton.y;
                    //player1[5]=initial;
                }


                else    if(detection[6])
                {
                    //r11.moveTo(event.xbutton.x,event.xbutton.y);
                    nextt7=t11;
                    t11.moveTo(event.xbutton.x,event.xbutton.y);
                    lastx = event.xbutton.x;
                    lasty= event.xbutton.y;
                    center_rectangle_x[6]=event.xbutton.x;
                    center_rectangle_y[6]=event.xbutton.y;
                    //player1[6]=initial;
                }



            }

//cout << endl << "a." << " " << last_board[6][97] << "b. " << last_board[3][2] << "c. "<< last_board[3][4] << "d. "<< last_board[3][5] << "e. "<< last_board[3][6] << " ";
//cout << endl << "p." << " " << current_board[6][97] << "q. " << current_board[3][2] << "r. "<< current_board[3][4] << "s. "<< current_board[3][5] << "t. "<< current_board[3][6] << " ";

//code to end the turn of player1;
            if(rectangle_detect(event.xmotion.x,event.xmotion.y,60,440,80,60)&&!mouseDragEvent(event))
            {
              //before the computer move whatever player1 submits will be fed in board[17][17];
              //then he will get new tiles
              //current_board will become last_board ;
              //new entries will be fed into current;
              //copying and feding into array;
              //cout<<index;
              feed_array(index,center_rectangle_x,center_rectangle_y,last_board,current_board,center_on_board_x,center_on_board_y,player1);
              //cout<<endl<<current_board[1][1]<<endl<<current_board[2][1]<<endl<<current_board[1][2]<<endl;
              if(identify(current_board,last_board,'a'))
                {
                  exit = true;
                  break;
                }
               else {}

            }
            if(exch)
            {
                int c= getClick();
                int cx= c/65536;
                int cy =c%65536;
                //cout<<".";

                for(int i=0; i<7; i++)
                {

                    detection[i]=rectangle_detect(cx,cy,center_rectangle_x[i],center_rectangle_y[i],30,30);
                }

                for(int i=0; i<7; i++)
                {
                    if(detection[i])
                    {
                        exchange(player1,array_of_tiles,initial,i,current,last);

                        exit =true;
                        break;
                    }
                }
                if(exit)
                {
                    break;
                }
            }
        }
//before the computer move whatever player1 submits will be fed in board[17][17];
//then he will get new tiles
//current_board will become last_board ;
//new entries will be fed into current;
//copying and feding into array;
       // cout<<index;
       // feed_array(index,center_rectangle_x,center_rectangle_y,last_board,current_board,center_on_board_x,center_on_board_y,player1);
       // cout<<endl<<current_board[1][1]<<endl<<current_board[2][1]<<endl<<current_board[1][2]<<endl;

//PRECONDITIONS satisfaction
        nextt1.imprint();
        nextt2.imprint();
        nextt3.imprint();
        nextt4.imprint();
        nextt5.imprint();
        nextt6.imprint();
        nextt7.imprint();


//PRECONDITION
        for(int k=0; k<7; k++)
        {
            if(k==index[k])
            {
                player1[k]=initial;
            }
        }
        distribution(player1,array_of_tiles,initial,current);
        for(int i=0; i<7; i++)
        {
            detection[i]=0;
            center_rectangle_x[i]=300+30*i;
            center_rectangle_y[i]=630;
        }

//computer move

    }
    wait(1000);
}
