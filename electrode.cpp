/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   electrode.cpp
 * Author: deboramorita
 * 
 * Created on March 15, 2017, 1:41 AM
 */

#include "electrode.h"

Electrode::Electrode(char* file) : Pokemon(file) {

    this->material = Material::red;
    
    this->scale.x = 10;
    this->scale.y = 10;
    this->scale.z = 10;

    this->position.x = 2.4;
    this->position.y = 1;
    this->position.z = -2;

    this->rotation.x = 1;
    this->rotation.y = 1;
    this->rotation.z = 0;
    this->rotation.w = -27.5;

}

Electrode::~Electrode() {
}

