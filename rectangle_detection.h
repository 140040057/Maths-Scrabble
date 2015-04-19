bool rectangle_detect(int user_x,int user_y,int cx,int cy,int lx,int ly)
{
    if(cx-lx/2<=user_x && cx+lx/2>=user_x && cy-ly/2<=user_y && cy+ly/2>= user_y)
    {
        return true;
    }

    else return false;
}
