//
//  GameScene.h
//  HelloWorld
//
//  Created by 刘磊 on 15/6/28.
//
//

#ifndef __HelloWorld__GameScene__
#define __HelloWorld__GameScene__

#include <stdio.h>
#include "cocos2d.h"
using namespace cocos2d;

class GameScene: public Layer
{
public:
    virtual bool init();
    static Scene *scene();
    CREATE_FUNC(GameScene);
};

#endif /* defined(__HelloWorld__GameScene__) */
