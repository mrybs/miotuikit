cmake_minimum_required(VERSION 3.15)

project(cppmiotuikit
        VERSION 0.1.0
        DESCRIPTION "Miot user interface kit"
        LANGUAGES CXX)

add_executable(cppmiotuikit
        main.cpp
        Object.h
        Container.h
        Core.h
        Button.h
        File.h
        Text.h)