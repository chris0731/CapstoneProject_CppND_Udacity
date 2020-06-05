#ifndef BONUS_H
#define BONUS_H

#include "SDL.h"

class Bonus{
    public:

    Bonus(int x, int y) : location(SDL_Point {x,y}) {}
    Bonus() : location(SDL_Point {-1,-1}) {}

    SDL_Point GetLocation() const { return location;}

    void SetLocation(int x1, int y1){
        location.x = x1;
        location.y = y1;
    }

    private:
    
    SDL_Point location;
};

#endif