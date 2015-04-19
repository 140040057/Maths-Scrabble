
void computer_move1(char actual_board[17][17] , int &computer_move_detector, tile computer_tiles[], tile &initial, char temp_board[17][17] ,int &computer_score)
{
    bool flag=0;
    int size_of_eqn,start_point,i,fixed_tiles,final_size,final_column;
    char equation[8];
    bool direction;                   //'0' means horizontal and '1' means vertical

    int factorial[] = {1,1,2,6,24,120,720,5040};

    char temp_current_board[17][17];
    char temp_last_board[17][17];
    initialisation(temp_current_board);
    initialisation(temp_last_board);



    for(size_of_eqn=7 ; size_of_eqn >= 3 ; size_of_eqn=size_of_eqn-2)        //loop that changes the size of equation
    {

        for(int row=1 ; row <= 15 ; row++)                           //loop that changes the row in which equation will be formed
        {
            for(start_point=1; start_point <= 15 - size_of_eqn + 1 ; start_point++)    //loop that changes the start point of equation
            {
                fixed_tiles = 0;
                for(i=0 ; i < size_of_eqn ; i++)
                {
                    if (actual_board[start_point + i][row] != 'a')
                    {
                        fixed_tiles++;

                    }
                }

                if(fixed_tiles)
                {
                    for(int N = 1; N < 5040 ; N = N + factorial[fixed_tiles + 7 - size_of_eqn])
                    {
                        int index_computer[7]= {-1,-1,-1,-1,-1,-1,-1};


                        copy_array(actual_board,temp_current_board);
                        copy_array(actual_board,temp_last_board);
                        for(int j=0,i=0 ; i < size_of_eqn ; i++)        //loop that forms equation
                        {

                            if(temp_current_board[start_point+i][row]=='a' )
                            {
                                equation[i] = permutation(N,computer_tiles).e[j].tile_name;
                                temp_current_board[start_point+i][row]=equation[i];
                                for(int k=0; k<7; k++)
                                {
                                    if(computer_tiles[k].tile_name==equation[i])
                                    {
                                        index_computer[k]=k;
                                        break;
                                    }
                                }

                                j++;
                            }
                        }
                        int score;
                        if(identify(temp_current_board,temp_last_board,'a',score))
                        {
                            computer_score=computer_score+score;

                            flag=1;
                            direction=0;

                            copy_array(temp_current_board,actual_board);
                            copy_array(actual_board,temp_board);
                            for(int k=0; k<7; k++)
                            {
                                if(index_computer[k]==k)
                                {
                                    computer_tiles[k]=initial;
                                }
                            }



                        }
                        if(flag==1) break;
                    }
                }
                if(flag==1) break;
            }
            if(flag==1) break;
        }
        if(flag==1) break;
    }




    if(flag==0)
    {
        for(size_of_eqn=7 ; size_of_eqn >= 3 ; size_of_eqn=size_of_eqn-2)        //loop that changes the size of equation
        {
            for(int column=1 ; column <= 15 ; column++)                           //loop that changes the column in which equation will be formed
            {
                for(start_point=1; start_point <= 15 - size_of_eqn + 1 ; start_point++)    //loop that changes the start point of equation
                {
                    fixed_tiles = 0;
                    for(i=0 ; i < size_of_eqn ; i++)
                    {
                        if (actual_board[column][start_point + i] != 'a')
                        {
                            fixed_tiles++;
                        }

                    }
                    if(fixed_tiles)
                    {
                        for(int N = 1; N < 5040 ; N = N + factorial[fixed_tiles + 7 - size_of_eqn])
                        {
                            int index_computer[7]= {-1,-1,-1,-1,-1,-1,-1};
                            copy_array(actual_board,temp_current_board);
                            copy_array(actual_board,temp_last_board);



                            for( int j=0,i=0 ; i < size_of_eqn ; i++)
                            {

                                if(temp_current_board[column][start_point+i]=='a')
                                {
                                    equation[i] = permutation(N,computer_tiles).e[j].tile_name;
                                    temp_current_board[column][start_point+i]=equation[i];
                                    for(int k=0; k<7; k++)
                                    {
                                        if(computer_tiles[k].tile_name==equation[i])
                                        {
                                            index_computer[k]=k;
                                            break;
                                        }
                                    }
                                    j++;
                                }
                            }

                            int score;
                            if(identify(temp_current_board,temp_last_board,'a',score))
                            {
                                computer_score=computer_score+score;
                                flag=1;
                                direction=1;
                                final_column=column;
                                final_size=size_of_eqn;
                                copy_array(temp_current_board,actual_board);
                                copy_array(actual_board,temp_board);
                                for(int k=0; k<7; k++)
                                {
                                    if(index_computer[k]==k)
                                    {
                                        computer_tiles[k]=initial;
                                    }
                                }






                            }
                            if(flag==1) break;
                        }
                    }
                    if(flag==1) break;
                }
                if(flag==1) break;
            }
            if(flag==1) break;
        }
    }

    if(flag==1)
    {
        computer_move_detector = 1;     //means that a equation is possible for computer's move


//applying final equation
    }
    else
    {
        computer_move_detector = 0;         //it means that computer can't form a valid equation so it will exchange a tile and pass its turn
    }


}
