//
//  MainScene.h
//  HelloWorld
//
//  Created by 刘磊 on 15/6/18.
//
//

#ifndef __HelloWorld__MainScene__
#define __HelloWorld__MainScene__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;

class MainScene: public Layer
{
    
public:
    virtual bool init();
    static Scene * scene();
    CREATE_FUNC(MainScene);
};

#endif /* defined(__HelloWorld__MainScene__) */
