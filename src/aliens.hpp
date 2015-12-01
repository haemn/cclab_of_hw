//
//  aliens.hpp
//  cclab_day2
//
//  Created by Be positive Haemin on 11/9/15.
//
//

#ifndef aliens_hpp
#define aliens_hpp

#include <iostream>


#endif /* aliens_hpp */

class aliens{
public:
    
    //make your constructor
    aliens();
    
    //variables
    float posX, posY; // position
    float size; // size of our alien
    float r,g,b;//color of our alien
    float velX, velY;
    
    float width;
    float height;
    //methods
    void setup();
    void display();
    void move();
  
};