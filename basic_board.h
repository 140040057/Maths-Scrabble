////this part of code will be included in main_program itself
//#include"rectangle_detection.h"
//
//
//void basic_board(tile* a)
//
//
//{
//    initCanvas("scrabble",750,700);
//
//        Rectangle r1(165,125,30,30);
//    r1.imprint();
//
//    for(int i=0;i<=15;i++)
//    {
//        r1.move(30,0);r1.imprint();
//    }
//
//
//  for (int j=0;j<=390;j=j+30)
//  {
//      r1.moveTo(165,155+j);r1.imprint();
//
//    for(int i=0;i<=15;i++)
//    {
//        r1.move(30,0);r1.imprint();
//    }
//
//  }
//
//Rectangle r2(60,200,80,60); Text t2(60,200,"PASS");
//Rectangle r3(60,320,80,60); Text t3(60,320,"EXCHANGE");
//Rectangle r4(60,440,80,60); Text t4(60,440,"SUBMIT");
//
////player1.tiles
//Rectangle r5(300,630,30,30);Text t5(300,630,a[0].tile_display);
//Rectangle r6(330,630,30,30);Text t6(330,630,a[1].tile_display);
//Rectangle r7(360,630,30,30);Text t7(360,630,a[2].tile_display);
//Rectangle r8(390,630,30,30);Text t8(390,630,a[3].tile_display);
//Rectangle r9(420,630,30,30);Text t9(420,630,a[4].tile_display);
//Rectangle r10(450,630,30,30);Text t10(450,630,a[5].tile_display);
//Rectangle r11(480,630,30,30);Text t11(480,630,a[6].tile_display);
//
//
//
//Rectangle r12(250,50,80,60); Text t12(250,50,"computer");
//
//Rectangle r13(550,50,80,60); Text t13(550,50,"player");
//
//
////movement
//    XEvent event;
//
//
//   short lastx, lasty=0;
//   while(1)
//   {
//       nextEvent(event);
// bool detection[7];int center_rectangle_x[7],center_rectangle_y[7];
//
//       if (mouseButtonPressEvent(event))
//       {   for(int i=0;i<7;i++)
//            {
//                center_rectangle_x[i]=300+30*i;center_rectangle_y[i]=630;
//                detection[i]=rectangle_detect(event.xmotion.x,event.xmotion.y,center_rectangle_x[i],center_rectangle_y[i],30,30);
//
//            }
//
//       }
//
//
//        lastx=event.xmotion.x;
//        lasty=event.xmotion.y;
//
//
//
//
//      if (mouseDragEvent(event))
//       {   if(detection[0])
//           {r5.moveTo(event.xbutton.x,event.xbutton.y);
//            t5.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[0]=event.xbutton.x;
//           center_rectangle_y[0]=event.xbutton.y;}
//
//
//       else    if(detection[1])
//           {r6.moveTo(event.xbutton.x,event.xbutton.y);
//           t6.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[1]=event.xbutton.x;
//           center_rectangle_y[1]=event.xbutton.y;}
//
//
//
//
//       else    if(detection[2])
//           {r7.moveTo(event.xbutton.x,event.xbutton.y);
//           t7.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[2]=event.xbutton.x;
//           center_rectangle_y[2]=event.xbutton.y;}
//
//    else    if(detection[3])
//           {r8.moveTo(event.xbutton.x,event.xbutton.y);
//           t8.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[3]=event.xbutton.x;
//           center_rectangle_y[3]=event.xbutton.y;}
//
//    else    if(detection[4])
//           {r9.moveTo(event.xbutton.x,event.xbutton.y);
//           t9.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[4]=event.xbutton.x;
//           center_rectangle_y[4]=event.xbutton.y;}
//
//
//    else    if(detection[5])
//           {r10.moveTo(event.xbutton.x,event.xbutton.y);
//           t10.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[5]=event.xbutton.x;
//           center_rectangle_y[5]=event.xbutton.y;}
//
//
//   else    if(detection[6])
//           {r11.moveTo(event.xbutton.x,event.xbutton.y);
//           t11.moveTo(event.xbutton.x,event.xbutton.y);
//           lastx = event.xbutton.x;
//           lasty= event.xbutton.y;
//           center_rectangle_x[6]=event.xbutton.x;
//           center_rectangle_y[6]=event.xbutton.y;}
//
//
//
//       }
//
//
//
////code to end the turn of player1;
//if(rectangle_detect(event.xmotion.x,event.xmotion.y,60,440,80,60)){break;}
//
////code to exchange
//if(rectangle_detect(event.xmotion.x,event.xmotion.y,60,320,80,60))
//    {if(detection[0]){exchange(a,};}
//
//
//
//
//
//   }
//
//
//
//
//
//wait(1000);
//}
