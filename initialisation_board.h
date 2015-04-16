

void initialisation(char a[][17]){


//initialisation of all the blocks on the board



                              //for(i=1;i<=15;i++)
                                              // {a[i][0]=outer;
                                                //a[i][16]=outer;
                                                //                   for (j=1;j<=15;j++)
                                               //{a[i][j]=inner;//Initialising the Game Board
                                                //a[0][j]= outer;
                                                //a[16][j]=outer;

   //}}

                          for(int i = 0 ;i<17;i++)
                          {
                          	for(int j = 0 ;j<17;j++)
                          	{
                          		a[i][j] = 'a';
                          	}
                          }

                          a[8][8]='b';
}
