bool validate(int a, int b, int c, int d,int location[],int pos_equal_sign, float numbers[],char current_array[][17])
{
    float RHS=0,LHS = numbers[0];
    int j=0,k=1;
    //cout << endl << pos_equal_sign << endl;
    if(c==d && a!=b)
    {
        bool LHS_flag = true;
        for(j,k; LHS_flag; j++)
        {
            if(current_array[location[j]][c] == '+')
            {
                LHS = LHS + numbers[k];
                k++;
                continue;
            }

            if(current_array[location[j]][c] == '-')
            {
                LHS = LHS - numbers[k];
                k++;
                continue;
            }

            if(current_array[location[j]][c] == 'x')
            {
                LHS = LHS * numbers[k];
                k++;
                continue;
            }

            if(current_array[location[j]][c]== '÷')
            {
                LHS = LHS / numbers[k];
                k++;
                continue;
            }

            if(j==pos_equal_sign)
            {
                LHS_flag = false;
                break;
            }
        }


        //cout << endl <<  k << endl;
        j = pos_equal_sign + 1;
        RHS = numbers[k];
        k++;
        //cout << endl << RHS << endl;
        bool RHS_flag = true;
        for(j,k; RHS_flag , j<6; j++)
        {
            if(current_array[location[j]][c] == '+')
            {
                RHS = RHS + numbers[k];
                k++;
                continue;
            }

            if(current_array[location[j]][c] == '-')
            {
                RHS = RHS - numbers[k];
                k++;
                continue;
            }

            if(current_array[location[j]][c] == 'x')
            {
                //cout << endl << "Present" << endl;
                RHS = RHS * numbers[k];
                k++;
                continue;
            }

            if(current_array[location[j]][c]== '÷')
            {
                RHS = RHS / numbers[k];
                k++;
                continue;
            }

            if(location[j] == NULL)
            {
                RHS_flag = false;
                break;
            }
        }
    }

    if(c!=d && a==b)
    {
        bool LHS_flag = true;
        for(j,k; LHS_flag; j++)
        {
            if(current_array[a][location[j]] == '+')
            {
                LHS = LHS + numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]] == '-')
            {
                LHS = LHS - numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]] == 'x')
            {
                LHS = LHS * numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]]== '÷')
            {
                LHS = LHS / numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]] == '=')
            {
                LHS_flag = false;
                break;
            }
        }


       // cout << endl << "2" << k << endl;
        j = pos_equal_sign + 1;
        RHS = numbers[k];
        k++;
       // cout << endl << "3" << RHS << endl;
        bool RHS_flag = true;
        for(j,k; RHS_flag , j<6; j++)
        {
            if(current_array[a][location[j]] == '+')
            {
                RHS = RHS + numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]] == '-')
            {
                RHS = RHS - numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]] == 'x')
            {
                //cout << endl << "Present" << endl;
                RHS = RHS * numbers[k];
                k++;
                continue;
            }

            if(current_array[a][location[j]]== '÷')
            {
                RHS = RHS / numbers[k];
                k++;
                continue;
            }

            if(location[j] == NULL)
            {
                RHS_flag = false;
                break;
            }
        }
    }

    //cout << endl << LHS << " & " << RHS << endl;
    if(LHS == RHS)
    {
        //cout << "Correct Equation";
        return true;
    }

    else
        {
            //cout << "Incorrect Equation";
            return false;
        }
}
