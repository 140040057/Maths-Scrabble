// function to check value multiplier on board
int board_value(int i, int j)
{
    if((i==1&&j==1)||(i==15&&j==15)||(i==1&&j==15)||(i==15&&j==1)||(i==8&&j==1)||(i==1&&j==8)||(i==15&&j==8)||(i==8&j==15))
    {
        return 3;
    }
    else if((i==j||(i==16-j))&&(i>1)&&(i<15)&&(j>1)&&(j<15))
    {
        return 2;
    }
    else return 1;
}
