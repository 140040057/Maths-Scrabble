// Important struct definition for Tiles.
struct tile
{
    char tile_name;
    int tile_quantity;
    int tile_value;
    const char* tile_display;
    int tile_int;
};

tile scrabble_tile[15] = {{'0',5,1,"0",0},{'1',10,1,"1",1},{'2',8,1,"2",2},{'3',8,1,"3",3},{'4',8,1,"4",4},{'5',8,1,"5",5},{'6',8,2,"6",6},{'7',8,2,"7",7},{'8',6,2,"8",8},{'9',5,2,"9",9},{'+',8,1,"+"},{'-',6,2,"-"},{'x',7,3,"x"},{'÷',8,5,"÷"},{'=',16,0,"="}};
