//
// Created by zhc on 2023/3/25.
//


#include <iostream>
#include "boss.h"

Boss::Boss(int id, std::string name, int dId) {
    this->m_Id = id;  //感觉这个this可以去掉
    this->m_Name = name;
    this->m_DeptId = dId;
}

void Boss::showInfo() {
    std::cout<<"职工编号:"<<this->m_Id
             <<" \t职工姓名:" <<this->m_Name
             <<" \t岗位:"<<this->getDeptName()
             <<" \t岗位职责:管理公司所有事务"<<std::endl;
}

std::string Boss::getDeptName() {
    return std::string("总裁");
}

