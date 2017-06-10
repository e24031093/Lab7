#ifndef S_BLOCK_INH_H
#define S_BLOCK_INH_H
#include <iostream>
#include "Iblock.h"
using namespace std;
char L_arr[4][4][4]={
{{'0','0','0','0'},
 {'0','1','0','0'},
 {'0','1','0','0'},
 {'0','1','1','0'}},

{{'0','0','0','0'},
 {'0','0','0','0'},
 {'0','0','1','0'},
 {'1','1','1','0'}},

{{'0','0','0','0'},
 {'0','1','1','0'},
 {'0','0','1','0'},
 {'0','0','1','0'}},

{{'0','0','0','0'},
 {'0','0','0','0'},
 {'0','1','1','1'},
 {'0','1','0','0'}}};
char T_arr[4][4][4]={
{{'0','0','0','0'},
 {'0','0','0','0'},
 {'0','1','1','1'},
 {'0','0','1','0'}},

{{'0','0','0','0'},
 {'0','0','1','0'},
 {'0','0','1','1'},
 {'0','0','1','0'}},

{{'0','0','0','0'},
 {'0','0','1','0'},
 {'0','1','1','1'},
 {'0','0','0','0'}},

{{'0','0','0','0'},
 {'0','0','1','0'},
 {'0','1','1','0'},
 {'0','0','1','0'}}};
class L_Block:public I_Block{
        public:
		L_Block& rotate(){
                        rotate_index=(rotate_index>2)?0:rotate_index+1;
                        return *this;
                        }

                void paint(){
                        for(int i=0;i<4;++i){
                                for(int j=0;j<x;++j){
                                        cout<<' ';
                                        }
                                for(int j=0;j<4;++j){
					cout<<L_arr[rotate_index][i][j];
					}
				cout<<endl;
				};
			cout<<endl;
			}
	};
class T_Block:public I_Block{
        public:
                T_Block& rotate(){
                        rotate_index=(rotate_index>2)?0:rotate_index+1;
                        return *this;
                        }

                void paint(){
                        for(int i=0;i<4;++i){
                                for(int j=0;j<x;++j){
                                        cout<<' ';
                                        }
                                for(int j=0;j<4;++j){
                                        cout<<T_arr[rotate_index][i][j];
                                        }
                                cout<<endl;
                                };
                        cout<<endl;
                        }
        };
#endif

