struct arrangement
{
    tile e[7];
};
arrangement permutation(int N, tile orig_array[])
{
    arrangement output;
    tile array[7];
    array[0] = orig_array[0];
    array[1] = orig_array[1];
    array[2] = orig_array[2];
    array[3] = orig_array[3];
    array[4] = orig_array[4];
    array[5] = orig_array[5];
    array[6] = orig_array[6];
    int i;

    i = (N-1)/720;
    output.e[0] = array[i];
    repeat(6-i)
    {
        array[i] = array[i+1];
        i++;
    }
    N = N%720;
    i = (N-1)/120;
    output.e[1] = array[i];
    repeat(5-i)
    {
        array[i] = array[i+1];
        i++;
    }
    N = N%120;
    i = (N-1)/24;
    output.e[2] = array[i];
    repeat(4-i)
    {
        array[i] = array[i+1];
        i++;
    }
    N = N%24;
    i = (N-1)/6;
    output.e[3] = array[i];
    repeat(3-i)
    {
        array[i] = array[i+1];
        i++;
    }
    N = N%6;
    i = (N-1)/2;
    output.e[4] = array[i];
    repeat(2-i)
    {
        array[i] = array[i+1];
        i++;
    }
    N = N%2;
    if(N==1)
    {
        output.e[5] = array[0];
        output.e[6] = array[1];
    }
    else
    {
        output.e[6] = array[0];
        output.e[5] = array[1];
    }


    return output;
}
