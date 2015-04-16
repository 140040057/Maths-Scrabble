


// this piece of code has to be included in main program.
//char array_of_tiles[111];
//tile_initialisation(array_of_tiles,111);   //initilisation of array_of_tiles



//the function below checks on each player_tile or the computer_tile(each of the seven tiles it has) .
// if its equal to the default set value, it will assign a random number to it from array_of_tiles and that value on the array will become the default value.
//so that that no. is not assigned in the game again.


void  distribution(tile *a,tile *b,tile c,int &n)     //a= player1,b=array_of_tiles,c=initial,n=current on array_of_tile,
{


    for(int i=0; i<7; i++)
    {
        if(b[n].tile_name==c.tile_name&&b[n].tile_quantity==c.tile_quantity&&b[n].tile_value==c.tile_value&&b[n].tile_display==c.tile_display) break;
        if(a[i].tile_name==c.tile_name&&a[i].tile_quantity==c.tile_quantity&&a[i].tile_value==c.tile_value&&a[i].tile_display==c.tile_display)                   //whenever in the main program disrtibution
            //of tile takes place "current" should be increased by 1.
        {
            a[i]=b[n];
            b[n]=c;
            n=n+1;
        }                                                                                                //initially its 0.

        //max value of current is max no. of tiles.
        //initial is also a const struct of type tile.
    }
}

