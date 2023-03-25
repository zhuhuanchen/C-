//
// Created by zhc on 2023/3/25.
//

#include "worker.h"
#pragma  once

#ifndef INC_3_BOSS_H
#define INC_3_BOSS_H

#endif //INC_3_BOSS_H



class Boss:public Worker
{
public:

    //构造函数
    Boss(int id,std::string name,int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual std::string getDeptName();
};

