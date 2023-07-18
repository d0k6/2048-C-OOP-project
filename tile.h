#ifndef tile_h
#define tile_h

class Tile 
{
    private:
        int value;

    public:
        Tile();
        ~Tile();
        int getValue() const;
        void setValue(int newValue);
};

#endif