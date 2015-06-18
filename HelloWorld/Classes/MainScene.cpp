//
//  MainScene.cpp
//  HelloWorld
//
//  Created by 刘磊 on 15/6/18.
//
//

#include "MainScene.h"
Scene * MainScene::scene()
{
    Scene * scene = Scene::create();
    MainScene * layer = MainScene::create();
    scene->addChild(layer);
    return scene;
}
bool MainScene::init()
{
    if (!Layer::init()) {
        return false;
    }
    return true;
}