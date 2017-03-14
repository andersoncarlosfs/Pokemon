//http://stackoverflow.com/questions/23710829/why-is-my-obj-parser-rendering-meshes-like-this
//http://www.opengl-tutorial.org/beginners-tutorials/tutorial-7-model-loading/
//https://en.wikibooks.org/wiki/OpenGL_Programming/Modern_OpenGL_Tutorial_Load_OBJ
//https://www.d.umn.edu/~ddunham/cs5721f07/schedule/resources/lab_opengl07.html
//http://netization.blogspot.fr/2014/10/loading-obj-files-in-opengl.html
//https://www.raywenderlich.com/48293/how-to-export-blender-models-to-opengl-es-part-1

//https://www.opengl.org/discussion_boards/showthread.php/171931-Loading-OBJ-and-MTL-files

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pokemon.cpp
 * Author: lsdfusion
 * 
 * Created on 10 March 2017, 14:03
 */

#include "pokemon.h"

#include <iostream>     // std::iostream
#include <fstream>      // std::iostream
#include <string>       // std::string
#include <regex>        // std::regex

/*
const regex regex_comment("^(\\s*)?(#)");
const regex regex_vertex("^(\\s*)?(v\\s)");
const regex regex_texture("^(\\s*)?(vt\\s)");
const regex regex_normal("^(\\s*)?(vn\\s)");
const regex regex_face("^(\\s*)?(f\\s)");
//http://stackoverflow.com/questions/15814592/how-do-i-include-negative-decimal-numbers-in-this-regular-expression
const regex regex_numeric("-?\\d*\\.{0,1}\\d+");

const regex_token_iterator<string::iterator> regex_iterator_end;
 */

Pokemon::Pokemon(const char* file) {
}

/*
Pokemon::Pokemon(const char* file) {
    ifstream stream(file, ios::in);
    if (stream.is_open()) {
        string line;
        while (getline(stream, line)) {
            if (regex_search(line, regex_comment)) {
                continue;
            }
            regex_token_iterator<std::string::iterator> iterator(line.begin(), line.end(), regex_numeric);
            if (regex_search(line, regex_vertex)) {
                vec3 vertex;
                vertex.x = stof(*iterator++);
                vertex.y = stof(*iterator++);
                vertex.z = stof(*iterator++);
                vertexes.push_back(vertex);
                continue;
            }
            if (regex_search(line, regex_texture)) {
                vec2 texture;
                texture.x = stof(*iterator++);
                texture.y = stof(*iterator++);
                textures.push_back(texture);
                continue;
            }
            if (regex_search(line, regex_normal)) {
                vec3 normal;
                normal.x = stof(*iterator++);
                normal.y = stof(*iterator++);
                normal.z = stof(*iterator++);
                normals.push_back(normal);
                cout << normal.z << endl;
                continue;
            }
            if (regex_search(line, regex_face)) {
                while (iterator != regex_iterator_end) {
                    faces.push_back(stoi(*iterator++));
                }
                continue;
            }
        }
    } else {
        cout << "Can not open the file" << endl;
    }
}
 */

Pokemon::~Pokemon() {
}