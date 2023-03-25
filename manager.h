//
// Created by zhc on 2023/3/25.
//

#include "worker.h"

#ifndef INC_3_MANAGER_H
#define INC_3_MANAGER_H
#pragma  once

#endif //INC_3_MANAGER_H


class Manager:public Worker
{
public:

    //构造函数
    Manager(int id,std::string name,int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual std::string getDeptName();
};
