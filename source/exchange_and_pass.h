// distibution function used
//when the player on clicks on the exchange button then he has to click on the tile he wants to exchange.
//that tile goes to the end of array of tiles and he gets array_of_tile[current]
//when array_of_tile[current]= default player cant exchange.





int  exchange(tile *a,tile *b,tile &c,int i,int &n,int &m)     //a= player1[tile to be exchanged],b=array_of_tiles,
//c=initial,n=current on array_of_tile,m=last on array_of_tiles.
//initial value of m=110;
//i=index of array player1 that has to be exchanged from click

{

    if(b[n].tile_name==c.tile_name&&b[n].tile_quantity==c.tile_quantity&&b[n].tile_value==c.tile_value)
    {
        return 1;
    }


    tile temporary= a[i];
    a[i]=b[n];
    n++;
    b[m+1]=temporary;
    m++;
    return 1;
}




