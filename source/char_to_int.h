int char_to_int(int x,int y, char current_array[][17])
{
    for(int i=0; i<10; i++)
    {
        if(current_array[x][y] == scrabble_tile[i].tile_name)
        {
            return scrabble_tile[i].tile_int;
        }
    }
}
