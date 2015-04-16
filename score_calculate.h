int calc_score(int start_x, int end_x, int start_y, int end_y, char current_array[][17])
{
    int sum = 0;
    if(start_x==end_x && start_y != end_y)
    {
        for(int i = start_y; i<end_y+1; i++)
        {
            for(int j = 0; j<15;j++)
            {
                if(current_array[start_x][i] == scrabble_tile[j].tile_name)
                {
                    sum = sum + scrabble_tile[j].tile_value;
                }
            }
        }
    }

    else if(start_x!=end_x && start_y == end_y)
    {
        for(int i = start_x; i<end_x+1; i++)
        {
            for(int j = 0; j<15;j++)
            {
                if(current_array[i][start_y] == scrabble_tile[j].tile_name)
                {
                    sum = sum + scrabble_tile[j].tile_value;
                }
            }
        }
    }
}
