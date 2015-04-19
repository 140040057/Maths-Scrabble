
// shuffling numbers between (0,n-1) both inclusive and storing them into array b[];

void tile_initialisation(tile *z,int n)
{




    int a[700],b[n];
    srand(time(0));

    for(int i=0; i<n;)
    {
        a[i]= rand()%n;

        bool c= false;
        for(int j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                c=c||true;
            }
        }

        if(!c)
        {
            b[i]=a[i];
            i=i+1;
        }
    }

    //assignment of values to array_of_tiles for gameplay;


    int j=0;
    for (int i=0; i<15; i++)
    {
        if(scrabble_tile[i].tile_quantity>0)
        {
            for(int k=0; k<scrabble_tile[i].tile_quantity; k++)
            {
                z[b[j]]= scrabble_tile[i];
                j++;
            }

        }
    }





}

