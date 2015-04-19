bool identify(char current_array[][17], char previous_array[][17] , char default_in, int& score)
// where default_in is the default element kept on the array boxes!
{
    //cout << endl << "a." << " " << previous_array[6][97] << "b. " << previous_array[3][2] << "c. "<< previous_array[3][4] << "d. "<< previous_array[3][5] << "e. "<< previous_array[3][6] << " ";
    //cout << endl << "p." << " " << current_array[6][97] << "q. " << current_array[3][2] << "r. "<< current_array[3][4] << "s. "<< current_array[3][5] << "t. "<< current_array[3][6] << " ";


    int a,b,c,d,x = 200,y = 200;
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

    //cout << endl << x << " " << y << endl;
    a = b = x;
    c = d = y;

    while(current_array[a][y]!=default_in) a++; // if along horizontal, then we get right farthest corner
    while(current_array[b][y]!=default_in) b--; // if along horizontal, then we get left farthest corner
    while(current_array[x][c]!=default_in) c++; // if along vertical, we get bottommost tile
    while(current_array[x][d]!=default_in) d--; // if along vertical, we get topmost tile
    //cout << a-1 << " " << b+1 << " " << c-1 << " " << d+1 << " " << endl;

    bool truth_value = false;
    if(c-1==d+1 && a-1!=b+1)
    {
        for(int i=b+1; i<a;i++)
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
        else {cout << "second last wala false " << endl; return false;}
    }

    else
    {
        for(int i=d+1; i<c;i++)
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
        else {return false;}
    }
}
