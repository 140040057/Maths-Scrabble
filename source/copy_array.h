void copy_array(char a[][17],char b[][17])//copy a into b
{
    for(int i=0; i<17; i++)
    {
        for(int j=0; j<17; j++)
        {
            b[i][j]=a[i][j];
        }
    }
}
