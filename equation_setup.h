bool set_equation(int b, int a, int d, int c, char current_array[][17])
{
    int x=a, index=0, location = 0, pos_equal_sign[2] = {10,10},pos_index=0;
    float numbers[10];
    int operators[8];
//   bool negative_integer = false;
    for(int i=0; i<5; i++)
    {
        operators[i] = NULL;
    }
    // x corresponds to the value where opeartor is found
    // y corresponds to the value from where new number starts
    if(c==d && a!=b)
    {
        int y=a;
        if(current_array[a][c] == '=' || current_array[a][c] == '+' || current_array[a][c] == '-'||current_array[a][c] == 'x'||current_array[a][c] == '÷')
        {
            //cout << endl << "Operator Error" << endl;
            return false;
        }

        else
        {
            for(int i=a; i<b+1; i++)
            {
                if(current_array[i][c] == '=' || current_array[i][c] == '+' || current_array[i][c] == '-'||current_array[i][c] == 'x'||current_array[i][c] == '÷')
                {
                    x = i;
                    if(current_array[i+1][c] == '=' || current_array[i+1][c] == '+' || current_array[i+1][c] == '-'||current_array[i+1][c] == 'x'||current_array[i+1][c] == '÷')
                    {
                        //cout << endl << "Operator Error" << endl;
                        return false;
                    }

                    operators[location] = x;
                    if(current_array[i][c] == '=')
                    {
                        pos_equal_sign[pos_index] = location;
                        pos_index++;
                    }

                    location++;
                    if(x-y>1)
                    {
                        if(current_array[y][c]==0)
                        {
                            return false;
                        }
                    }
                    numbers[index] = number_x(y,x-1,c,current_array);
                    index++;
                    y = x+1;
                    //   negative_integer = false;
                }
            }
            if(b-y+1>1)
            {
                if(current_array[y][c]==0)
                {
                    return false;
                }
            }
            numbers[index] = number_x(y,b,c,current_array);
        }

        if(current_array[b][c] == '=' || current_array[b][c] == '+' || current_array[b][c] == '-'||current_array[b][c] == 'x'||current_array[b][c] == '÷')
        {
            //cout << endl << "Operator Error" << endl;
            return false;
        }
    }

    if(a==b && c!=d)
    {
        int y=c;
        if(current_array[a][c] == '=' || current_array[a][c] == '+' || current_array[a][c] == '-'||current_array[a][c] == 'x'||current_array[a][c] == '÷')
        {
            // cout << endl << "Operator Error" << endl;
            return false;
        }

        else
        {
            for(int i=c; i<d+1; i++)
            {
                if(current_array[a][i] == '=' || current_array[a][i] == '+' || current_array[a][i] == '-'||current_array[a][i] == 'x'||current_array[a][i] == '÷')
                {

                    //cout << endl << "1.present" << endl;
                    x = i;
                    if(current_array[a][i+1] == '=' || current_array[a][i+1] == '+' || current_array[a][i+1] == '-'||current_array[a][i+1] == 'x'||current_array[a][i+1] == '÷')
                    {
                        //cout << endl << "Operator Error" << endl;
                        return false;
                    }
                    //cout << endl << "1.2." << x << endl;
                    operators[location] = x;
                    if(current_array[a][i] == '=')
                    {
                        pos_equal_sign[pos_index] = location;
                        pos_index++;
                    }
                    location++;
                    if(x-y>1)
                    {
                        if(current_array[a][y]==0)
                        {
                            return false;
                        }
                    }
                    numbers[index] = number_y(y,x-1,a,current_array);
                    index++;
                    y = x+1;
                }
            }
            if(d-y+1>1)
            {
                if(current_array[a][y]==0)
                {
                    return false;
                }
            }
            numbers[index] = number_y(y,d,a,current_array);
        }
        if(current_array[b][d] == '=' || current_array[b][d] == '+' || current_array[b][d] == '-'||current_array[b][d] == 'x'||current_array[b][d] == '÷')
        {
            // cout << endl << "Operator Error" << endl;
            return false;
        }
    }

    //cout << endl << a << " " << b << " " << c << " " << d << " " << endl;
    //cout << endl << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << " " << endl;
    //cout << endl << operators[0] << " " << operators[1] << " " << operators[2] << " " << endl;
   // cout << endl << "equal here " << pos_equal_sign[0]<< endl;
    if(pos_equal_sign[0]==10 || pos_equal_sign[1]!=10)
    {
        return false;
    }
    else return validate(a,b,c,d,operators,pos_equal_sign[0],numbers,current_array);
}
