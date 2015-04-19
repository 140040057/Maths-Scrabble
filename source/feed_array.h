//copies current into last and then new entery in current;
void feed_array(int* i,int p_x[7],int p_y[7],char b[17][17],char a[17][17],int x[16][16],int y[16][16],tile t[])

//i=index of player1 rectangle ;p_x,p_y= center_rectangle_x,y;
//a= last board; b= current board; t= player_tile
//x,y= center_on_board_x,y;
{
    copy_array(b,a); //copies b into a
    for(int j=0; j<7; j++)
    {
        if(j==i[j])
        {
            for(int z=0; z<17; z++)
            {
                for(int w=0; w<17; w++)
                {
                    if(rectangle_detect(p_x[i[j]],p_y[i[j]],x[z][w],y[z][w],30,30))
                    {
                        b[z][w]=t[j].tile_name;
                    }
                }
            }
        }
    }

}
