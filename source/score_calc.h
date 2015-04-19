// function to calculate score
int score_calc(int b, int a, int d, int c,char current_board[][17])
{
    int score = 0;
    if(c==d && a!=b)
    {
        for(int i=a; i<b+1; i++)
        {
            for(int j=0; j<15; j++)
            {
                if(current_board[i][c] == scrabble_tile[j].tile_name)
                {
                    score = score + board_value(i,c)*scrabble_tile[j].tile_value;
                }
            }
        }
    }

    else
    {
        for(int i=c; i<d+1; i++)
        {
            for(int j=0; j<15; j++)
            {
                if(current_board[a][i] == scrabble_tile[j].tile_name)
                {
                    score = score + board_value(a,i)*scrabble_tile[j].tile_value;
                    cout << endl << score << endl;
                }
            }
        }
    }
    return score;
}
