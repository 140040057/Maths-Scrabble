int number_x(int start, int end, int constant, char current_array[][17])
{
    int expression_length = end - start + 1;
    int sum = 0;
    for(int i=start,j=1; i<end+1; i++,j++)
    {
        sum = sum + pow(10,expression_length-j)*char_to_int(i,constant,current_array);
    }
    return sum;
}
