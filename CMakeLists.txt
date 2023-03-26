cmake_minimum_required(VERSION 3.20)
project(untitled4)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled4 main.cpp Patient.cpp Patient.h VIP_Patient.cpp VIP_Patient.h Queue.h ServerFail/TServer.h ServerFail/SServer.cpp ServerFail/SServer.h ServerFail/includes.h ServerFail/SClients.h ClientServerApp/CServer.h)
