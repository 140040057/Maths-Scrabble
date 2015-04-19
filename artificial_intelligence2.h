void computer_move(char actual_board[17][17] , int &computer_move_detector, tile computer_tiles[], tile &initial, char temp_board[17][17] )
{
    bool flag=0;
    int size_of_eqn,start_point,i,fixed_tiles,final_start_point,final_size,max_score,score_of_move,final_row,final_column;
    char equation[8],final_equation[8];
    bool direction;                   //'0' means horizontal and '1' means vertical
    //char test_board[17][17];
    int factorial[] = {1,1,2,6,24,120,720,5040};
    max_score = 0;

//first checking for all the horizontal equations
    for(size_of_eqn=3 ; size_of_eqn <= 7 ; size_of_eqn=size_of_eqn+2)        //loop that changes the size of equation
    {
        //cout<<"    hi5    ";
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
//cout<<"fixedtiles"<<fixed_tiles<<endl;
                if(fixed_tiles)
                {
                    for(int N = 1; N < 5040 ; N = N + factorial[fixed_tiles + 7 - size_of_eqn])
                    {  char test_board[17][17];
                        initialisation(test_board);
                        for(int p=0 ; p<17 ; p++)
                        {
                            for(int q=0 ; q<17 ; q++)
                            {
                                test_board[p][q] = actual_board[p][q];
                            }
                        }
//cout<<"startpoint"<<start_point<<endl;
                        for(int j=0,i=0 ; i < size_of_eqn ; i++)        //loop that forms equation
                        {

                            if(actual_board[start_point + i][row] != 'a')
                            {
                                equation[i] = actual_board[start_point + i][row];
                               // test_board[start_point + i][row] = equation[i];
                            }
                            else
                            {
                                equation[i] = permutation(N,computer_tiles).e[j].tile_name;
                                test_board[start_point + i][row] = equation[i];
                                j++;
                            }
                        }

                        if(set_equation(start_point, start_point + size_of_eqn - 1, row, row, test_board))
                        {

                            //score_of_move = calc_score(start_point,start_point+size_of_eqn-1,row,row,test_board);

                            flag=1;

                            if(flag)
                            {
                                int k = 0;
                                max_score = score_of_move;
                                //final_size = size_of_eqn;
                                //final_row=row;
                                while(k < final_size)
                                {
                                    final_equation[k] = equation[k];
                                    k++;
                                }
                                direction = 0;
                                final_start_point = start_point;
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

//now for vertical equations
    if(flag==0){
    for(size_of_eqn=3 ; size_of_eqn <= 7 ; size_of_eqn=size_of_eqn+2)        //loop that changes the size of equation
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
                    {   char test_board[17][17];
                        initialisation(test_board);
                        for(int p=0 ; p<17 ; p++)
                        {
                            for(int q=0 ; q<17 ; q++)
                            {
                                test_board[p][q] = actual_board[p][q];
                            }
                        }
                        for( int j=0,i=0 ; i < size_of_eqn ; i++)
                        {
                            if(actual_board[column][start_point + i] != 'a')
                            {
                                equation[i] = actual_board[column][start_point + i];
                                test_board[column][start_point + i] = equation[i];
                            }
                            else
                            {
                                equation[i] = permutation(N,computer_tiles).e[j].tile_name;
                                test_board[column][start_point + i] = equation[i];
                                j++;
                            }
                        }
//                        cout<<endl;
//                        for(int i=0;i<size_of_eqn;i++)
//                        {
//                            cout<<equation[i];
//                        }
//                        cout<<endl;
                        if(set_equation(column , column , start_point , start_point + size_of_eqn - 1, test_board))
                        {cout<< "  hihi  ";
                            score_of_move = calc_score(column,column,start_point,start_point+size_of_eqn-1,test_board);

                            flag=1;


                            if(flag)
                            {
                                int k=0;
                                max_score=score_of_move;
                                //final_size = size_of_eqn;
                                //final_row=row;
                                while(k < final_size)
                                {
                                    final_equation[k] = equation[k];
                                    k++;
                                }
                                direction = 1;
                                final_start_point = start_point;

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

    //if(max_score != 0)
    if(flag==1)
    {
        computer_move_detector = 1;     //means that a equation is possible for computer's move
//applying final equation
        if(direction==0)                //if equation with max score is horizontal
        {
            for(i=0 ; i < final_size ; i++)
            {
                if(actual_board[final_start_point][final_row] == 'a')
               {
                    temp_board[final_start_point + i][final_row] = final_equation[i];
                }
                actual_board[final_start_point + i][final_row] = final_equation[i];
            }
        }
        else                            //if equation with max score is vertical
        {
            for(i=0 ; i < final_size ; i++)
            {
                if(actual_board[final_column][final_start_point + i] == 'a')
                {
                    temp_board[final_column][final_start_point + i] = final_equation[i];
                }
                actual_board[final_column][final_start_point + i] = final_equation[i];
            }
        }
    }
    else
    {
        computer_move_detector = 0;         //it means that computer can't form a valid equation so it will exchange a tile and pass its turn
    }

}

