
void initialisation(char a[][17])
{
//initialisation of all the blocks on the board

    for(int i = 0 ; i<17; i++)
    {
        for(int j = 0 ; j<17; j++)
        {
            a[i][j] = 'a';
        }
    }

    a[8][8]='b';
}
