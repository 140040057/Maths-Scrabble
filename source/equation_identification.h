bool identify(char current_array[][17], char previous_array[][17] , char default_in, int& score)
// where default_in is the default element kept on the array boxes!
{

    int a,b,c,d,x = 200,y = 200; // a,b,c,d will record the exptremities of the equation. x,y record the first point of difference between first and last baord
    bool flag = false;
    for(int i=0; i<17; i++)
    {
        for(int j=0; j<17; j++)
        {
            if(current_array[i][j]!=previous_array[i][j])
            {
                flag = true;
                x = i;
                y = j;
                break;
            }
            if( flag ) break;
        }
        if( flag ) break;
    }

    a = b = x;
    c = d = y;

    while(current_array[a][y]!=default_in) a++; // if along horizontal, then we get right farthest corner
    while(current_array[b][y]!=default_in) b--; // if along horizontal, then we get left farthest corner
    while(current_array[x][c]!=default_in) c++; // if along vertical, we get bottommost tile
    while(current_array[x][d]!=default_in) d--; // if along vertical, we get topmost tile

    bool truth_value = false;
    if(c-1==d+1 && a-1!=b+1)
    {
        for(int i=b+1; i<a; i++)
        {
            if(previous_array[i][c-1]!= default_in)
            {
                truth_value = true;
                break;
            }
        }
        if(truth_value)
        {
            if(set_equation(a-1,b+1,c-1,d+1,current_array))
            {
                score = score_calc(a-1,b+1,c-1,d+1,current_array);
                return true;
            }

        }
        else
        {
            return false;
        }
    }

    else
    {
        for(int i=d+1; i<c; i++)
        {
            if(previous_array[a-1][i]!= default_in)
            {
                truth_value = true;
                break;
            }
        }
        if(set_equation(a-1,b+1,c-1,d+1,current_array))
        {
            score = score_calc(a-1,b+1,c-1,d+1,current_array);
            return true;
        }
        else
        {
            return false;
        }
    }
}
