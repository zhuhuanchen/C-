//
// Created by zhc on 2023/3/25.
//

#include "worker.h"
#pragma  once

#ifndef INC_3_EMPLOYEE_H
#define INC_3_EMPLOYEE_H

#endif //INC_3_EMPLOYEE_H

class Employee:public Worker
{
public:

    //构造函数
    Employee(int id,std::string name,int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual std::string getDeptName();
};



