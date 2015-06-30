//
//  GameScene.cpp
//  HelloWorld
//
//  Created by 刘磊 on 15/6/28.
//
//

#include "GameScene.h"
Scene *GameScene::scene()
{
    Scene *scene = Scene::create();
    GameScene *layer = GameScene::create();
    scene->addChild(layer);
    return scene;
}

bool GameScene::init()
{
    if (!Layer::init()) {
        return false;
    }
    Sprite *sprite = Sprite::create("CloseSelected.png");
    Size winSize = Director::getInstance()->getWinSize();
    sprite->setPosition(Point(winSize.width/2, winSize.height/2));
    this->addChild(sprite);
    return true;
}

