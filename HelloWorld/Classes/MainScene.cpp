//
//  MainScene.cpp
//  HelloWorld
//
//  Created by 刘磊 on 15/6/18.
//
//

#include "MainScene.h"
#include "GameScene.h"
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
//    Size winSize = Director::getInstance()->getWinSize();
//    
//    MenuItemFont *item = MenuItemFont::create("OnAction", CC_CALLBACK_1(MainScene::onMenuItem, this));
//    Menu *menu = Menu::create(item, NULL);
//    menu->setPosition(Point(100, 600));
//    this->addChild(menu);
    
//    Sprite *bg = Sprite::create("black.png");
//    bg->setPosition(Point(300, 300));
//    this->addChild(bg);
//    
//    Sprite *yellow = Sprite::create("yellow.png");
//    
//    pt = ProgressTimer::create(yellow);
//    pt->setPosition(300, 300);
//    pt->setType(ProgressTimer::Type::BAR);
//    pt->setMidpoint(Point(0, 0));
//    pt->setBarChangeRate(Point(1, 0));
//    this->addChild(pt);
    
    
//    sp = Sprite::create("Peashooter1.tiff");
//    sp->setPosition(Point(300, 300));
//    this->addChild(sp);
    
//    Hide *hide = Hide::create();
//    sp->runAction(hide);
    
//    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Person.plist");
//    
//    SpriteBatchNode *node = SpriteBatchNode::create("Person.png");
//    this->addChild(node);
//    
//    SpriteFrame *sf1 = SpriteFrameCache::getInstance()->getSpriteFrameByName("神乐.png");
//    
//    Sprite *bg = Sprite::createWithSpriteFrame(sf1);
//    bg->setPosition(Point(200, 300));
//    node->addChild(bg);
//
//    SpriteFrame * sf2 = SpriteFrameCache::getInstance()->getSpriteFrameByName("妙.png");
//    Sprite *sg = Sprite::createWithSpriteFrame(sf2);
//    sg->setPosition(Point(300, 300));
//    node->addChild(sg);
    
    
//    Image *image = new Image();
//    image->autorelease();
//    image->initWithImageFile("Peashooter1.tiff");
//    
//    Texture2D *texture = new Texture2D();
//    texture->autorelease();
//    texture->initWithImage(image);
    
//    Sprite *plant_peashooter = Sprite::createWithTexture(texture);
    
//    SpriteFrame *frame = SpriteFrame::create("Peashooter1.tiff", Rect(0, 0, 71, 71));
//    Sprite *plant_peashooter = Sprite::createWithSpriteFrame(frame);
//    plant_peashooter->setPosition(Point(300, 300));
//    this->addChild(plant_peashooter);
    
    
//    MenuItemFont *item_start = MenuItemFont::create("开始游戏", CC_CALLBACK_1(MainScene::onMenuItem, this));
//    Menu *menu = Menu::create(item_start, NULL);
//    this->addChild(menu);
    
//    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("Person.plist");
//    SpriteFrame *spriteFrame = SpriteFrameCache::getInstance()->getSpriteFrameByName("神乐.png");
//    Sprite *sprite = Sprite::createWithSpriteFrame(spriteFrame);
//    sprite->setPosition(Point(winSize.width/2, winSize.height/2));
//    this->addChild(sprite);
    
//    Touch
//    auto dispatch = Director::getInstance()->getEventDispatcher();
//    auto elt = EventListenerTouchOneByOne::create();
//    elt->setSwallowTouches(true);
//    elt->onTouchBegan = [&](Touch* touch, Event* event) {
//        auto target = static_cast<Layer*>(event->getCurrentTarget());
//        Point locationInNode = target->convertToNodeSpace(touch->getLocation());
//        Sprite* sp1 = Sprite::create("Peashooter1.tiff");
//        sp1->setPosition(locationInNode);
//        this->addChild(sp1);
//        
//        Animation* animation = Animation::create();
//        for (int i = 1; i <= 13; i++) {
//            std::string str = StringUtils::format("Peashooter%d.tiff", i);
//            SpriteFrame* sf = SpriteFrame::create(str, Rect(0, 0, 71, 71));
//            animation->addSpriteFrame(sf);
//        }
//        animation->setDelayPerUnit(0.2);
//        animation->setLoops(-1);
//        Animate* animate = Animate::create(animation);
//        sp1->runAction(animate);
//        return true;
//    };
//    dispatch->addEventListenerWithSceneGraphPriority(elt, this);
    
//    rect
    pb = Sprite::create("PB01.png");
    pb->setPosition(Point(30, 300));
    this->addChild(pb);
    MoveBy* mb = MoveBy::create(4, Point(1136, 0));
    pb->runAction(mb);
    zom = Sprite::create("Zombie1.tiff");
    zom->setPosition(Point(1000, 300));
    this->addChild(zom);
    this->schedule(schedule_selector(MainScene::update));
    return true;
}

void MainScene::update(float)
{
    if (pb != NULL && pb->getBoundingBox().intersectsRect(zom->getBoundingBox())) {
        pb->stopAllActions();
        pb->removeFromParentAndCleanup(true);
        pb = NULL;
        FadeOut* fo = FadeOut::create(2);
        zom->runAction(fo);
    }
}

void MainScene::onMenuItem(Ref *ref)
{
    
//    ProgressTo *prot = ProgressTo::create(5, 100);
//    pt->runAction(prot);
    
//    Hide *hide = Hide::create();
//    FadeTo *ft = FadeTo::create(2, 255/2);
//    MoveTo *mt = MoveTo::create(3, Point(900, 300));
//    RotateBy *rb = RotateBy::create(5, 3600);
//    JumpBy *jb = JumpBy::create(2, Point(500, 0), 200, 1);
//    PointArray *pa = PointArray::create(5);
//    pa->addControlPoint(Point(0, 0));
//    pa->addControlPoint(Point(100, 0));
//    pa->addControlPoint(Point(100, -50));
//    pa->addControlPoint(Point(150, -50));
//    pa->addControlPoint(Point(150, 0));
//    pa->addControlPoint(Point(200, 0));
//    CardinalSplineBy *cb = CardinalSplineBy::create(5, pa, 1);
//    ccBezierConfig bc;
//    bc.controlPoint_1 = Point(400, 400);
//    bc.controlPoint_2 = Point(800, 200);
//    bc.endPosition = Point(900, 300);
//    BezierTo *bt = BezierTo::create(5, bc);
    
//    EaseBackIn *ei = EaseBackIn::create(mt);
//    DelayTime *dt = DelayTime::create(2);
//    Blink *bl = Blink::create(3, 3);
//    Sequence *sq = Sequence::create(mt, dt, bl,  NULL);
//    Spawn *spawn = Spawn::create(mt, rb, NULL);
//    CallFunc *cfunc = CallFunc::create(CC_CALLBACK_0(MainScene::onCallFunc, this));
//    Sequence *seq = Sequence::create(spawn, cfunc, NULL);
//    sp->runAction(seq);
    
//    切换场景
//    Scene *scene = GameScene::scene();
//    TransitionPageTurn *transitionscene = TransitionPageTurn::create(2, scene, false);
//    Director::getInstance()->replaceScene(transitionscene);
}

void MainScene::onCallFunc()
{
    log("action over!");
}