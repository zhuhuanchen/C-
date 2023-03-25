//
// Created by zhc on 2023/3/25.
//
#pragma  once
#include <string>

#ifndef INC_3_WORKER_H
#define INC_3_WORKER_H

#endif //INC_3_WORKER_H

//职工抽象基类
class Worker
{
public:

    //显示个人信息 为什么是纯虚函数呢。
    virtual void showInfo() = 0;
    //获取岗位名称
    virtual std::string getDeptName() = 0;

    int m_Id; //职工编号
    std::string m_Name; //职工姓名
    int m_DeptId; //职工所在部门名称编号

};
